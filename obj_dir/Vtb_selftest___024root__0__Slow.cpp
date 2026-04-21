// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_selftest.h for the primary calling header

#include "Vtb_selftest__pch.h"

VL_ATTR_COLD void Vtb_selftest___024root___eval_static__TOP(Vtb_selftest___024root* vlSelf);

VL_ATTR_COLD void Vtb_selftest___024root___eval_static(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_static\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_selftest___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__clk__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__rst_n__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal__0 
        = vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal;
}

VL_ATTR_COLD void Vtb_selftest___024root___eval_static__TOP(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_static__TOP\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = 0U;
}

VL_ATTR_COLD void Vtb_selftest___024root___eval_initial__TOP(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_initial__TOP\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm_selfcheck__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_selftest___024root___eval_final(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_final\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_selftest___024root___eval_phase__stl(Vtb_selftest___024root* vlSelf);

VL_ATTR_COLD void Vtb_selftest___024root___eval_settle(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_settle\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_selftest___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_selftest.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_selftest___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_selftest___024root___eval_triggers__stl(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_triggers__stl\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_selftest___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_selftest___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_selftest___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_selftest___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_selftest___024root___act_sequent__TOP__5(Vtb_selftest___024root* vlSelf);

VL_ATTR_COLD void Vtb_selftest___024root___eval_stl(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_stl\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_selftest___024root___act_sequent__TOP__5(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_selftest___024root___eval_phase__stl(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___eval_phase__stl\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_selftest___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_selftest___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_selftest___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_selftest___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_selftest___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_tinyfarm_selfcheck.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_tinyfarm_selfcheck.rst_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @( tb_tinyfarm_selfcheck.dut.order_crop)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @( tb_tinyfarm_selfcheck.dut.order_crop__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @( tb_tinyfarm_selfcheck.dut.order_crop__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @( tb_tinyfarm_selfcheck.dut.order_crop__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @( tb_tinyfarm_selfcheck.dut.order_qty)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @( tb_tinyfarm_selfcheck.dut.order_qty__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @( tb_tinyfarm_selfcheck.dut.order_qty__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @( tb_tinyfarm_selfcheck.dut.order_qty__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @( tb_tinyfarm_selfcheck.dut.order_timer)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @( tb_tinyfarm_selfcheck.dut.order_timer__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @( tb_tinyfarm_selfcheck.dut.order_timer__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 75 is active: @( tb_tinyfarm_selfcheck.dut.order_timer__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 76 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_selftest___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___dump_triggers__act_ext\n"); );
    // Locals
    VlUnpacked<QData/*63:0*/, 2> vec;
    IData/*31:0*/ i;
    VlUnpacked<QData/*63:0*/, 2> pre;
    IData/*31:0*/ j;
    // Body
    i = 0U;
    do {
        vec[i] = ext[i];
        i = ((IData)(1U) + i);
    } while ((2U > i));
    Vtb_selftest___024root___dump_triggers__act(vec, tag);
    j = 0U;
    do {
        pre[j] = ext[j];
        j = ((IData)(1U) + j);
    } while ((1U > j));
    do {
        pre[j] = 0ULL;
        j = ((IData)(1U) + j);
    } while ((2U > j));
    Vtb_selftest___024root___dump_triggers__act(pre, 
                                                VL_CONCATN_NNN(tag, " pre"s));
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_selftest___024root___ctor_var_reset(Vtb_selftest___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_selftest___024root___ctor_var_reset\n"); );
    Vtb_selftest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_tinyfarm_selfcheck__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4876149096674963014ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7638120911140553637ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__mode_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12068413056912109146ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__field_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15586874169847178180ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__crop_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2204239851295728120ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__action_btn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4049323590299098591ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__fulfill_btn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16308024715109045670ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__fields[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17115504599889302669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1783505462773936918ull);
    }
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2515955470650076900ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8622090343848179928ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4314380475662308006ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13949114901920826331ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9689882957780535415ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4363373235735745605ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2331025065568577901ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 831675851395858264ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14067129764162737748ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2708426666246849112ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8815425686011930593ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15939542703877708256ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__score = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2003579533450841405ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12645406868955284240ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__game_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3873961706931115594ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__tick_div_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17338938182681725526ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4062141939744057246ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5047777537865581045ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__new_lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14979754836801567684ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__game_state_update__DOT__fcrop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4755038353580926537ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__u_action_pulse__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14898820680520679479ull);
    vlSelf->tb_tinyfarm_selfcheck__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14787041819965068395ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13900108167240630446ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__score = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9138861065664155739ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2551445441182451271ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13332637899936025152ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1452991047593428616ull);
    vlSelf->__Vdly__tb_tinyfarm_selfcheck__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17852655736260849503ull);
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11004628803940414441ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v0 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v1 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18207864674802447701ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v3 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v4 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9874514631538936095ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v6 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v7 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17812353890312412811ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v9 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v10 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11568677409481679811ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9260167614394540904ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v0 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6105508556458828840ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v12 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11959041378361011292ull);
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13022835593175993200ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15209888023177564730ull);
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14035272227377486454ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3070754444814550446ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v15 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 149160148044282765ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8272343401195081185ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v16 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18411289879840174489ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v17 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v18 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16479840619272620788ull);
    vlSelf->__VdlyVal__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11394972796686708784ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16412194872859225367ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v1 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v19 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11322986985972309718ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v20 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11215337065555110505ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v21 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13678677401174039524ull);
    vlSelf->__VdlyDim0__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v22 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3969243114394688499ull);
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__inventory__v2 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v23 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v24 = 0;
    vlSelf->__VdlySet__tb_tinyfarm_selfcheck__DOT__dut__DOT__fields__v26 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 271323188515307597ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8548801989517089364ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14408546028798880431ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceEn__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3077953328586666654ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceRd__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8211389475967690503ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_crop__VforceVal__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18308102422970712934ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 943333249862710058ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceEn__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4001096525962692243ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceRd__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17615906243897121606ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_qty__VforceVal__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11750079937657771754ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18370852560923584502ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceEn__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12733676154515773737ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceRd__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18093821246419275955ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm_selfcheck__DOT__dut__DOT__order_timer__VforceVal__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2397969331466009334ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
