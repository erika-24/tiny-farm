// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tinyfarm.h for the primary calling header

#include "Vtb_tinyfarm__pch.h"

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_static__TOP(Vtb_tinyfarm___024root* vlSelf);

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_static(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_static\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_tinyfarm___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__clk__0 
        = vlSelfRef.tb_tinyfarm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__rst_n__0 
        = vlSelfRef.tb_tinyfarm__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal__0 
        = vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal;
}

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_static__TOP(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_static__TOP\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn = 0U;
    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn = 0U;
}

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_initial__TOP(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_initial__TOP\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("tinyfarm.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_tinyfarm__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_final(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_final\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_tinyfarm___024root___eval_phase__stl(Vtb_tinyfarm___024root* vlSelf);

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_settle(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_settle\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_tinyfarm___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_tinyfarm.sv", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_tinyfarm___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_triggers__stl(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_triggers__stl\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_tinyfarm___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_tinyfarm___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_tinyfarm___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_tinyfarm___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_tinyfarm__ConstPool__TABLE_h2a303c74_0;

VL_ATTR_COLD void Vtb_tinyfarm___024root___stl_sequent__TOP__0(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtb_tinyfarm___024root___eval_stl(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_stl\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_tinyfarm___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_tinyfarm___024root___eval_phase__stl(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___eval_phase__stl\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_tinyfarm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_tinyfarm___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_tinyfarm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_tinyfarm___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_tinyfarm___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_tinyfarm.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_tinyfarm.rst_n)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @( tb_tinyfarm.dut.order_crop)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @( tb_tinyfarm.dut.order_crop__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @( tb_tinyfarm.dut.order_crop__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @( tb_tinyfarm.dut.order_crop__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @( tb_tinyfarm.dut.order_qty)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @( tb_tinyfarm.dut.order_qty__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @( tb_tinyfarm.dut.order_qty__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @( tb_tinyfarm.dut.order_qty__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @( tb_tinyfarm.dut.order_timer)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @( tb_tinyfarm.dut.order_timer__VforceEn)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @( tb_tinyfarm.dut.order_timer__VforceRd)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 75 is active: @( tb_tinyfarm.dut.order_timer__VforceVal)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 76 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_tinyfarm___024root___dump_triggers__act_ext(const VlUnpacked<QData/*63:0*/, 3> &ext, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___dump_triggers__act_ext\n"); );
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
    Vtb_tinyfarm___024root___dump_triggers__act(vec, tag);
    j = 0U;
    do {
        pre[j] = ext[j];
        j = ((IData)(1U) + j);
    } while ((1U > j));
    do {
        pre[j] = 0ULL;
        j = ((IData)(1U) + j);
    } while ((2U > j));
    Vtb_tinyfarm___024root___dump_triggers__act(pre, 
                                                VL_CONCATN_NNN(tag, " pre"s));
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_tinyfarm___024root___ctor_var_reset(Vtb_tinyfarm___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root___ctor_var_reset\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_tinyfarm__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3423256141516546350ull);
    vlSelf->tb_tinyfarm__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372534674661052050ull);
    vlSelf->tb_tinyfarm__DOT__mode_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15588700498490532439ull);
    vlSelf->tb_tinyfarm__DOT__field_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7005820275630913308ull);
    vlSelf->tb_tinyfarm__DOT__crop_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6178665489594597065ull);
    vlSelf->tb_tinyfarm__DOT__action_btn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10769691556500510803ull);
    vlSelf->tb_tinyfarm__DOT__fulfill_btn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4499124847799314255ull);
    vlSelf->tb_tinyfarm__DOT__vga_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18079594142200276902ull);
    vlSelf->tb_tinyfarm__DOT__vga_g = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5700924134861023474ull);
    vlSelf->tb_tinyfarm__DOT__vga_b = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6463416700185317541ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_tinyfarm__DOT__dut__DOT__fields[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11541184588498628690ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_tinyfarm__DOT__dut__DOT__inventory[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17905544140693929847ull);
    }
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6087016002603842800ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3324276580011392976ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6342494709118419592ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4364157112393825951ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3817519423050577131ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2883246793027275374ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6256703157598513593ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18439358344616671416ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_timer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4405009598048620502ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14477312353849252600ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12567284712645209663ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15152003157904383100ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__score = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9830605155112427795ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 951090685418127086ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__game_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15372671688712345991ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__tick_div_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14249023752315959576ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6492803890643193042ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6035032728546279186ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__hcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9892520094925315219ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__vcount = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7751850141395805608ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1539805019380452781ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4221319668625745220ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4884471368302859613ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1215019370820094039ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13468908822500828855ull);
    vlSelf->tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2372679140830431285ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082094311122076163ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10814414006193394413ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__26__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18409252670784331570ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11656578254901508682ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__27__f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8768865426561750657ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12869862060352716616ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14117993901181770136ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__28__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2806942261249993355ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13395949220842609031ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4205035889239955457ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__29__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 48665507789968290ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1391747013639786547ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5546361716619341747ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__30__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13000125019195477070ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6741119679845168507ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__31__f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6164242300902790125ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18008667536656279705ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2209312522631371931ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__32__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1544017686328699010ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1687991170945155829ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3958073304224626964ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__33__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13537085670934995908ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10332426540046464289ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11464344718502793827ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__34__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10328232470730978366ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12897099485421550123ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__35__f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5030178965695954254ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18417214300705682152ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15690459939392721651ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__36__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10906485159609293403ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2892085524085241813ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6039348615583506118ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__37__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13493111918159745347ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1491267102258973471ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8836495366508411427ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__38__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13958626489547437581ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__Vfuncout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12305875256198305580ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__field_color__39__f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14754885231221724104ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1233108583686642998ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 390022077414471198ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__on_border__40__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3048800487919367702ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6760247206003964686ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16472950458921864665ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__41__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8163159446472063451ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3192044733700372430ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5245720387304167507ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__42__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4986982788824250959ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15992554387910830619ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16405581382931015089ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__43__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9005288644176860778ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6476399531601364175ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5058633493388171381ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__44__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6605711004299693326ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 359026987932236795ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12025175663492240629ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__45__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14462208688096080424ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9371520889199511071ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14383170641749214523ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__46__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7988146476302113547ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17375065698337011368ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7067662467391853514ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1287758299239766621ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__y0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14288009133665727610ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__47__h = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15478634620243474991ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12522349970825809167ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8845122330661643170ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6238779210573480276ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__y0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14449946716293957282ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__48__h = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15312702540236131664ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6413302308503449177ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17951756081080812035ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2820727447418989338ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__y0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8099761419833397809ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__49__h = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12959360304914678903ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12197049069372687590ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13308437177697821929ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13730480641930365570ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__y0 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4832081415932833516ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__50__h = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14757096347322738431ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16720517546042484081ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1165371622351524653ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6190425248121924968ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__51__w = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7548359728167067415ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2987372475115760580ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8108742341894428641ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2369619932584756677ull);
    vlSelf->__Vfunc_tb_tinyfarm__DOT__dut__DOT__in_rect__52__w = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1748434266362094230ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__order_timer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17819997938910179412ull);
    vlSelf->__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_timer = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11873455756567005401ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__score = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4113824760945430082ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 207093668209495446ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15955350936959543377ull);
    vlSelf->__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12903522741636509993ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6980927952719640680ull);
    vlSelf->__VdlyMask__tb_tinyfarm__DOT__dut__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7112348865964444054ull);
    vlSelf->__Vdly__tb_tinyfarm__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5368115054290574007ull);
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10833212412385932204ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v0 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v1 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v3 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14926121916936715958ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v3 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v4 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2898750539927860827ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v6 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v7 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v9 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 805094561642855513ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v9 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v10 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17280835944766092879ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15130286445581067657ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v0 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v12 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10462417905384146201ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v12 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v13 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14251262606069544021ull);
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14478800840702104130ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v14 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1957454938422701202ull);
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v15 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12628262717118827796ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v15 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16421101857235227458ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v15 = 0;
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__fields__v16 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7214368281488699571ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v16 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15824716071084719547ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v16 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v17 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12785820617441728288ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v17 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v18 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 52671742072953432ull);
    vlSelf->__VdlyVal__tb_tinyfarm__DOT__dut__DOT__inventory__v1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15256791510100317841ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__inventory__v1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6874901914508914848ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v1 = 0;
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v19 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2102528385328990039ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v20 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9976383613193390723ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v21 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17594762007883688753ull);
    vlSelf->__VdlyDim0__tb_tinyfarm__DOT__dut__DOT__fields__v22 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10150068531969291641ull);
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__inventory__v2 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v23 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v24 = 0;
    vlSelf->__VdlySet__tb_tinyfarm__DOT__dut__DOT__fields__v26 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7108560190254462749ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 188736309336661099ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4586539026608670122ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceEn__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7047721659444458450ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 676388443088116006ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_crop__VforceVal__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6677223885810114113ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5193675853879487403ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceEn__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11372590413294589045ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3368745217455389821ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_qty__VforceVal__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6250533829947060025ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6512596795410452505ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceEn__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2216932565775735240ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12202417977528604239ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_tinyfarm__DOT__dut__DOT__order_timer__VforceVal__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 189085926955486686ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
