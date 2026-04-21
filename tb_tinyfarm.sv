`timescale 1ns/1ps



module tb_tinyfarm;
    logic clk;
    logic rst_n;

    logic [1:0] mode_sel;
    logic [1:0] field_sel;
    logic [1:0] crop_sel;
    logic action_btn;
    logic fulfill_btn;

    logic hsync, vsync;
    logic [1:0] vga_r, vga_g, vga_b;

    logic [7:0] score_o;
    logic [11:0] inventory_o;
    logic [1:0] order_crop_o;
    logic [1:0] order_qty_o;
    logic [3:0] order_timer_o;

    // Faster-than-real settings for simulation.
    initial begin
        $dumpfile("tinyfarm.vcd");
        $dumpvars(0, tb_tinyfarm);
    end

    tinyfarm_top #(
        .CLK_HZ(100),
        .GAME_TICK_HZ(10)
    ) dut (
        .clk(clk),
        .rst_n(rst_n),
        .mode_sel(mode_sel),
        .field_sel(field_sel),
        .crop_sel(crop_sel),
        .action_btn(action_btn),
        .fulfill_btn(fulfill_btn),
        .hsync(hsync),
        .vsync(vsync),
        .vga_r(vga_r),
        .vga_g(vga_g),
        .vga_b(vga_b),
        .score_o(score_o),
        .inventory_o(inventory_o),
        .order_crop_o(order_crop_o),
        .order_qty_o(order_qty_o),
        .order_timer_o(order_timer_o)
    );

    initial clk = 1'b0;
    always #5 clk = ~clk;

    task automatic wait_cycles(input int n);
        int k;
        begin
            for (k = 0; k < n; k = k + 1)
                @(posedge clk);
        end
    endtask

    task automatic press_action;
        begin
            action_btn = 1'b1;
            wait_cycles(2);
            action_btn = 1'b0;
            wait_cycles(2);
        end
    endtask

    task automatic press_fulfill;
        begin
            fulfill_btn = 1'b1;
            wait_cycles(2);
            fulfill_btn = 1'b0;
            wait_cycles(2);
        end
    endtask

    initial begin
        rst_n       = 1'b0;
        mode_sel    = 2'b00;
        field_sel   = 2'b00;
        crop_sel    = 2'b00;
        action_btn  = 1'b0;
        fulfill_btn = 1'b0;

        wait_cycles(5);
        rst_n = 1'b1;
        wait_cycles(5);

        // Test 1: plant wheat in field 0
        mode_sel  = 2'b01;
        field_sel = 2'd0;
        crop_sel  = 2'd0;
        press_action();

        // Test 2: water once
        wait_cycles(10);
        mode_sel  = 2'b10;
        field_sel = 2'd0;
        press_action();

        // Wait several ticks for growth
        wait_cycles(60);

        // Test 3: harvest
        mode_sel  = 2'b11;
        field_sel = 2'd0;
        press_action();

        // Force an easy order for integration testing
        force dut.order_crop  = 2'd0;
        force dut.order_qty   = 2'd1;
        force dut.order_timer = 4'd8;
        wait_cycles(3);
        release dut.order_crop;
        release dut.order_qty;
        release dut.order_timer;

        // Test 4: fulfill order
        press_fulfill();
        wait_cycles(20);

        $display("score=%0d inventory=%0h order_crop=%0d order_qty=%0d order_timer=%0d",
                 score_o, inventory_o, order_crop_o, order_qty_o, order_timer_o);

        $finish;
    end
endmodule
