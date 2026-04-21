# TinyFarm SDL Simulation

This is a Project-F-style Verilator + SDL2 simulation of the TinyFarm hardware game.

## Files

- `top_tinyfarm_sim.sv` — TinyFarm game logic plus SDL-friendly video outputs
- `simple_480p.sv` — 640x480 timing generator
- `tinyfarm_button_pulse.sv` — one-shot pulse generator for keyboard buttons
- `main_tinyfarm.cpp` — SDL2 harness that drives the design and shows a window
- `Makefile` — build/run helper

## Build

From this folder:

```bash
verilator -I. -cc top_tinyfarm_sim.sv simple_480p.sv tinyfarm_button_pulse.sv \
    --exe main_tinyfarm.cpp -o tinyfarm_sim \
    -CFLAGS "$(sdl2-config --cflags)" -LDFLAGS "$(sdl2-config --libs)"

make -C ./obj_dir -f Vtop_tinyfarm_sim.mk
./obj_dir/tinyfarm_sim
```

Or just:

```bash
make run
```

## Controls

- **Left / Right**: move selected field
- **V / P / W / H**: switch mode to view / plant / water / harvest
- **1 / 2 / 3 / 4**: select crop wheat / corn / carrot / tomato
- **Space**: perform action on selected field
- **Enter**: fulfill current order
- **R**: reset
- **Esc**: quit

## On-screen layout

- 4 farm fields in a 2x2 grid
- White border shows the selected field
- Empty field = brown
- Growing crop = crop color
- Ready crop = bright green
- White bar near the bottom of a growing field = remaining growth timer
- Right-side top panel = current customer order
- Right-side middle panel = selected crop and current mode
- Bottom strip = inventory bars and score bar

## Notes

- The game advances using a **slow frame-based tick** (`FRAMES_PER_TICK=30`) so that crops and orders progress at a human-viewable speed in simulation.
- This simulation top is meant for **visual verification on your laptop**. It is separate from your FPGA top-level wrapper.
