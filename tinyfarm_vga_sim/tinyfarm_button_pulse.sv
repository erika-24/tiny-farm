`default_nettype none
`timescale 1ns / 1ps

module tinyfarm_button_pulse (
    input  wire logic clk,
    input  wire logic rst,
    input  wire logic btn_in,
    output      logic pulse_out
);
    logic [2:0] sync_ff;

    always_ff @(posedge clk) begin
        if (rst) begin
            sync_ff <= 3'b000;
        end else begin
            sync_ff <= {sync_ff[1:0], btn_in};
        end
    end

    assign pulse_out = sync_ff[1] & ~sync_ff[2];
endmodule
