// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_selftest.h for the primary calling header

#ifndef VERILATED_VTB_SELFTEST___024ROOT_H_
#define VERILATED_VTB_SELFTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_selftest__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_selftest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_tinyfarm_selfcheck__DOT__clk;
        CData/*0:0*/ tb_tinyfarm_selfcheck__DOT__rst_n;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__mode_sel;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__field_sel;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__crop_sel;
        CData/*0:0*/ tb_tinyfarm_selfcheck__DOT__action_btn;
        CData/*0:0*/ tb_tinyfarm_selfcheck__DOT__fulfill_btn;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal;
        CData/*3:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
        CData/*3:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd;
        CData/*3:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn;
        CData/*3:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal;
        CData/*7:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__score;
        CData/*7:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
        CData/*0:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__state;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__next_state;
        CData/*7:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
        CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__fcrop;
        CData/*2:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff;
        CData/*2:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff;
        CData/*3:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
        CData/*7:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score;
        CData/*7:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
        CData/*1:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
        CData/*1:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
        CData/*1:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v1;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v4;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v7;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v10;
        CData/*2:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v13;
        CData/*1:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15;
        CData/*3:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v18;
        CData/*2:0*/ __VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1;
    };
    struct {
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v19;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v20;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v21;
        CData/*1:0*/ __VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v22;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v2;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v24;
        CData/*0:0*/ __VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v26;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__rst_n__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal__0;
        CData/*0:0*/ __VactDidInit;
        IData/*31:0*/ tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4> tb_tinyfarm_selfcheck__DOT__dut__DOT__fields;
        VlUnpacked<CData/*2:0*/, 4> tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 3> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h589f5a8d__0;

    // INTERNAL VARIABLES
    Vtb_selftest__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_selftest___024root(Vtb_selftest__Syms* symsp, const char* v__name);
    ~Vtb_selftest___024root();
    VL_UNCOPYABLE(Vtb_selftest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
