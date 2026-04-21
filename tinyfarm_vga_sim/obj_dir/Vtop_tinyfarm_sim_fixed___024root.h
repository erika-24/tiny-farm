// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tinyfarm_sim_fixed.h for the primary calling header

#ifndef VERILATED_VTOP_TINYFARM_SIM_FIXED___024ROOT_H_
#define VERILATED_VTOP_TINYFARM_SIM_FIXED___024ROOT_H_  // guard

#include "verilated.h"


class Vtop_tinyfarm_sim_fixed__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tinyfarm_sim_fixed___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_pix,0,0);
        VL_IN8(sim_rst,0,0);
        VL_IN8(ui_mode_sel,1,0);
        VL_IN8(ui_crop_sel,1,0);
        VL_IN8(btn_left,0,0);
        VL_IN8(btn_right,0,0);
        VL_IN8(btn_action,0,0);
        VL_IN8(btn_fulfill,0,0);
        VL_OUT8(sdl_de,0,0);
        VL_OUT8(sdl_r,7,0);
        VL_OUT8(sdl_g,7,0);
        VL_OUT8(sdl_b,7,0);
        CData/*0:0*/ top_tinyfarm_sim__DOT__de;
        CData/*1:0*/ top_tinyfarm_sim__DOT__field_sel;
        CData/*2:0*/ top_tinyfarm_sim__DOT__inv_wheat;
        CData/*2:0*/ top_tinyfarm_sim__DOT__inv_corn;
        CData/*2:0*/ top_tinyfarm_sim__DOT__inv_carrot;
        CData/*2:0*/ top_tinyfarm_sim__DOT__inv_tomato;
        CData/*1:0*/ top_tinyfarm_sim__DOT__order_crop;
        CData/*1:0*/ top_tinyfarm_sim__DOT__order_qty;
        CData/*4:0*/ top_tinyfarm_sim__DOT__order_timer;
        CData/*7:0*/ top_tinyfarm_sim__DOT__score;
        CData/*7:0*/ top_tinyfarm_sim__DOT__lfsr;
        CData/*7:0*/ top_tinyfarm_sim__DOT__paint_r;
        CData/*7:0*/ top_tinyfarm_sim__DOT__paint_g;
        CData/*7:0*/ top_tinyfarm_sim__DOT__paint_b;
        CData/*7:0*/ top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
        CData/*2:0*/ top_tinyfarm_sim__DOT__u_left__DOT__sync_ff;
        CData/*2:0*/ top_tinyfarm_sim__DOT__u_right__DOT__sync_ff;
        CData/*2:0*/ top_tinyfarm_sim__DOT__u_action__DOT__sync_ff;
        CData/*2:0*/ top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__15__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__16__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__17__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__18__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__19__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__20__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__21__Vfuncout;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__22__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__23__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__24__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__25__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__26__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__27__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__28__Vfuncout;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__29__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__30__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__31__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__32__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__33__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__34__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__35__Vfuncout;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__36__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__37__Vfuncout;
    };
    struct {
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__38__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__39__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__40__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__41__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__42__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__43__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__44__Vfuncout;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__45__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__46__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__47__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__48__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__49__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__51__Vfuncout;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__52__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__53__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop;
        CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__54__Vfuncout;
        CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__55__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__59__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__64__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__76__Vfuncout;
        CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__77__Vfuncout;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_pix__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(sdl_sx,9,0);
        VL_OUT16(sdl_sy,9,0);
        SData/*9:0*/ top_tinyfarm_sim__DOT__sx;
        SData/*9:0*/ top_tinyfarm_sim__DOT__sy;
        SData/*9:0*/ top_tinyfarm_sim__DOT__frames_until_tick;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__18__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__18__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__19__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__19__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__20__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__20__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__21__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__21__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__21__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__25__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__25__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__26__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__26__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__27__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__27__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__28__x;
    };
    struct {
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__28__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__28__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__32__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__32__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__33__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__33__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__34__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__34__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__35__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__35__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__35__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__39__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__39__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__40__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__on_border__40__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__41__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__41__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__42__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__42__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__42__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__43__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__43__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__44__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__44__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__48__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__48__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__48__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__49__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__49__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__49__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__51__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__51__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__55__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__55__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__59__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__59__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y0;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__60__h;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__64__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y0;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__64__h;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y0;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__68__h;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y0;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__72__h;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__76__x;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__76__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__76__w;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__77__x;
    };
    struct {
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__77__y;
        SData/*9:0*/ __Vfunc_top_tinyfarm_sim__DOT__in_rect__77__w;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> top_tinyfarm_sim__DOT__field_valid;
        VlUnpacked<CData/*0:0*/, 4> top_tinyfarm_sim__DOT__field_ready;
        VlUnpacked<CData/*1:0*/, 4> top_tinyfarm_sim__DOT__field_crop;
        VlUnpacked<CData/*2:0*/, 4> top_tinyfarm_sim__DOT__field_timer;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop_tinyfarm_sim_fixed__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop_tinyfarm_sim_fixed___024root(Vtop_tinyfarm_sim_fixed__Syms* symsp, const char* namep);
    ~Vtop_tinyfarm_sim_fixed___024root();
    VL_UNCOPYABLE(Vtop_tinyfarm_sim_fixed___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
