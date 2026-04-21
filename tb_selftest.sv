`timescale 1ns/1ps

module tb_tinyfarm_selfcheck;

    logic clk;
    logic rst_n;

    logic [1:0] mode_sel;
    logic [1:0] field_sel;
    logic [1:0] crop_sel;

    logic action_btn;
    logic fulfill_btn;

    logic hsync, vsync;
    logic [1:0] vga_r, vga_g, vga_b;

    logic [7:0]  score_o;
    logic [11:0] inventory_o;
    logic [1:0]  order_crop_o;
    logic [1:0]  order_qty_o;
    logic [3:0]  order_timer_o;

    logic [3:0] timer_before;
    logic [1:0] crop_before;

    int tests_passed;
    int tests_failed;

    localparam logic [1:0] MODE_VIEW    = 2'b00;
    localparam logic [1:0] MODE_PLANT   = 2'b01;
    localparam logic [1:0] MODE_WATER   = 2'b10;
    localparam logic [1:0] MODE_HARVEST = 2'b11;

    localparam logic [1:0] CROP_WHEAT  = 2'd0;
    localparam logic [1:0] CROP_CORN   = 2'd1;
    localparam logic [1:0] CROP_CARROT = 2'd2;
    localparam logic [1:0] CROP_TOMATO = 2'd3;

    // Faster tick for simulation
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

    // 100 MHz simulation clock
    initial clk = 1'b0;
    always #5 clk = ~clk;

    task automatic wait_cycles(input int n);
        int i;
        begin
            for (i = 0; i < n; i = i + 1) @(posedge clk);
        end
    endtask

    task automatic press_action;
        begin
            action_btn = 1'b1;
            wait_cycles(3);
            action_btn = 1'b0;
            wait_cycles(3);
        end
    endtask

    task automatic press_fulfill;
        begin
            fulfill_btn = 1'b1;
            wait_cycles(3);
            fulfill_btn = 1'b0;
            wait_cycles(3);
        end
    endtask

    task automatic report_check(
        input string test_name,
        input logic condition
    );
        begin
            if (condition) begin
                tests_passed = tests_passed + 1;
                $display("GOOD: %s", test_name);
            end else begin
                tests_failed = tests_failed + 1;
                $display("NOT GOOD: %s", test_name);
            end
        end
    endtask

    initial begin
        tests_passed = 0;
        tests_failed = 0;

        rst_n       = 1'b0;
        mode_sel    = MODE_VIEW;
        field_sel   = 2'd0;
        crop_sel    = CROP_WHEAT;
        action_btn  = 1'b0;
        fulfill_btn = 1'b0;

        // Reset
        wait_cycles(5);
        rst_n = 1'b1;
        wait_cycles(5);

        // TEST 1: Reset state
        report_check("Reset clears score",
            score_o == 8'd0
        );

        report_check("Reset clears inventory",
            inventory_o == 12'd0
        );

        report_check("Reset clears field 0",
            dut.fields[0].valid == 1'b0 &&
            dut.fields[0].ready == 1'b0 &&
            dut.fields[0].timer == 4'd0
        );

       report_check("Reset creates valid order quantity",
            (order_qty_o != 2'd0)
        );

        // TEST 2: Plant wheat in field 0
        mode_sel  = MODE_PLANT;
        field_sel = 2'd0;
        crop_sel  = CROP_WHEAT;
        press_action();

        report_check("Plant marks field valid",
            dut.fields[0].valid == 1'b1
        );

        report_check("Plant sets correct crop type",
            dut.fields[0].crop == CROP_WHEAT
        );

        report_check("Plant loads correct wheat timer",
            dut.fields[0].timer == 4'd3
        );

        report_check("Plant clears ready flag",
            dut.fields[0].ready == 1'b0
        );

        // TEST 3: Planting on occupied field has no effect
        crop_sel = CROP_CORN;
        press_action();

        report_check("Plant on occupied field does not overwrite crop",
            dut.fields[0].crop == CROP_WHEAT
        );

        crop_before  = dut.fields[0].crop;
        timer_before = dut.fields[0].timer;

        report_check("Plant on occupied field does not overwrite crop",
            dut.fields[0].crop == crop_before
        );

        report_check("Plant on occupied field does not overwrite timer",
            dut.fields[0].timer == timer_before
        );

        // TEST 4: Watering reduces timer
        timer_before = dut.fields[0].timer;

        mode_sel  = MODE_WATER;
        field_sel = 2'd0;
        press_action();

        report_check("Water decrements timer by 1",
            ((timer_before > 4'd1) && (dut.fields[0].timer == timer_before - 4'd1)) ||
            ((timer_before == 4'd1) && (dut.fields[0].timer == 4'd0))
        );

        report_check("Water does not prematurely set ready",
            dut.fields[0].ready == 1'b0
        );

        // TEST 5: Game tick grows crop to ready
        // Wait long enough for a few game ticks
        wait_cycles(25);

        report_check("Game tick continues decrement",
            dut.fields[0].timer <= 4'd1
        );

        wait_cycles(25);

        report_check("Field becomes ready when timer reaches zero",
            dut.fields[0].ready == 1'b1 &&
            dut.fields[0].timer == 4'd0
        );

        // TEST 6: Harvest ready crop
        mode_sel  = MODE_HARVEST;
        field_sel = 2'd0;
        press_action();

        report_check("Harvest increments wheat inventory",
            dut.inventory[0] == 3'd1
        );

        report_check("Harvest clears field valid",
            dut.fields[0].valid == 1'b0
        );

        report_check("Harvest clears ready flag",
            dut.fields[0].ready == 1'b0
        );

        // TEST 7: Harvest on empty field has no effect
        press_action();

        report_check("Harvest on empty field does not increment inventory",
            dut.inventory[0] == 3'd1
        );

        // TEST 8: Successful fulfill updates score and inventory
        // Force a deterministic order: 1 wheat
        force dut.order_crop  = CROP_WHEAT;
        force dut.order_qty   = 2'd1;
        force dut.order_timer = 4'd8;
        wait_cycles(2);

        press_fulfill();

        report_check("Fulfill decrements inventory",
            dut.inventory[0] == 3'd0
        );

        report_check("Fulfill increments score",
            score_o == 8'd1
        );

        release dut.order_crop;
        release dut.order_qty;
        release dut.order_timer;
        wait_cycles(2);

        // TEST 9: Failed fulfill does not change score
        force dut.order_crop  = CROP_CORN;
        force dut.order_qty   = 2'd2;
        force dut.order_timer = 4'd8;
        wait_cycles(2);

        press_fulfill();

        report_check("Failed fulfill does not change score",
            score_o == 8'd1
        );

        report_check("Failed fulfill does not create negative inventory",
            dut.inventory[1] == 3'd0
        );

        release dut.order_crop;
        release dut.order_qty;
        release dut.order_timer;
        wait_cycles(2);

        // Summary
        $display("--------------------------------------------------");
        $display("TEST SUMMARY: %0d passed, %0d failed", tests_passed, tests_failed);
        $display("--------------------------------------------------");

        if (tests_failed == 0)
            $display("GOOD: All self-checking tests passed.");
        else
            $display("NOT GOOD: One or more self-checking tests failed.");

        $finish;
    end

endmodule