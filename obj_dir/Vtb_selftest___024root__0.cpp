// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_selftest.h for the primary calling header

#include "Vtb_selftest__pch.h"

VL_ATTR_COLD void Vtb_selftest___024root___eval_initial__TOP(Vtb_selftest___024root* vlSelf);
VlCoroutine Vtb_selftest___024root___eval_initial__TOP__Vtiming__0(Vtb_selftest___024root* vlSelf);
VlCoroutine Vtb_selftest___024root___eval_initial__TOP__Vtiming__1(Vtb_selftest___024root* vlSelf);

void Vtb_selftest___024root___eval_initial(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_initial\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_selftest___024root___eval_initial__TOP(vlSelf);
    Vtb_selftest___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_selftest___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vtb_selftest___024root___eval_initial__TOP__Vtiming__0(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ tb_tinyfarm_selfcheck__DOT__timer_before;
    tb_tinyfarm_selfcheck__DOT__timer_before = 0;
    CData/*1:0*/ tb_tinyfarm_selfcheck__DOT__crop_before;
    tb_tinyfarm_selfcheck__DOT__crop_before = 0;
    IData/*31:0*/ tb_tinyfarm_selfcheck__DOT__tests_passed;
    tb_tinyfarm_selfcheck__DOT__tests_passed = 0;
    IData/*31:0*/ tb_tinyfarm_selfcheck__DOT__tests_failed;
    tb_tinyfarm_selfcheck__DOT__tests_failed = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__condition = 0;
    std::string __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__test_name;
    CData/*0:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__condition;
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__condition = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__n;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__n = 0;
    IData/*31:0*/ __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i = 0;
    // Body
    tb_tinyfarm_selfcheck__DOT__tests_passed = 0U;
    tb_tinyfarm_selfcheck__DOT__tests_failed = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__crop_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__n = 5U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__0__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__n = 5U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__1__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__condition 
        = (0U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__test_name = "Reset clears score"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__2__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__condition 
        = (0U == (((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                    [3U] << 9U) | (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                                   [2U] << 6U)) | (
                                                   (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                                                    [1U] 
                                                    << 3U) 
                                                   | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                                                   [0U])));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__test_name = "Reset clears inventory"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__3__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__condition 
        = (((~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [0U] >> 7U)) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                   [0U] >> 6U))) & 
           (0U == (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                   [0U])));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__test_name = "Reset clears field 0"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__4__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__condition 
        = (0U != (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__test_name = "Reset creates valid order quantity"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__5__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__crop_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__7__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__8__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__condition 
        = (1U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                 [0U] >> 7U));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__test_name = "Plant marks field valid"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__9__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__condition 
        = (0U == (3U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                        [0U] >> 4U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__test_name = "Plant sets correct crop type"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__10__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__condition 
        = (3U == (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                  [0U]));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__test_name = "Plant loads correct wheat timer"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__11__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__condition 
        = (1U & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                    [0U] >> 6U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__test_name = "Plant clears ready flag"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__12__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__crop_sel = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__14__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__15__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__condition 
        = (0U == (3U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                        [0U] >> 4U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__test_name = "Plant on occupied field does not overwrite crop"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__16__test_name));
    }
    tb_tinyfarm_selfcheck__DOT__crop_before = (3U & 
                                               (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                                [0U] 
                                                >> 4U));
    tb_tinyfarm_selfcheck__DOT__timer_before = (0x0000000fU 
                                                & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                                [0U]);
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__condition 
        = ((3U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                  [0U] >> 4U)) == (IData)(tb_tinyfarm_selfcheck__DOT__crop_before));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__test_name = "Plant on occupied field does not overwrite crop"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__17__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__condition 
        = ((0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
            [0U]) == (IData)(tb_tinyfarm_selfcheck__DOT__timer_before));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__test_name = "Plant on occupied field does not overwrite timer"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__18__test_name));
    }
    tb_tinyfarm_selfcheck__DOT__timer_before = (0x0000000fU 
                                                & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                                [0U]);
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel = 2U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__20__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__21__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__condition 
        = (((1U < (IData)(tb_tinyfarm_selfcheck__DOT__timer_before)) 
            & ((0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [0U]) == (0x0000000fU & ((IData)(tb_tinyfarm_selfcheck__DOT__timer_before) 
                                         - (IData)(1U))))) 
           | ((1U == (IData)(tb_tinyfarm_selfcheck__DOT__timer_before)) 
              & (0U == (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                        [0U]))));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__test_name = "Water decrements timer by 1"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__22__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__condition 
        = (1U & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                    [0U] >> 6U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__test_name = "Water does not prematurely set ready"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__23__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__n = 0x00000019U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__24__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__condition 
        = (1U >= (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                  [0U]));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__test_name = "Game tick continues decrement"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__25__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__n = 0x00000019U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__26__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__condition 
        = ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
            [0U] >> 6U) & (0U == (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                  [0U])));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__test_name = "Field becomes ready when timer reaches zero"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__27__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel = 3U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__29__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__30__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__condition 
        = (1U == vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
           [0U]);
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__test_name = "Harvest increments wheat inventory"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__31__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__condition 
        = (1U & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                    [0U] >> 7U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__test_name = "Harvest clears field valid"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__32__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__condition 
        = (1U & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                    [0U] >> 6U)));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__test_name = "Harvest clears ready flag"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__33__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__35__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__36__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__condition 
        = (1U == vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
           [0U]);
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__test_name = "Harvest on empty field does not increment inventory"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__37__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = 0x0fU;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal = 8U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd = 8U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__n = 2U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__38__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__40__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__41__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__condition 
        = (0U == vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
           [0U]);
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__test_name = "Fulfill decrements inventory"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__42__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__condition 
        = (1U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__test_name = "Fulfill increments score"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__43__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__n = 2U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__44__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd = 1U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = 3U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal = 2U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd = 2U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = 0x0fU;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal = 8U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd = 8U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__n = 2U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__45__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn = 1U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__47__i);
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__n = 3U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__48__i);
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__condition 
        = (1U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score));
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__test_name = "Failed fulfill does not change score"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__49__test_name));
    }
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__condition 
        = (0U == vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
           [1U]);
    __Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__test_name = "Failed fulfill does not create negative inventory"s;
    if (__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__condition) {
        tb_tinyfarm_selfcheck__DOT__tests_passed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_passed);
        VL_WRITEF_NX("GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__test_name));
    } else {
        tb_tinyfarm_selfcheck__DOT__tests_failed = 
            ((IData)(1U) + tb_tinyfarm_selfcheck__DOT__tests_failed);
        VL_WRITEF_NX("NOT GOOD: %@\n",0,-1,&(__Vtask_tb_tinyfarm_selfcheck__DOT__report_check__50__test_name));
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = 0U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__n = 2U;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i = 0;
    __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i, __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__n)) {
        co_await vlSelfRef.__VtrigSched_h589f5a8d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_tinyfarm_selfcheck.clk)", 
                                                             "tb_selftest.sv", 
                                                             71);
        __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i 
            = ((IData)(1U) + __Vtask_tb_tinyfarm_selfcheck__DOT__wait_cycles__51__i);
    }
    VL_WRITEF_NX("--------------------------------------------------\nTEST SUMMARY: %0d passed, %0d failed\n--------------------------------------------------\n",0,
                 32,tb_tinyfarm_selfcheck__DOT__tests_passed,
                 32,tb_tinyfarm_selfcheck__DOT__tests_failed);
    if ((0U == tb_tinyfarm_selfcheck__DOT__tests_failed)) {
        VL_WRITEF_NX("GOOD: All self-checking tests passed.\n",0);
    } else {
        VL_WRITEF_NX("NOT GOOD: One or more self-checking tests failed.\n",0);
    }
    VL_FINISH_MT("tb_selftest.sv", 292, "");
}

VlCoroutine Vtb_selftest___024root___eval_initial__TOP__Vtiming__1(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_selftest.sv", 
                                             66);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_selftest___024root___eval_triggers__act(Vtb_selftest___024root* vlSelf, const VlUnpacked<QData/*63:0*/, 2> &latched) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_triggers__act\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VactTrigPreLoopCounter;
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__clk__0))))));
    vlSelfRef.__VactTriggered[1U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 0x0000000cU) 
                                                      | ((((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__0)))) 
                                                         << 8U)) 
                                                     | (((((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn__0)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__clk__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__rst_n__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal;
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
        Vtb_selftest___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_selftest___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___trigger_anySet__act\n"); );
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

void Vtb_selftest___024root___act_sequent__TOP__0(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__0\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v1 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v4 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v7 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v10 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v24 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v26 = 0U;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 = 0U;
    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v2 = 0U;
    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state;
}

void Vtb_selftest___024root___act_sequent__TOP__1(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__1\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop)));
}

void Vtb_selftest___024root___act_sequent__TOP__2(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__2\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty)));
}

void Vtb_selftest___024root___act_sequent__TOP__3(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__3\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal)) 
           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn)) 
              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer)));
}

void Vtb_selftest___024root___act_sequent__TOP__4(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__4\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__cur = 0;
    CData/*0:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__feedback;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__feedback = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__q;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__q = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__cur = 0;
    CData/*0:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__feedback;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__feedback = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__cur;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__cur = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__q;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__q = 0;
    CData/*3:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop = 0;
    CData/*2:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__Vfuncout;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val;
    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val = 0;
    // Body
    if (vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n) {
        if ((2U & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [0U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [0U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                               [0U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [0U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v1 = 1U;
                    }
                }
                if ((1U < (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd))) {
                    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer 
                        = (0x0000000fU & ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd) 
                                          - (IData)(1U)));
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer)));
                } else {
                    if ((0U != (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score))) {
                        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score 
                            = (0x000000ffU & ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score) 
                                              - (IData)(1U)));
                    }
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__cur 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop)));
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty)));
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
                        = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
                            & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal)) 
                           | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn)) 
                              & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer)));
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__cur))));
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__feedback));
                    if ((0U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout))) {
                        __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer = 0x0cU;
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr 
                        = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__52__Vfuncout;
                    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__cur 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__Vfuncout 
                        = (3U & (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__cur));
                    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop 
                        = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__53__Vfuncout;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__cur 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__q 
                        = (3U & ((IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__cur) 
                                 >> 2U));
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__Vfuncout 
                        = ((0U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__q))
                            ? 1U : ((1U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__q))
                                     ? 2U : 3U));
                    vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty 
                        = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__54__Vfuncout;
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [1U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [1U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                               [1U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [1U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v4 = 1U;
                    }
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [2U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [2U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                               [2U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [2U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v7 = 1U;
                    }
                }
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [3U] >> 7U) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [3U] 
                                              >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                               [3U]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [3U] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9 = 1U;
                    } else {
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v10 = 1U;
                    }
                }
            } else if ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                        [vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd] 
                        >= (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd))) {
                vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 
                    = (7U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                             [vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd] 
                             - (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd)));
                vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 
                    = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd;
                vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 = 1U;
                vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score)));
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__cur 
                    = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
                vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer)));
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__feedback 
                    = (1U & VL_REDXOR_8((0xb8U & (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__cur))));
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout 
                    = ((0x000000feU & ((IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__cur) 
                                       << 1U)) | (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__feedback));
                vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop)));
                if ((0U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout))) {
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout = 0xa5U;
                }
                vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
                    = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn) 
                        & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal)) 
                       | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn)) 
                          & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty)));
                vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer = 0x0cU;
                vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr 
                    = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr_advance__55__Vfuncout;
                vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr 
                    = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__cur 
                    = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__Vfuncout 
                    = (3U & (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__cur));
                vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop 
                    = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop_from_lfsr__56__Vfuncout;
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__cur 
                    = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr;
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__q 
                    = (3U & ((IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__cur) 
                             >> 2U));
                __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__Vfuncout 
                    = ((0U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__q))
                        ? 1U : ((1U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__q))
                                 ? 2U : 3U));
                vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty 
                    = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty_from_lfsr__57__Vfuncout;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state))) {
            if ((1U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel))) {
                if ((1U & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                              [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                              >> 7U)))) {
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12 = 1U;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v13 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__crop_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__crop_sel;
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__Vfuncout 
                        = ((0U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop))
                            ? 3U : ((1U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop))
                                     ? 4U : ((2U == (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__crop))
                                              ? 5U : 6U)));
                    vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 
                        = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__crop_growth_time__58__Vfuncout;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                            >> 7U) & (~ (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                         [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                                         >> 6U))))) {
                    if ((1U < (0x0000000fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                               [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel]))) {
                        vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 
                            = (0x0000000fU & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                              [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                                              - (IData)(1U)));
                        vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 
                            = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 = 1U;
                    } else {
                        vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17 
                            = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17 = 1U;
                        vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v18 
                            = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel))) {
                if ((1U & ((vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                            [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                            >> 7U) & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                      [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                                      >> 6U)))) {
                    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__fcrop 
                        = (3U & (vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                                 [vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel] 
                                 >> 4U));
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory
                        [vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__fcrop];
                    __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__Vfuncout 
                        = (7U & ((7U > (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val))
                                  ? ((IData)(1U) + (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val))
                                  : (IData)(__Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__val)));
                    vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 
                        = __Vfunc_tb_tinyfarm_selfcheck__DOT__dut__DOT__sat_inc3__59__Vfuncout;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__fcrop;
                    vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 = 1U;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v19 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v20 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v21 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                    vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v22 
                        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__field_sel;
                }
            }
            if ((1U & (~ VL_ONEHOT_I((((3U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)) 
                                       << 2U) | (((2U 
                                                   == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)))))))) {
                if ((0U != (((3U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)) 
                             << 2U) | (((2U == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)) 
                                        << 1U) | (1U 
                                                  == (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel)))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: tinyfarm_top.sv:259: Assertion failed in %Ntb_tinyfarm_selfcheck.dut.game_state_update: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name(),
                                     2,(IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel));
                        VL_STOP_MT("tinyfarm_top.sv", 259, "");
                    }
                }
            }
        }
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state 
            = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__next_state;
    } else {
        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v2 = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score = 0U;
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop)));
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty)));
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd 
            = (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn) 
                & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal)) 
               | ((~ (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn)) 
                  & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer)));
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state = 0U;
        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23 = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr = 0xa5U;
        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v24 = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop = 0U;
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty = 1U;
        vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer = 0x0cU;
        vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v26 = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_selftest__ConstPool__TABLE_h2a303c74_0;

void Vtb_selftest___024root___act_sequent__TOP__5(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___act_sequent__TOP__5\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__mode_sel) 
                      << 5U) | (((IData)((2U == (6U 
                                                 & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff)))) 
                                 << 4U) | ((IData)(
                                                   (2U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff)))) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick) 
                        << 2U) | (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state)));
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__next_state 
        = Vtb_selftest__ConstPool__TABLE_h2a303c74_0
        [__Vtableidx1];
}

void Vtb_selftest___024root___eval_act(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_act\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[2U])) {
        Vtb_selftest___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_selftest___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_selftest___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000f00ULL & vlSelfRef.__VactTriggered
         [1U])) {
        Vtb_selftest___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_selftest___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_selftest___024root___act_sequent__TOP__5(vlSelf);
    }
}

void Vtb_selftest___024root___nba_sequent__TOP__0(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___nba_sequent__TOP__0\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr;
    __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr = 0;
    // Body
    __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__score 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0] 
            = vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1] 
            = vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v2) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[1U] = 0U;
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__state 
        = vlSelfRef.__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state;
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [0U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v1) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [1U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v4) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [2U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v7) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [3U]) | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v10) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12] 
            = (0x00000080U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v13] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v13]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14] 
            = ((0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14]) 
               | ((IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14) 
                  << 4U));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16] 
            = ((0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
                [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16]) 
               | (IData)(vlSelfRef.__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16));
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v18] 
            = (0x00000040U | vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v18]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v19] 
            = (0x7fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v19]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v20] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v20]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v21] 
            = (0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v21]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v22] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [vlSelfRef.__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v22]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v24) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[2U] = 0U;
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[3U] = 0U;
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
    }
    if (vlSelfRef.__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v26) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[0U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [0U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[1U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [1U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[2U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [2U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0x7fU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0xbfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0xcfU & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[3U] 
            = (0xf0U & vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__fields
               [3U]);
    }
    if (vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n) {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__action_btn));
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.tb_tinyfarm_selfcheck__DOT__fulfill_btn));
        if ((9U == vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr)) {
            __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr = 0U;
            vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick = 1U;
        } else {
            __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr 
                = ((IData)(1U) + vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr);
            vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick = 0U;
        }
    } else {
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff = 0U;
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff = 0U;
        __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr = 0U;
        vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick = 0U;
    }
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr 
        = __Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr;
}

void Vtb_selftest___024root___eval_nba(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_nba\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_selftest___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_selftest___024root___act_sequent__TOP__5(vlSelf);
    }
}

void Vtb_selftest___024root___timing_commit(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___timing_commit\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h589f5a8d__0.commit(
                                                   "@(posedge tb_tinyfarm_selfcheck.clk)");
    }
}

void Vtb_selftest___024root___timing_resume(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___timing_resume\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h589f5a8d__0.resume(
                                                   "@(posedge tb_tinyfarm_selfcheck.clk)");
    }
    if ((0x0000000000001000ULL & vlSelfRef.__VactTriggered
         [1U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_selftest___024root___trigger_orInto__act_ext(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___trigger_orInto__act_ext\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_selftest___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in);

bool Vtb_selftest___024root___eval_phase__act(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_phase__act\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_selftest___024root___eval_triggers__act(vlSelf, vlSelfRef.__VnbaTriggered);
    Vtb_selftest___024root___timing_commit(vlSelf);
    Vtb_selftest___024root___trigger_orInto__act_ext(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_selftest___024root___trigger_anySet__act_ext(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vtb_selftest___024root___timing_resume(vlSelf);
        Vtb_selftest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_selftest___024root___trigger_anySet__act_ext(const VlUnpacked<QData/*63:0*/, 3> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___trigger_anySet__act_ext\n"); );
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

void Vtb_selftest___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

bool Vtb_selftest___024root___eval_phase__nba(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_phase__nba\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_selftest___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_selftest___024root___eval_nba(vlSelf);
        Vtb_selftest___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_selftest___024root___eval(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_selftest___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_selftest.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_selftest___024root___dump_triggers__act_ext(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("tb_selftest.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_selftest___024root___eval_phase__act(vlSelf));
    } while (Vtb_selftest___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_selftest___024root___eval_debug_assertions(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_debug_assertions\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
