#include <cstdio>
#include <cstdint>
#include <SDL.h>
#include <verilated.h>
#include "Vtop_tinyfarm_sim.h"
#include <string>

const int H_RES = 640;
const int V_RES = 480;

typedef struct Pixel {
    uint8_t a;
    uint8_t b;
    uint8_t g;
    uint8_t r;
} Pixel;

static const char* mode_name(uint8_t mode) {
    switch (mode) {
        case 0: return "VIEW";
        case 1: return "PLANT";
        case 2: return "WATER";
        default: return "HARVEST";
    }
}

static const char* crop_name(uint8_t crop) {
    switch (crop) {
        case 0: return "WHEAT";
        case 1: return "CORN";
        case 2: return "CARROT";
        default: return "TOMATO";
    }
}

static void print_action(const std::string& msg) {
    std::printf("ACTION: %s\n", msg.c_str());
}

static void print_controls() {
    std::printf("TinyFarm controls\n");
    std::printf("  Left/Right Arrows : select field\n");
    std::printf("  V / P / W / H     : mode = view / plant / water / harvest\n");
    std::printf("  1 / 2 / 3 / 4     : crop = wheat / corn / carrot / tomato\n");
    std::printf("  Space             : action\n");
    std::printf("  Enter             : fulfill order\n");
    std::printf("  R                 : reset\n");
    std::printf("  Esc               : quit\n\n");
}

static void print_order(Vtop_tinyfarm_sim* top) {
    std::printf("ORDER: crop=%s qty=%d time=%d\n",
        crop_name(top->order_crop_o),
        top->order_qty_o,
        top->order_timer_o
    );
}

int main(int argc, char* argv[]) {
    Verilated::commandArgs(argc, argv);

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::printf("SDL init failed: %s\n", SDL_GetError());
        return 1;
    }

    Pixel screenbuffer[H_RES * V_RES] = {};

    SDL_Window* sdl_window = SDL_CreateWindow(
        "TinyFarm (Verilator + SDL2)",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        H_RES, V_RES, SDL_WINDOW_SHOWN);
    if (!sdl_window) {
        std::printf("Window creation failed: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Renderer* sdl_renderer = SDL_CreateRenderer(
        sdl_window, -1,
        SDL_RENDERER_ACCELERATED);
    if (!sdl_renderer) {
        std::printf("Renderer creation failed: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Texture* sdl_texture = SDL_CreateTexture(
        sdl_renderer, SDL_PIXELFORMAT_RGBA8888,
        SDL_TEXTUREACCESS_TARGET, H_RES, V_RES);
    if (!sdl_texture) {
        std::printf("Texture creation failed: %s\n", SDL_GetError());
        return 1;
    }

    print_controls();

    Vtop_tinyfarm_sim* top = new Vtop_tinyfarm_sim;

    // initial conditions
    top->clk_pix = 0;
    top->sim_rst = 1;
    top->ui_mode_sel = 0;
    top->ui_crop_sel = 0;
    top->btn_left = 0;
    top->btn_right = 0;
    top->btn_action = 0;
    top->btn_fulfill = 0;

    // reset for a couple cycles
    top->eval();
    top->clk_pix = 1; top->eval();
    top->clk_pix = 0; top->eval();
    top->clk_pix = 1; top->eval();
    top->sim_rst = 0;
    top->clk_pix = 0; top->eval();

    print_order(top);

    uint64_t start_ticks = SDL_GetPerformanceCounter();
    uint64_t frame_count = 0;

    bool prev_left = false, prev_right = false, prev_space = false, prev_enter = false, prev_r = false;
    bool prev_v = false, prev_p = false, prev_w = false, prev_h = false;
    bool prev_1 = false, prev_2 = false, prev_3 = false, prev_4 = false;

    uint8_t prev_order_crop  = 0;
    uint8_t prev_order_qty   = 0;
    uint8_t prev_order_timer = 0;

    while (1) {
        SDL_PumpEvents();
        const Uint8* keyb_state = SDL_GetKeyboardState(NULL);

        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) goto done;
        }

        if (keyb_state[SDL_SCANCODE_ESCAPE]) break;

        bool cur_left  = keyb_state[SDL_SCANCODE_LEFT];
        bool cur_right = keyb_state[SDL_SCANCODE_RIGHT];
        bool cur_space = keyb_state[SDL_SCANCODE_SPACE];
        bool cur_enter = keyb_state[SDL_SCANCODE_RETURN] || keyb_state[SDL_SCANCODE_KP_ENTER];
        bool cur_r     = keyb_state[SDL_SCANCODE_R];
        bool cur_v     = keyb_state[SDL_SCANCODE_V];
        bool cur_p     = keyb_state[SDL_SCANCODE_P];
        bool cur_w     = keyb_state[SDL_SCANCODE_W];
        bool cur_h     = keyb_state[SDL_SCANCODE_H];
        bool cur_1     = keyb_state[SDL_SCANCODE_1];
        bool cur_2     = keyb_state[SDL_SCANCODE_2];
        bool cur_3     = keyb_state[SDL_SCANCODE_3];
        bool cur_4     = keyb_state[SDL_SCANCODE_4];

        // level-style inputs; RTL edge-detect turns them into single pulses
        top->btn_left    = cur_left;
        top->btn_right   = cur_right;
        top->btn_action  = cur_space;
        top->btn_fulfill = cur_enter;

        // update selections on key press, and log them
        if (cur_v && !prev_v) { top->ui_mode_sel = 0; print_action("mode -> VIEW"); }
        if (cur_p && !prev_p) { top->ui_mode_sel = 1; print_action("mode -> PLANT"); }
        if (cur_w && !prev_w) { top->ui_mode_sel = 2; print_action("mode -> WATER"); }
        if (cur_h && !prev_h) { top->ui_mode_sel = 3; print_action("mode -> HARVEST"); }

        if (cur_1 && !prev_1) { top->ui_crop_sel = 0; print_action("crop -> WHEAT"); }
        if (cur_2 && !prev_2) { top->ui_crop_sel = 1; print_action("crop -> CORN"); }
        if (cur_3 && !prev_3) { top->ui_crop_sel = 2; print_action("crop -> CARROT"); }
        if (cur_4 && !prev_4) { top->ui_crop_sel = 3; print_action("crop -> TOMATO"); }

        if (cur_left && !prev_left)  print_action("select field -> left");
        if (cur_right && !prev_right) print_action("select field -> right");

        if (cur_space && !prev_space) {
            std::printf("ACTION: do %s using %s\n",
                        mode_name(top->ui_mode_sel),
                        crop_name(top->ui_crop_sel));
        }

        if (cur_enter && !prev_enter) print_action("fulfill current order");
        if (cur_r && !prev_r) print_action("reset");

        top->sim_rst = cur_r;

        top->clk_pix = 1;
        top->eval();
        top->clk_pix = 0;
        top->eval();

        prev_left = cur_left;
        prev_right = cur_right;
        prev_space = cur_space;
        prev_enter = cur_enter;
        prev_r = cur_r;
        prev_v = cur_v;
        prev_p = cur_p;
        prev_w = cur_w;
        prev_h = cur_h;
        prev_1 = cur_1;
        prev_2 = cur_2;
        prev_3 = cur_3;
        prev_4 = cur_4;

        if (top->order_crop_o  != prev_order_crop ||
        top->order_qty_o   != prev_order_qty ||
        top->order_timer_o != prev_order_timer) {

        print_order(top);

        prev_order_crop  = top->order_crop_o;
        prev_order_qty   = top->order_qty_o;
        prev_order_timer = top->order_timer_o;
}

        if (top->sdl_de) {
            Pixel* p = &screenbuffer[top->sdl_sy * H_RES + top->sdl_sx];
            p->a = 0xFF;
            p->b = top->sdl_b;
            p->g = top->sdl_g;
            p->r = top->sdl_r;
        }

        if (top->sdl_sy == V_RES && top->sdl_sx == 0) {
            SDL_UpdateTexture(sdl_texture, NULL, screenbuffer, H_RES * sizeof(Pixel));
            SDL_RenderClear(sdl_renderer);
            SDL_RenderCopy(sdl_renderer, sdl_texture, NULL, NULL);
            SDL_RenderPresent(sdl_renderer);
            frame_count++;
        }
    }

done:
    {
        uint64_t end_ticks = SDL_GetPerformanceCounter();
        double duration = static_cast<double>(end_ticks - start_ticks) / SDL_GetPerformanceFrequency();
        double fps = (duration > 0.0) ? static_cast<double>(frame_count) / duration : 0.0;
        std::printf("Frames per second: %.1f\n", fps);
    }

    top->final();
    delete top;
    SDL_DestroyTexture(sdl_texture);
    SDL_DestroyRenderer(sdl_renderer);
    SDL_DestroyWindow(sdl_window);
    SDL_Quit();
    return 0;
}
