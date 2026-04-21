// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tinyfarm.h for the primary calling header

#include "Vtb_tinyfarm__pch.h"

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_initial__TOP(Vtb_tinyfarm___024root* vlSelf);
VlCoroutine Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__0(Vtb_tinyfarm___024root* vlSelf);
VlCoroutine Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__1(Vtb_tinyfarm___024root* vlSelf);

void Vtb_tinyfarm___024root___eval_initial(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_initial\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tinyfarm___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__0__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__0__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__1__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__1__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__3__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__3__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__4__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__4__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__5__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__5__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__7__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__7__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__8__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__8__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__9__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__9__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__11__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__11__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__12__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__12__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__13__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__13__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__15__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__15__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__16__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__16__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__17__n;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__17__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k = 0;
    // Body
    vlSelfRef.tb_tinyfarm__DOT__rst_n = 0U;
    vlSelfRef.tb_tinyfarm__DOT__mode_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__crop_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__fulfill_btn = 0U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__0__n = 5U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__0__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__0__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__rst_n = 1U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__1__n = 5U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__1__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__1__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__mode_sel = 1U;
    vlSelfRef.tb_tinyfarm__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__crop_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__3__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__3__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__3__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__4__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__4__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__4__k);
    }
    __Vtask_tb_tinyfarm__DOT__wait_cycles__5__n = 0x0000000aU;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__5__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__5__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__mode_sel = 2U;
    vlSelfRef.tb_tinyfarm__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__7__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__7__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__7__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__8__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__8__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__8__k);
    }
    __Vtask_tb_tinyfarm__DOT__wait_cycles__9__n = 0x0000003cU;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__9__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__9__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__mode_sel = 3U;
    vlSelfRef.tb_tinyfarm__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__11__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__11__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__11__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__12__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__12__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__12__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal = 1U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd = 1U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn = 0x0fU;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal = 8U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd = 8U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__13__n = 3U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__13__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__13__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__fulfill_btn = 1U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__15__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__15__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__15__k);
    }
    vlSelfRef.tb_tinyfarm__DOT__fulfill_btn = 0U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__16__n = 2U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__16__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__16__k);
    }
    __Vtask_tb_tinyfarm__DOT__wait_cycles__17__n = 0x00000014U;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k = 0;
    __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k, __Vtask_tb_tinyfarm__DOT__wait_cycles__17__n)) {
        co_await vlSelfRef.__VtrigSched_hc5809681__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm.clk)", 
                                                             "tb_tinyfarm.sv", 
                                                             60);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k 
            = ((IData)(1U) + __Vtask_tb_tinyfarm__DOT__wait_cycles__17__k);
    }
    VL_WRITEF_NX("score=%0# inventory=%0x order_crop=%0# order_qty=%0# order_timer=%0#\n",0,
                 8,vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score,
                 12,(((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                       [3U] << 9U) | (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                      [2U] << 6U)) 
                     | ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                         [1U] << 3U) | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                        [0U])),2,(IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd),
                 2,vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd,
                 4,(IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd));
    VL_FINISH_MT("tb_tinyfarm.sv", 130, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VlCoroutine Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__1(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_tinyfarm.sv", 
                                             54);
        vlSelfRef.tb_tinyfarm__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_tinyfarm__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_tinyfarm___024root___eval_triggers__act(Vtb_tinyfarm___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 2> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_triggers__act\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_tinyfarm__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__clk__0))))));
    vlSelfRef.__VactTriggered[1U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__0)))) 
                                                         << 8U)) 
                                                     | (((((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__clk__0 
        = vlSelfRef.tb_tinyfarm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__rst_n__0 
        = vlSelfRef.tb_tinyfarm__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[1U] = (1ULL | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (2ULL | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (4ULL | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (8ULL | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000040ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000080ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000100ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000200ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000400ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
        vlSelfRef.__VactTriggered[1U] = (0x0000000000000800ULL 
                                         | vlSelfRef.__VactTriggered
                                         [1U]);
    }
    __VactTrigPreLoopCounter = 0U;
    do {
        vlSelfRef.__VactTriggered[((IData)(2U) + __VactTrigPreLoopCounter)] 
            = (vlSelfRef.__VactTriggered[__VactTrigPreLoopCounter] 
               & (~ latched[__VactTrigPreLoopCounter]));
        __VactTrigPreLoopCounter = ((IData)(1U) + __VactTrigPreLoopCounter);
    } while ((1U > __VactTrigPreLoopCounter));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tinyfarm___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_tinyfarm___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtb_tinyfarm___024root___act_sequent__TOP__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v0 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v1 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v3 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v4 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v6 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v7 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v9 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v10 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v12 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v15 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v16 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v17 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v24 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v26 = 0U;
    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__score 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score;
    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__lfsr;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v0 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v2 = 0U;
    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__state 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state;
}

void Vtb_tinyfarm___024root___act_sequent__TOP__1(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__1\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
}

void Vtb_tinyfarm___024root___act_sequent__TOP__2(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__2\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
}

void Vtb_tinyfarm___024root___act_sequent__TOP__3(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__3\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
}

void Vtb_tinyfarm___024root___act_sequent__TOP__4(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__4\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__cur = 0;
    CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__feedback;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__feedback = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__q;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__q = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__cur = 0;
    CData/*0:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__feedback;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__feedback = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__cur;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__q;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__q = 0;
    CData/*3:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop = 0;
    CData/*2:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__Vfuncout;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val;
    __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val = 0;
    // Body
    if (vlSelfRef.tb_tinyfarm__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [0U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [0U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                               [0U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v0 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [0U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v0 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v1 = 1U;
                    }
                }
                vlSelfRef.tb_tinyfarm__DOT__dut__DOT__i = 4U;
                if ((1U < (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd))) {
                    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd) 
                                          - (IData)(1U)));
                    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0fU;
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
                } else {
                    if ((0U != (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score))) {
                        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__score 
                            = (0x000000ffU & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score) 
                                              - (IData)(1U)));
                    }
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__cur 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__lfsr;
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__cur))));
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__feedback));
                    if ((0U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout))) {
                        __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0cU;
                    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0fU;
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr 
                        = __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__18__Vfuncout;
                    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__cur 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__Vfuncout 
                        = (3U & (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__cur));
                    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop 
                        = __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__19__Vfuncout;
                    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop = 3U;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__cur 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__q 
                        = (3U & ((IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__cur) 
                                 >> 2U));
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__Vfuncout 
                        = ((0U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__q))
                            ? 1U : ((1U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__q))
                                     ? 2U : 3U));
                    vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty 
                        = __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__20__Vfuncout;
                    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty = 3U;
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [1U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [1U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                               [1U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v3 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [1U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v3 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v4 = 1U;
                    }
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [2U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [2U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                               [2U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v6 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [2U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v6 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v7 = 1U;
                    }
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [3U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [3U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                               [3U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v9 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [3U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v9 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v10 = 1U;
                    }
                }
            } else if ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                        [vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd] 
                        >= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd))) {
                vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v0 
                    = (7U & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                             [vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd] 
                             - (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)));
                vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v0 
                    = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd;
                vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v0 = 1U;
                vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__score 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score)));
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__cur 
                    = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__lfsr;
                vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__feedback 
                    = (1U & VL_REDXOR_8((0xb8U & (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__cur))));
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout 
                    = ((0x000000feU & ((IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__cur) 
                                       << 1U)) | (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__feedback));
                vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
                if ((0U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout))) {
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout = 0xa5U;
                }
                vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
                vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0cU;
                vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0fU;
                vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr 
                    = __Vfunc_tb_tinyfarm__DOT__dut__DOT__lfsr_advance__21__Vfuncout;
                vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr 
                    = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__cur 
                    = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__Vfuncout 
                    = (3U & (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__cur));
                vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop 
                    = __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_crop_from_lfsr__22__Vfuncout;
                vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop = 3U;
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__cur 
                    = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__q 
                    = (3U & ((IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__cur) 
                             >> 2U));
                __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__Vfuncout 
                    = ((0U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__q))
                        ? 1U : ((1U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__q))
                                 ? 2U : 3U));
                vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty 
                    = __Vfunc_tb_tinyfarm__DOT__dut__DOT__order_qty_from_lfsr__23__Vfuncout;
                vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state))) {
            if ((1U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel))) {
                if ((1U & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                              [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                              >> 7U)))) {
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v12 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v12 = 1U;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v13 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v14 
                        = vlSelfRef.tb_tinyfarm__DOT__crop_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v14 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop 
                        = vlSelfRef.tb_tinyfarm__DOT__crop_sel;
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__Vfuncout 
                        = ((0U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop))
                            ? 3U : ((1U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop))
                                     ? 4U : ((2U == (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__crop))
                                              ? 5U : 6U)));
                    vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v15 
                        = __Vfunc_tb_tinyfarm__DOT__dut__DOT__crop_growth_time__24__Vfuncout;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v15 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v15 = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                            >> 7U) & (~ (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                         [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                                         >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                               [vlSelfRef.tb_tinyfarm__DOT__field_sel]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v16 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                              [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v16 
                            = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v16 = 1U;
                    } else {
                        vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v17 
                            = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v17 = 1U;
                        vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v18 
                            = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                            [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                            >> 7U) & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                      [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                                      >> 6U)))) {
                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop 
                        = (3U & (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                 [vlSelfRef.tb_tinyfarm__DOT__field_sel] 
                                 >> 4U));
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                        [vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop];
                    __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__Vfuncout 
                        = (7U & ((7U > (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val))
                                  ? ((IData)(1U) + (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val))
                                  : (IData)(__Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__val)));
                    vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v1 
                        = __Vfunc_tb_tinyfarm__DOT__dut__DOT__sat_inc3__25__Vfuncout;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v1 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop;
                    vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1 = 1U;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v19 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v20 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v21 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v22 
                        = vlSelfRef.tb_tinyfarm__DOT__field_sel;
                }
            }
            if ((1U & (~ VL_ONEHOT_I((((3U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)) 
                                       << 2U) | (((2U 
                                                   == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)))))))) {
                if ((0U != (((3U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)) 
                             << 2U) | (((2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)) 
                                        << 1U) | (1U 
                                                  == (IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinyfarm_top.sv:259: Assertion failed in %Ntb_tinyfarm.dut.game_state_update: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     2,(IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel));
                        VL_STOP_MT("tinyfarm_top.sv", 259, "");
                    }
                }
            }
        }
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__state 
            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__next_state;
    } else {
        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v2 = 1U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__i = 4U;
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__score = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop)));
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty)));
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer)));
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__state = 0U;
        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23 = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr = 0xa5U;
        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v24 = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop = 0U;
        vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop = 3U;
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty = 1U;
        vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty = 3U;
        vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0cU;
        vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = 0x0fU;
        vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v26 = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_tinyfarm__ConstPool__TABLE_h2a303c74_0;

void Vtb_tinyfarm___024root___act_sequent__TOP__5(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_sequent__TOP__5\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel) 
                      << 5U) | (((IData)((2U == (6U 
                                                 & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff)))) 
                                 << 4U) | ((IData)(
                                                   (2U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff)))) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick) 
                        << 2U) | (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__next_state 
        = Vtb_tinyfarm__ConstPool__TABLE_h2a303c74_0
        [__Vtableidx1];
}

void Vtb_tinyfarm___024root___act_comb__TOP__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___act_comb__TOP__0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0x0280U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)) 
         & (0x01e0U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount)))) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 9U;
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x)) 
                             & (0x00dcU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y))) 
                           & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [0U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout 
                                        = ((((0x0028U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x)) 
                                             & (0x00dcU 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x))) 
                                            & (0x0028U 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y))) 
                                           & (0x00b4U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout)) 
                               & ((((0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x)) 
                                    | (0x00d8U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x))) 
                                   | (0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y))) 
                                  | (0x00b0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout)) 
             & (0U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout 
                        = ((((0x00f0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x)) 
                             & (0x01a4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y))) 
                           & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [1U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout 
                                        = ((((0x00f0U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x)) 
                                             & (0x01a4U 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x))) 
                                            & (0x0028U 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y))) 
                                           & (0x00b4U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout)) 
                               & ((((0x00f4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x)) 
                                    | (0x01a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x))) 
                                   | (0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y))) 
                                  | (0x00b0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout)) 
             & (1U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x)) 
                             & (0x00dcU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y))) 
                           & (0x0168U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [2U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout 
                                        = ((((0x0028U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x)) 
                                             & (0x00dcU 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x))) 
                                            & (0x00dcU 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y))) 
                                           & (0x0168U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout)) 
                               & ((((0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x)) 
                                    | (0x00d8U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x))) 
                                   | (0x00e0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y))) 
                                  | (0x0164U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout)) 
             & (2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout 
                        = ((((0x00f0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x)) 
                             & (0x01a4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y))) 
                           & (0x0168U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [3U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout 
                                        = ((((0x00f0U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x)) 
                                             & (0x01a4U 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x))) 
                                            & (0x00dcU 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y))) 
                                           & (0x0168U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout)) 
                               & ((((0x00f4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x)) 
                                    | (0x01a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x))) 
                                   | (0x00e0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y))) 
                                  | (0x0164U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout)) 
             & (3U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x)) 
                             & (0x0258U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y))) 
                           & (0x00a0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 1U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout 
                        = ((((0x01e5U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x)) 
                             & (0x0217U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x))) 
                            & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y))) 
                           & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = ((0U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                    ? 0x3cU : ((1U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                                ? 0x3cU : ((2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                                            ? 0x34U
                                            : 0x30U)));
        }
        if (((1U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout 
                            = ((((0x0226U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x)) 
                                 & (0x0235U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (((2U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout 
                            = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x)) 
                                 & (0x0249U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (((3U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout 
                            = ((((0x024eU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x)) 
                                 & (0x025dU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [0U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [0U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x)) 
                             & (0x003cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3cU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [1U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [1U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout 
                        = ((((0x0050U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x)) 
                             & (0x0064U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3cU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [2U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [2U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout 
                        = ((((0x0078U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x)) 
                             & (0x008cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x34U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [3U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [3U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout 
                        = ((((0x00a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x)) 
                             & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x30U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w 
                        = (0x000003ffU & ((IData)(5U) 
                                          * (0x0000001fU 
                                             & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score))));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x) 
                                < (0x000003ffU & ((IData)(0x01ccU) 
                                                  + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w))))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y))) 
                           & (0x00f0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x0fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w 
                        = (0x000003ffU & ((IData)(0x0000000aU) 
                                          * (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x) 
                                < (0x000003ffU & ((IData)(0x01ccU) 
                                                  + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w))))) 
                            & (0x0104U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y))) 
                           & (0x0114U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x33U;
        }
    } else {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0U;
    }
    vlSelfRef.tb_tinyfarm__DOT__vga_r = (3U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb) 
                                               >> 4U));
    vlSelfRef.tb_tinyfarm__DOT__vga_g = (3U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb) 
                                               >> 2U));
    vlSelfRef.tb_tinyfarm__DOT__vga_b = (3U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb));
}

void Vtb_tinyfarm___024root___eval_act(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_act\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[2U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000f00ULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_tinyfarm___024root___act_sequent__TOP__5(vlSelf);
    }
    if (((0x0000000000000fffULL & vlSelfRef.__VactTriggered
          [1U]) | (3ULL & vlSelfRef.__VactTriggered
                   [0U]))) {
        Vtb_tinyfarm___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_tinyfarm___024root___nba_sequent__TOP__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___nba_sequent__TOP__0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr;
    __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr = 0;
    SData/*9:0*/ __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount;
    __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount = 0;
    // Body
    __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__tick_div_ctr;
    __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__lfsr = vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer 
        = (((IData)(vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer) 
            & (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer)) 
           | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer) 
              & (~ (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer))));
    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop 
        = (((IData)(vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop) 
            & (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop)) 
           | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop) 
              & (~ (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop))));
    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty 
        = (((IData)(vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty) 
            & (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty)) 
           | ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty) 
              & (~ (IData)(vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty))));
    vlSelfRef.__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state = vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__state;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score = vlSelfRef.__Vdly__tb_tinyfarm__DOT__dut__DOT__score;
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v0) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v0] 
            = vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v0;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v1] 
            = vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v1;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v2) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v0) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [0U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v0));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v1) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v3) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [1U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v3));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v4) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v6) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [2U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v6));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v7) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v9) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [3U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v9));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v10) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v12) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v12] 
            = (0x00000080U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v12]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v13] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v13]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v14] 
            = ((0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v14]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v14) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v15) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v15] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v15]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v15));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v16) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v16] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v16]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v16));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v17) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v17] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v17]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v18] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v18]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v19] 
            = (0x7fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v19]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v20] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v20]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v21] 
            = (0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v21]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v22] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v22]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v24) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[2U] = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[3U] = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v26) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[0U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[1U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[2U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields[3U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
               [3U]);
    }
    if (vlSelfRef.tb_tinyfarm__DOT__rst_n) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.tb_tinyfarm__DOT__action_btn));
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.tb_tinyfarm__DOT__fulfill_btn));
        if ((0x031fU == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount 
                = ((0x020cU == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount))
                    ? 0U : (0x000003ffU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount))));
            __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount = 0U;
        } else {
            __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)));
        }
        if ((9U == vlSelfRef.tb_tinyfarm__DOT__dut__DOT__tick_div_ctr)) {
            __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr = 0U;
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick = 1U;
        } else {
            __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr 
                = ((IData)(1U) + vlSelfRef.tb_tinyfarm__DOT__dut__DOT__tick_div_ctr);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick = 0U;
        }
    } else {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount = 0U;
        __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount = 0U;
        __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr = 0U;
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick = 0U;
    }
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount = __Vdly__tb_tinyfarm__DOT__dut__DOT__hcount;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__tick_div_ctr 
        = __Vdly__tb_tinyfarm__DOT__dut__DOT__tick_div_ctr;
}

void Vtb_tinyfarm___024root___nba_comb__TOP__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___nba_comb__TOP__0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (((0x0280U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)) 
         & (0x01e0U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount)))) {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 9U;
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x)) 
                             & (0x00dcU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y))) 
                           & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [0U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout 
                                        = ((((0x0028U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x)) 
                                             & (0x00dcU 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x))) 
                                            & (0x0028U 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y))) 
                                           & (0x00b4U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout)) 
                               & ((((0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x)) 
                                    | (0x00d8U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x))) 
                                   | (0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y))) 
                                  | (0x00b0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout)) 
             & (0U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout 
                        = ((((0x00f0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x)) 
                             & (0x01a4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y))) 
                           & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [1U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout 
                                        = ((((0x00f0U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x)) 
                                             & (0x01a4U 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x))) 
                                            & (0x0028U 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y))) 
                                           & (0x00b4U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout)) 
                               & ((((0x00f4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x)) 
                                    | (0x01a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x))) 
                                   | (0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y))) 
                                  | (0x00b0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout)) 
             & (1U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x)) 
                             & (0x00dcU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y))) 
                           & (0x0168U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [2U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout 
                                        = ((((0x0028U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x)) 
                                             & (0x00dcU 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x))) 
                                            & (0x00dcU 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y))) 
                                           & (0x0168U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout)) 
                               & ((((0x002cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x)) 
                                    | (0x00d8U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x))) 
                                   | (0x00e0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y))) 
                                  | (0x0164U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout)) 
             & (2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout 
                        = ((((0x00f0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x)) 
                             & (0x01a4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y))) 
                           & (0x0168U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout))) {
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f 
                = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                [3U];
            vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout 
                = ((0x00000080U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f))
                    ? ((0x00000040U & (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f))
                        ? 0x0cU : ((0U == (3U & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                 >> 4U)))
                                    ? 0x3cU : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                    >> 4U)))
                                                ? 0x3cU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f) 
                                                        >> 4U)))
                                                    ? 0x34U
                                                    : 0x30U))))
                    : 0x10U);
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout;
        }
        if ((([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout 
                            = (([&]() {
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x 
                                        = vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x;
                                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout 
                                        = ((((0x00f0U 
                                              <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x)) 
                                             & (0x01a4U 
                                                > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x))) 
                                            & (0x00dcU 
                                               <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y))) 
                                           & (0x0168U 
                                              > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y)));
                                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout)) 
                               & ((((0x00f4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x)) 
                                    | (0x01a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x))) 
                                   | (0x00e0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y))) 
                                  | (0x0164U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y))));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout)) 
             & (3U == (IData)(vlSelfRef.tb_tinyfarm__DOT__field_sel)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x)) 
                             & (0x0258U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x))) 
                            & (0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y))) 
                           & (0x00a0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 1U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout 
                        = ((((0x01e5U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x)) 
                             & (0x0217U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x))) 
                            & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y))) 
                           & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb 
                = ((0U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                    ? 0x3cU : ((1U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                                ? 0x3cU : ((2U == (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd))
                                            ? 0x34U
                                            : 0x30U)));
        }
        if (((1U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout 
                            = ((((0x0226U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x)) 
                                 & (0x0235U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (((2U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout 
                            = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x)) 
                                 & (0x0249U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (((3U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd)) 
             & ([&]() {
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x 
                            = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                        vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout 
                            = ((((0x024eU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x)) 
                                 & (0x025dU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x))) 
                                & (0x0046U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y))) 
                               & (0x0078U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y)));
                    }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout)))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [0U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [0U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout 
                        = ((((0x0028U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x)) 
                             & (0x003cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3cU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [1U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [1U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout 
                        = ((((0x0050U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x)) 
                             & (0x0064U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x3cU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [2U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [2U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout 
                        = ((((0x0078U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x)) 
                             & (0x008cU > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x34U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h 
                        = (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                       vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                       [3U], 3U));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0 
                        = (0x000003ffU & ((IData)(0x0190U) 
                                          - VL_SHIFTL_III(10,32,32, 
                                                          vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                          [3U], 3U)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout 
                        = ((((0x00a0U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x)) 
                             & (0x00b4U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x))) 
                            & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y) 
                               >= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0))) 
                           & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y) 
                              < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0) 
                                                + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h)))));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x30U;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w 
                        = (0x000003ffU & ((IData)(5U) 
                                          * (0x0000001fU 
                                             & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score))));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x) 
                                < (0x000003ffU & ((IData)(0x01ccU) 
                                                  + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w))))) 
                            & (0x00dcU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y))) 
                           & (0x00f0U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x0fU;
        }
        if (([&]() {
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w 
                        = (0x000003ffU & ((IData)(0x0000000aU) 
                                          * (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd)));
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x 
                        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount;
                    vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout 
                        = ((((0x01ccU <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x) 
                                < (0x000003ffU & ((IData)(0x01ccU) 
                                                  + (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w))))) 
                            & (0x0104U <= (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y))) 
                           & (0x0114U > (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y)));
                }(), (IData)(vlSelfRef.__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout))) {
            vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0x33U;
        }
    } else {
        vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = 0U;
    }
    vlSelfRef.tb_tinyfarm__DOT__vga_r = (3U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb) 
                                               >> 4U));
    vlSelfRef.tb_tinyfarm__DOT__vga_g = (3U & ((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb) 
                                               >> 2U));
    vlSelfRef.tb_tinyfarm__DOT__vga_b = (3U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb));
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_tinyfarm__DOT__mode_sel) 
                      << 5U) | (((IData)((2U == (6U 
                                                 & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff)))) 
                                 << 4U) | ((IData)(
                                                   (2U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff)))) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick) 
                        << 2U) | (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state)));
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__next_state 
        = Vtb_tinyfarm__ConstPool__TABLE_h2a303c74_0
        [__Vtableidx1];
}

void Vtb_tinyfarm___024root___eval_nba(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_nba\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tinyfarm___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_tinyfarm___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_tinyfarm___024root___timing_commit(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___timing_commit\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hc5809681__0.commit(
                                                   "@(posedge tb_tinyfarm.clk)");
    }
}

void Vtb_tinyfarm___024root___timing_resume(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___timing_resume\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc5809681__0.resume(
                                                   "@(posedge tb_tinyfarm.clk)");
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VactTriggered
         [1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_tinyfarm___024root___trigger_orInto__act_ext(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___trigger_orInto__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_tinyfarm___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in);

bool Vtb_tinyfarm___024root___eval_phase__act(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_phase__act\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_tinyfarm___024root___eval_triggers__act(vlSelf, vlSelfRef.__VnbaTriggered);
    Vtb_tinyfarm___024root___timing_commit(vlSelf);
    Vtb_tinyfarm___024root___trigger_orInto__act_ext(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_tinyfarm___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_tinyfarm___024root___timing_resume(vlSelf);
        Vtb_tinyfarm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_tinyfarm___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___trigger_anySet__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((3U > n));
    return (0U);
}

void Vtb_tinyfarm___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_tinyfarm___024root___eval_phase__nba(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_phase__nba\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_tinyfarm___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_tinyfarm___024root___eval_nba(vlSelf);
        Vtb_tinyfarm___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_tinyfarm___024root___eval(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_tinyfarm___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_tinyfarm.sv", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_tinyfarm___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb_tinyfarm.sv", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_tinyfarm___024root___eval_phase__act(vlSelf));
    } while (Vtb_tinyfarm___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_tinyfarm___024root___eval_debug_assertions(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_debug_assertions\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
