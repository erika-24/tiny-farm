# TinyFarm RTL Milestone

This project is a small SystemVerilog implementation of the proposed TinyFarm FPGA game.

## Included files

- `tinyfarm_top.sv` - top-level game RTL and RGB222 VGA renderer
- `tinyfarm_button_pulse.sv` - simple synchronizer / pulse generator for button inputs
- `tinyfarm_vga_timing.sv` - 640x480 VGA timing generator
- `tb_tinyfarm.sv` - simulation testbench

## Gameplay implemented

- 4 farm fields
- 4 crop types: wheat, corn, carrot, tomato
- Plant / water / harvest actions
- Per-field growth timer
- 4 inventory counters
- One active order with crop, quantity, and timer
- Score increment on successful fulfill
- New order generation using a small LFSR-based generator
- RGB222 VGA display compatible with Tiny VGA style output

## Inputs

- `mode_sel[1:0]`
  - `00` = view
  - `01` = plant
  - `10` = water
  - `11` = harvest
- `field_sel[1:0]` = select one of 4 fields
- `crop_sel[1:0]` = select crop for planting
- `action_btn` = apply plant / water / harvest depending on mode
- `fulfill_btn` = try to fulfill current order

## Outputs

- `hsync`, `vsync`
- `vga_r[1:0]`, `vga_g[1:0]`, `vga_b[1:0]`

These video outputs are sized for a 2-bits-per-color VGA interface such as Tiny VGA.

## Display behavior

The VGA output is intentionally simple for milestone purposes:

- four large colored field rectangles
- white border around selected field
- order panel with crop swatch and quantity bars
- inventory bars
- score bar
- order timer bar

## Notes

- The VGA timing generator assumes a nominal 25 MHz pixel clock.
- The top-level `clk` should therefore be driven by an appropriate pixel-rate clock on hardware.
- The included button pulse block is only a light synchronizer + edge detector, not a full robust mechanical debounce design.
- Board-specific top wrapper and pin constraints are not included here because those depend on the exact FPGA board and your lab flow.

## Example simulation

TODO