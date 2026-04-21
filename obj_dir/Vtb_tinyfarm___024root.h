// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_tinyfarm.h for the primary calling header

#ifndef VERILATED_VTB_TINYFARM___024ROOT_H_
#define VERILATED_VTB_TINYFARM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_tinyfarm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_tinyfarm___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tinyfarm__DOT__clk;
        CData/*0:0*/ tb_tinyfarm__DOT__rst_n;
        CData/*1:0*/ tb_tinyfarm__DOT__mode_sel;
        CData/*1:0*/ tb_tinyfarm__DOT__field_sel;
        CData/*1:0*/ tb_tinyfarm__DOT__crop_sel;
        CData/*0:0*/ tb_tinyfarm__DOT__action_btn;
        CData/*0:0*/ tb_tinyfarm__DOT__fulfill_btn;
        CData/*1:0*/ tb_tinyfarm__DOT__vga_r;
        CData/*1:0*/ tb_tinyfarm__DOT__vga_g;
        CData/*1:0*/ tb_tinyfarm__DOT__vga_b;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_crop;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_qty;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal;
        CData/*3:0*/ tb_tinyfarm__DOT__dut__DOT__order_timer;
        CData/*3:0*/ tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd;
        CData/*3:0*/ tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn;
        CData/*3:0*/ tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal;
        CData/*7:0*/ tb_tinyfarm__DOT__dut__DOT__score;
        CData/*7:0*/ tb_tinyfarm__DOT__dut__DOT__lfsr;
        CData/*0:0*/ tb_tinyfarm__DOT__dut__DOT__game_tick;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__state;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__next_state;
        CData/*7:0*/ tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
        CData/*1:0*/ tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop;
        CData/*5:0*/ tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb;
        CData/*2:0*/ tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff;
        CData/*2:0*/ tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout;
        CData/*5:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout;
        CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout;
        CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout;
        CData/*3:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer;
    };
    struct {
        CData/*3:0*/ __VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer;
        CData/*7:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__score;
        CData/*7:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr;
        CData/*1:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop;
        CData/*1:0*/ __VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop;
        CData/*1:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty;
        CData/*1:0*/ __VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty;
        CData/*1:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__state;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v1;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v3;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v3;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v4;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v6;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v6;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v7;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v9;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v9;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v10;
        CData/*2:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v0;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v0;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v12;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v12;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v13;
        CData/*1:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v14;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v14;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v15;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v15;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v15;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v16;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v16;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v16;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v17;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v17;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v18;
        CData/*2:0*/ __VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v1;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v1;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v19;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v20;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v21;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v22;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v2;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v24;
        CData/*0:0*/ __VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v26;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__rst_n__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal__0;
        CData/*0:0*/ __VactDidInit;
    };
    struct {
        SData/*9:0*/ tb_tinyfarm__DOT__dut__DOT__hcount;
        SData/*9:0*/ tb_tinyfarm__DOT__dut__DOT__vcount;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y;
        SData/*9:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w;
        IData/*31:0*/ tb_tinyfarm__DOT__dut__DOT__tick_div_ctr;
        IData/*31:0*/ tb_tinyfarm__DOT__dut__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4> tb_tinyfarm__DOT__dut__DOT__fields;
        VlUnpacked<CData/*2:0*/, 4> tb_tinyfarm__DOT__dut__DOT__inventory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 3> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc5809681__0;

    // INTERNAL VARIABLES
    Vtb_tinyfarm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_tinyfarm___024root(Vtb_tinyfarm__Syms* symsp, const char* v__name);
    ~Vtb_tinyfarm___024root();
    VL_UNCOPYABLE(Vtb_tinyfarm___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
