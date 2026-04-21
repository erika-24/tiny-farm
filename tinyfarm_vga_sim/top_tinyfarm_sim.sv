`default_nettype none
`timescale 1ns / 1ps

module top_tinyfarm_sim #(parameter CORDW=10, parameter FRAMES_PER_TICK=3) (
    input  wire logic clk_pix,
    input  wire logic sim_rst,

    input  wire logic [1:0] ui_mode_sel,      // 00=view 01=plant 10=water 11=harvest
    input  wire logic [1:0] ui_crop_sel,      // 00=wheat 01=corn 10=carrot 11=tomato
    input  wire logic btn_left,
    input  wire logic btn_right,
    input  wire logic btn_action,
    input  wire logic btn_fulfill,

    output      logic [CORDW-1:0] sdl_sx,
    output      logic [CORDW-1:0] sdl_sy,
    output      logic sdl_de,
    output      logic [7:0] sdl_r,
    output      logic [7:0] sdl_g,
    output      logic [7:0] sdl_b,
    output logic [1:0] order_crop_o,
    output logic [1:0] order_qty_o,
    output logic [4:0] order_timer_o
);
    localparam logic [1:0] MODE_VIEW    = 2'b00;
    localparam logic [1:0] MODE_PLANT   = 2'b01;
    localparam logic [1:0] MODE_WATER   = 2'b10;
    localparam logic [1:0] MODE_HARVEST = 2'b11;

    localparam logic [1:0] CROP_WHEAT  = 2'd0;
    localparam logic [1:0] CROP_CORN   = 2'd1;
    localparam logic [1:0] CROP_CARROT = 2'd2;
    localparam logic [1:0] CROP_TOMATO = 2'd3;

    logic [CORDW-1:0] sx, sy;
    logic hsync, vsync, de;
    simple_480p #(.CORDW(CORDW)) display_inst (
        .clk_pix,
        .rst_pix(sim_rst),
        .sx,
        .sy,
        .hsync,
        .vsync,
        .de
    );

    // one-shot pulses from raw keyboard/button state
    logic pulse_left, pulse_right, pulse_action, pulse_fulfill;
    tinyfarm_button_pulse u_left   (.clk(clk_pix), .rst(sim_rst), .btn_in(btn_left),    .pulse_out(pulse_left));
    tinyfarm_button_pulse u_right  (.clk(clk_pix), .rst(sim_rst), .btn_in(btn_right),   .pulse_out(pulse_right));
    tinyfarm_button_pulse u_action (.clk(clk_pix), .rst(sim_rst), .btn_in(btn_action),  .pulse_out(pulse_action));
    tinyfarm_button_pulse u_fulf   (.clk(clk_pix), .rst(sim_rst), .btn_in(btn_fulfill), .pulse_out(pulse_fulfill));

    // game state
    logic [1:0] field_sel;
    logic       field_valid [0:3];
    logic       field_ready [0:3];
    logic [1:0] field_crop  [0:3];
    logic [2:0] field_timer [0:3];

    logic [2:0] inv_wheat, inv_corn, inv_carrot, inv_tomato;
    logic [1:0] order_crop, order_qty;
    logic [4:0] order_timer;
    logic [7:0] score;
    logic [7:0] lfsr;
    logic [9:0] frames_until_tick;
    logic       frame_pulse;

    assign order_crop_o  = order_crop;
    assign order_qty_o   = order_qty;
    assign order_timer_o = order_timer;

    integer i;

    function automatic logic [2:0] crop_growth_time(input logic [1:0] crop);
        begin
            case (crop)
                CROP_WHEAT:  crop_growth_time = 3'd3;
                CROP_CORN:   crop_growth_time = 3'd4;
                CROP_CARROT: crop_growth_time = 3'd5;
                default:     crop_growth_time = 3'd6;
            endcase
        end
    endfunction

    function automatic logic [7:0] lfsr_advance(input logic [7:0] cur);
        logic feedback;
        begin
            feedback     = cur[7] ^ cur[5] ^ cur[4] ^ cur[3];
            lfsr_advance = {cur[6:0], feedback};
            if (lfsr_advance == 8'h00) lfsr_advance = 8'hA5;
        end
    endfunction

    function automatic logic [1:0] qty_from_lfsr(input logic [7:0] cur);
        begin
            case (cur[3:2])
                2'd0: qty_from_lfsr = 2'd1;
                2'd1: qty_from_lfsr = 2'd2;
                default: qty_from_lfsr = 2'd3;
            endcase
        end
    endfunction

    function automatic logic [2:0] sat_inc3(input logic [2:0] v);
        begin
            if (v < 3'd7) sat_inc3 = v + 3'd1;
            else          sat_inc3 = v;
        end
    endfunction

    function automatic logic [7:0] crop_r(input logic [1:0] crop);
        begin
            case (crop)
                CROP_WHEAT:  crop_r = 8'hF2;
                CROP_CORN:   crop_r = 8'hFF;
                CROP_CARROT: crop_r = 8'hFF;
                default:     crop_r = 8'hE5;
            endcase
        end
    endfunction
    function automatic logic [7:0] crop_g(input logic [1:0] crop);
        begin
            case (crop)
                CROP_WHEAT:  crop_g = 8'hD0;
                CROP_CORN:   crop_g = 8'hF0;
                CROP_CARROT: crop_g = 8'h80;
                default:     crop_g = 8'h3A;
            endcase
        end
    endfunction
    function automatic logic [7:0] crop_b(input logic [1:0] crop);
        begin
            case (crop)
                CROP_WHEAT:  crop_b = 8'h40;
                CROP_CORN:   crop_b = 8'h30;
                CROP_CARROT: crop_b = 8'h22;
                default:     crop_b = 8'h28;
            endcase
        end
    endfunction

    function automatic logic in_rect(
        input logic [CORDW-1:0] x,
        input logic [CORDW-1:0] y,
        input logic [CORDW-1:0] x0,
        input logic [CORDW-1:0] y0,
        input logic [CORDW-1:0] w,
        input logic [CORDW-1:0] h
    );
        begin
            in_rect = (x >= x0) && (x < x0 + w) && (y >= y0) && (y < y0 + h);
        end
    endfunction

    function automatic logic on_border(
        input logic [CORDW-1:0] x,
        input logic [CORDW-1:0] y,
        input logic [CORDW-1:0] x0,
        input logic [CORDW-1:0] y0,
        input logic [CORDW-1:0] w,
        input logic [CORDW-1:0] h,
        input logic [CORDW-1:0] t
    );
        begin
            on_border = in_rect(x,y,x0,y0,w,h) && (
                        (x < x0+t) || (x >= x0+w-t) ||
                        (y < y0+t) || (y >= y0+h-t));
        end
    endfunction

    assign frame_pulse = (sx == 10'd0 && sy == 10'd480);

    always_ff @(posedge clk_pix) begin : game_update
        logic [7:0] new_lfsr;
        if (sim_rst) begin
            field_sel <= 2'd0;
            for (i = 0; i < 4; i = i + 1) begin
                field_valid[i] <= 1'b0;
                field_ready[i] <= 1'b0;
                field_crop[i]  <= 2'd0;
                field_timer[i] <= 3'd0;
            end
            inv_wheat  <= 3'd0;
            inv_corn   <= 3'd0;
            inv_carrot <= 3'd0;
            inv_tomato <= 3'd0;
            order_crop <= 2'd0;
            order_qty  <= 2'd1;
            order_timer <= 5'd12;
            score <= 8'd0;
            lfsr  <= 8'hA5;
            frames_until_tick <= FRAMES_PER_TICK - 1;
        end else begin
            // field selection
            if (pulse_left)  field_sel <= field_sel - 2'd1;
            if (pulse_right) field_sel <= field_sel + 2'd1;

            // player action
            if (pulse_action) begin
                case (ui_mode_sel)
                    MODE_PLANT: begin
                        if (!field_valid[field_sel]) begin
                            field_valid[field_sel] <= 1'b1;
                            field_ready[field_sel] <= 1'b0;
                            field_crop[field_sel]  <= ui_crop_sel;
                            field_timer[field_sel] <= crop_growth_time(ui_crop_sel);
                        end
                    end
                    MODE_WATER: begin
                        if (field_valid[field_sel] && !field_ready[field_sel]) begin
                            if (field_timer[field_sel] > 3'd1) begin
                                field_timer[field_sel] <= field_timer[field_sel] - 3'd1;
                            end else begin
                                field_timer[field_sel] <= 3'd0;
                                field_ready[field_sel] <= 1'b1;
                            end
                        end
                    end
                    MODE_HARVEST: begin
                        if (field_valid[field_sel] && field_ready[field_sel]) begin
                            case (field_crop[field_sel])
                                CROP_WHEAT:  inv_wheat  <= sat_inc3(inv_wheat);
                                CROP_CORN:   inv_corn   <= sat_inc3(inv_corn);
                                CROP_CARROT: inv_carrot <= sat_inc3(inv_carrot);
                                default:     inv_tomato <= sat_inc3(inv_tomato);
                            endcase
                            field_valid[field_sel] <= 1'b0;
                            field_ready[field_sel] <= 1'b0;
                            field_crop[field_sel]  <= 2'd0;
                            field_timer[field_sel] <= 3'd0;
                        end
                    end
                    default: begin end
                endcase
            end

            // fulfill order
            if (pulse_fulfill) begin
                case (order_crop)
                    CROP_WHEAT: begin
                        if (inv_wheat >= {1'b0, order_qty}) begin
                            inv_wheat <= inv_wheat - {1'b0, order_qty};
                            score <= score + 8'd1;
                            new_lfsr = lfsr_advance(lfsr);
                            lfsr <= new_lfsr;
                            order_crop <= new_lfsr[1:0];
                            order_qty <= qty_from_lfsr(new_lfsr);
                            order_timer <= 5'd12;
                        end
                    end
                    CROP_CORN: begin
                        if (inv_corn >= {1'b0, order_qty}) begin
                            inv_corn <= inv_corn - {1'b0, order_qty};
                            score <= score + 8'd1;
                            new_lfsr = lfsr_advance(lfsr);
                            lfsr <= new_lfsr;
                            order_crop <= new_lfsr[1:0];
                            order_qty <= qty_from_lfsr(new_lfsr);
                            order_timer <= 5'd12;
                        end
                    end
                    CROP_CARROT: begin
                        if (inv_carrot >= {1'b0, order_qty}) begin
                            inv_carrot <= inv_carrot - {1'b0, order_qty};
                            score <= score + 8'd1;
                            new_lfsr = lfsr_advance(lfsr);
                            lfsr <= new_lfsr;
                            order_crop <= new_lfsr[1:0];
                            order_qty <= qty_from_lfsr(new_lfsr);
                            order_timer <= 5'd12;
                        end
                    end
                    default: begin
                        if (inv_tomato >= {1'b0, order_qty}) begin
                            inv_tomato <= inv_tomato - {1'b0, order_qty};
                            score <= score + 8'd1;
                            new_lfsr = lfsr_advance(lfsr);
                            lfsr <= new_lfsr;
                            order_crop <= new_lfsr[1:0];
                            order_qty <= qty_from_lfsr(new_lfsr);
                            order_timer <= 5'd12;
                        end
                    end
                endcase
            end

            // slow game tick every FRAMES_PER_TICK rendered frames
            if (frame_pulse) begin
                if (frames_until_tick != 10'd0) begin
                    frames_until_tick <= frames_until_tick - 10'd1;
                end else begin
                    frames_until_tick <= FRAMES_PER_TICK - 1;
                    for (i = 0; i < 4; i = i + 1) begin
                        if (field_valid[i] && !field_ready[i]) begin
                            if (field_timer[i] > 3'd1) begin
                                field_timer[i] <= field_timer[i] - 3'd1;
                            end else begin
                                field_timer[i] <= 3'd0;
                                field_ready[i] <= 1'b1;
                            end
                        end
                    end
                    if (order_timer > 5'd1) begin
                        order_timer <= order_timer - 5'd1;
                    end else begin
                        if (score != 8'd0) score <= score - 8'd1;
                        new_lfsr = lfsr_advance(lfsr);
                        lfsr <= new_lfsr;
                        order_crop <= new_lfsr[1:0];
                        order_qty <= qty_from_lfsr(new_lfsr);
                        order_timer <= 5'd12;
                    end
                end
            end
        end
    end

    // Rendering
    logic [7:0] paint_r, paint_g, paint_b;
    logic [7:0] fr, fg, fb;
    logic [9:0] qtybars_w;
    logic [9:0] timer_w;
    logic [9:0] score_w;
    logic [9:0] invw_h, invc_h, invca_h, invt_h;

    always_comb begin
        paint_r = 8'h18;
        paint_g = 8'h63;
        paint_b = 8'h2A;

        // precompute bar sizes
        qtybars_w = {6'd0, order_qty} * 8'd18;
        timer_w   = order_timer * 8'd10;
        score_w   = score[4:0] * 8'd8;
        invw_h    = {5'd0, inv_wheat} * 8'd10;
        invc_h    = {5'd0, inv_corn} * 8'd10;
        invca_h   = {5'd0, inv_carrot} * 8'd10;
        invt_h    = {5'd0, inv_tomato} * 8'd10;

        // field 0
        fr = 8'h7B; fg = 8'h4C; fb = 8'h20;
        if (field_valid[0]) begin
            if (field_ready[0]) begin
                fr = 8'h44; fg = 8'hE0; fb = 8'h44;
            end else begin
                fr = crop_r(field_crop[0]);
                fg = crop_g(field_crop[0]);
                fb = crop_b(field_crop[0]);
            end
        end
        if (in_rect(sx,sy,10'd30,10'd30,10'd180,10'd140)) begin
            paint_r = fr; paint_g = fg; paint_b = fb;
        end
        if (on_border(sx,sy,10'd30,10'd30,10'd180,10'd140,10'd4) && field_sel == 2'd0) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end
        if (field_valid[0] && !field_ready[0] && in_rect(sx,sy,10'd42,10'd150, {7'd0,field_timer[0]}*10'd20, 10'd8)) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end

        // field 1
        fr = 8'h7B; fg = 8'h4C; fb = 8'h20;
        if (field_valid[1]) begin
            if (field_ready[1]) begin
                fr = 8'h44; fg = 8'hE0; fb = 8'h44;
            end else begin
                fr = crop_r(field_crop[1]);
                fg = crop_g(field_crop[1]);
                fb = crop_b(field_crop[1]);
            end
        end
        if (in_rect(sx,sy,10'd230,10'd30,10'd180,10'd140)) begin
            paint_r = fr; paint_g = fg; paint_b = fb;
        end
        if (on_border(sx,sy,10'd230,10'd30,10'd180,10'd140,10'd4) && field_sel == 2'd1) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end
        if (field_valid[1] && !field_ready[1] && in_rect(sx,sy,10'd242,10'd150,{7'd0,field_timer[1]}*10'd20,10'd8)) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end

        // field 2
        fr = 8'h7B; fg = 8'h4C; fb = 8'h20;
        if (field_valid[2]) begin
            if (field_ready[2]) begin
                fr = 8'h44; fg = 8'hE0; fb = 8'h44;
            end else begin
                fr = crop_r(field_crop[2]);
                fg = crop_g(field_crop[2]);
                fb = crop_b(field_crop[2]);
            end
        end
        if (in_rect(sx,sy,10'd30,10'd200,10'd180,10'd140)) begin
            paint_r = fr; paint_g = fg; paint_b = fb;
        end
        if (on_border(sx,sy,10'd30,10'd200,10'd180,10'd140,10'd4) && field_sel == 2'd2) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end
        if (field_valid[2] && !field_ready[2] && in_rect(sx,sy,10'd42,10'd320,{7'd0,field_timer[2]}*10'd20,10'd8)) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end

        // field 3
        fr = 8'h7B; fg = 8'h4C; fb = 8'h20;
        if (field_valid[3]) begin
            if (field_ready[3]) begin
                fr = 8'h44; fg = 8'hE0; fb = 8'h44;
            end else begin
                fr = crop_r(field_crop[3]);
                fg = crop_g(field_crop[3]);
                fb = crop_b(field_crop[3]);
            end
        end
        if (in_rect(sx,sy,10'd230,10'd200,10'd180,10'd140)) begin
            paint_r = fr; paint_g = fg; paint_b = fb;
        end
        if (on_border(sx,sy,10'd230,10'd200,10'd180,10'd140,10'd4) && field_sel == 2'd3) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end
        if (field_valid[3] && !field_ready[3] && in_rect(sx,sy,10'd242,10'd320,{7'd0,field_timer[3]}*10'd20,10'd8)) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end

        // right-side panels
        if (in_rect(sx,sy,10'd450,10'd30,10'd160,10'd130)) begin
            paint_r = 8'h28; paint_g = 8'h28; paint_b = 8'h30;
        end
        if (on_border(sx,sy,10'd450,10'd30,10'd160,10'd130,10'd3)) begin
            paint_r = 8'hD0; paint_g = 8'hD0; paint_b = 8'hD0;
        end
        if (in_rect(sx,sy,10'd470,10'd55,10'd55,10'd55)) begin
            paint_r = crop_r(order_crop); paint_g = crop_g(order_crop); paint_b = crop_b(order_crop);
        end
        // quantity bar background
        if (in_rect(sx,sy,10'd540,10'd70,10'd60,10'd18)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd540,10'd70,10'd60,10'd18,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        // quantity bar fill
        if (in_rect(sx,sy,10'd542,10'd72,qtybars_w,10'd14)) begin
            paint_r = 8'hF0; paint_g = 8'hF0; paint_b = 8'hF0;
        end
        // order timer bar background
        if (in_rect(sx,sy,10'd540,10'd100,10'd60,10'd12)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd540,10'd100,10'd60,10'd12,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        // order timer fill
        if (in_rect(sx,sy,10'd542,10'd102,timer_w,10'd8)) begin
            paint_r = 8'hF2; paint_g = 8'hB0; paint_b = 8'h3C;
        end

        // status panel: selected crop + current mode
        if (in_rect(sx,sy,10'd450,10'd180,10'd160,10'd110)) begin
            paint_r = 8'h30; paint_g = 8'h30; paint_b = 8'h30;   // neutral dark gray
        end
        if (on_border(sx,sy,10'd450,10'd180,10'd160,10'd110,10'd3)) begin
            paint_r = 8'hD0; paint_g = 8'hD0; paint_b = 8'hD0;   // light border
        end

        // selected crop swatch
        if (in_rect(sx,sy,10'd470,10'd200,10'd55,10'd55)) begin
            paint_r = crop_r(ui_crop_sel);
            paint_g = crop_g(ui_crop_sel);
            paint_b = crop_b(ui_crop_sel);
        end
        if (on_border(sx,sy,10'd470,10'd200,10'd55,10'd55,10'd2)) begin
            paint_r = 8'hFF; paint_g = 8'hFF; paint_b = 8'hFF;
        end

        // mode indicators: top-left=view, top-right=plant, bottom-left=water, bottom-right=harvest
        if (in_rect(sx,sy,10'd540,10'd195,10'd22,10'd18)) begin
            if (ui_mode_sel == MODE_VIEW) begin
                paint_r = 8'hE8; paint_g = 8'hE8; paint_b = 8'hE8;
            end else begin
                paint_r = 8'h60; paint_g = 8'h60; paint_b = 8'h60;
            end
        end
        if (in_rect(sx,sy,10'd570,10'd195,10'd22,10'd18)) begin
            if (ui_mode_sel == MODE_PLANT) begin
                paint_r = 8'hFF; paint_g = 8'hD8; paint_b = 8'h50;
            end else begin
                paint_r = 8'h60; paint_g = 8'h60; paint_b = 8'h60;
            end
        end
        if (in_rect(sx,sy,10'd540,10'd225,10'd22,10'd18)) begin
            if (ui_mode_sel == MODE_WATER) begin
                paint_r = 8'h50; paint_g = 8'hC8; paint_b = 8'hFF;
            end else begin
                paint_r = 8'h60; paint_g = 8'h60; paint_b = 8'h60;
            end
        end
        if (in_rect(sx,sy,10'd570,10'd225,10'd22,10'd18)) begin
            if (ui_mode_sel == MODE_HARVEST) begin
                paint_r = 8'h50; paint_g = 8'hFF; paint_b = 8'h50;
            end else begin
                paint_r = 8'h60; paint_g = 8'h60; paint_b = 8'h60;
            end
        end

        // inventory + score strip at bottom
        if (in_rect(sx,sy,10'd20,10'd390,10'd600,10'd70)) begin
            paint_r = 8'h18; paint_g = 8'h18; paint_b = 8'h18;
        end
        // wheat inventory container
        if (in_rect(sx,sy,10'd50,10'd370,10'd28,10'd80)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd50,10'd370,10'd28,10'd80,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        // wheat fill
        if (in_rect(sx,sy,10'd52,10'd448-invw_h,10'd24,invw_h)) begin
            paint_r = crop_r(2'd0);
            paint_g = crop_g(2'd0);
            paint_b = crop_b(2'd0);
        end
        // corn inventory
        if (in_rect(sx,sy,10'd95,10'd370,10'd28,10'd80)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd95,10'd370,10'd28,10'd80,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        if (in_rect(sx,sy,10'd97,10'd448-invc_h,10'd24,invc_h)) begin
            paint_r = crop_r(2'd1);
            paint_g = crop_g(2'd1);
            paint_b = crop_b(2'd1);
        end
        // carrot inventory
        if (in_rect(sx,sy,10'd140,10'd370,10'd28,10'd80)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd140,10'd370,10'd28,10'd80,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        if (in_rect(sx,sy,10'd142,10'd448-invca_h,10'd24,invca_h)) begin
            paint_r = crop_r(2'd2);
            paint_g = crop_g(2'd2);
            paint_b = crop_b(2'd2);
        end
        // tomato inventory
        if (in_rect(sx,sy,10'd185,10'd370,10'd28,10'd80)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd185,10'd370,10'd28,10'd80,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        if (in_rect(sx,sy,10'd187,10'd448-invt_h,10'd24,invt_h)) begin
            paint_r = crop_r(2'd3);
            paint_g = crop_g(2'd3);
            paint_b = crop_b(2'd3);
        end
        // score bar background
        if (in_rect(sx,sy,10'd280,10'd420,10'd120,10'd20)) begin
            paint_r = 8'h20; paint_g = 8'h20; paint_b = 8'h20;
        end
        if (on_border(sx,sy,10'd280,10'd420,10'd120,10'd20,10'd2)) begin
            paint_r = 8'hC0; paint_g = 8'hC0; paint_b = 8'hC0;
        end
        // score fill
        if (in_rect(sx,sy,10'd282,10'd422,score_w,10'd16)) begin
            paint_r = 8'h40; paint_g = 8'hE0; paint_b = 8'h40;
        end
    end

    // register outputs for SDL
    always_ff @(posedge clk_pix) begin
        sdl_sx <= sx;
        sdl_sy <= sy;
        sdl_de <= de;
        sdl_r  <= (de) ? paint_r : 8'h00;
        sdl_g  <= (de) ? paint_g : 8'h00;
        sdl_b  <= (de) ? paint_b : 8'h00;
    end
endmodule
