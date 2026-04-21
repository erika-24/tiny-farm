TOP = top_tinyfarm_sim
VERILOG = top_tinyfarm_sim.sv simple_480p.sv tinyfarm_button_pulse.sv
CPP = main_tinyfarm.cpp

all:
	verilator -I. -cc $(TOP).sv simple_480p.sv tinyfarm_button_pulse.sv \
		--exe $(CPP) -o tinyfarm_sim \
		-CFLAGS "$(shell sdl2-config --cflags)" \
		-LDFLAGS "$(shell sdl2-config --libs)"
	make -C ./obj_dir -f V$(TOP).mk

run: all
	./obj_dir/tinyfarm_sim

clean:
	rm -rf obj_dir
