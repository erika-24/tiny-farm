`default_nettype none
`timescale 1ns / 1ps

module simple_480p #(parameter CORDW=10) (
    input  wire logic clk_pix,
    input  wire logic rst_pix,
    output      logic [CORDW-1:0] sx,
    output      logic [CORDW-1:0] sy,
    output      logic hsync,
    output      logic vsync,
    output      logic de
);
    localparam logic [CORDW-1:0] H_VISIBLE = 10'd640;
    localparam logic [CORDW-1:0] H_FRONT   = 10'd16;
    localparam logic [CORDW-1:0] H_SYNC    = 10'd96;
    localparam logic [CORDW-1:0] H_BACK    = 10'd48;
    localparam logic [CORDW-1:0] H_TOTAL   = 10'd800;

    localparam logic [CORDW-1:0] V_VISIBLE = 10'd480;
    localparam logic [CORDW-1:0] V_FRONT   = 10'd10;
    localparam logic [CORDW-1:0] V_SYNC    = 10'd2;
    localparam logic [CORDW-1:0] V_BACK    = 10'd33;
    localparam logic [CORDW-1:0] V_TOTAL   = 10'd525;

    always_ff @(posedge clk_pix) begin
        if (rst_pix) begin
            sx <= '0;
            sy <= '0;
        end else begin
            if (sx == H_TOTAL - 1'b1) begin
                sx <= '0;
                if (sy == V_TOTAL - 1'b1) sy <= '0;
                else                      sy <= sy + 1'b1;
            end else begin
                sx <= sx + 1'b1;
            end
        end
    end

    assign de = (sx < H_VISIBLE) && (sy < V_VISIBLE);
    assign hsync = ~((sx >= (H_VISIBLE + H_FRONT)) && (sx < (H_VISIBLE + H_FRONT + H_SYNC)));
    assign vsync = ~((sy >= (V_VISIBLE + V_FRONT)) && (sy < (V_VISIBLE + V_FRONT + V_SYNC)));
endmodule
