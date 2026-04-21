// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tinyfarm_sim_fixed.h for the primary calling header

#include "Vtop_tinyfarm_sim_fixed__pch.h"

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_static(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_static\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6823686349436134104ull);
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0 = vlSelfRef.clk_pix;
}

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_static__TOP(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_static__TOP\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6823686349436134104ull);
}

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_initial(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_initial\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_final(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_final\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop_tinyfarm_sim_fixed___024root___eval_phase__stl(Vtop_tinyfarm_sim_fixed___024root* vlSelf);

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_settle(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_settle\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tinyfarm_sim_fixed___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("top_tinyfarm_sim_fixed.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop_tinyfarm_sim_fixed___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_triggers_vec__stl(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_triggers_vec__stl\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___stl_sequent__TOP__0(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___stl_sequent__TOP__0\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ top_tinyfarm_sim__DOT__fr;
    top_tinyfarm_sim__DOT__fr = 0;
    CData/*7:0*/ top_tinyfarm_sim__DOT__fg;
    top_tinyfarm_sim__DOT__fg = 0;
    CData/*7:0*/ top_tinyfarm_sim__DOT__fb;
    top_tinyfarm_sim__DOT__fb = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__qtybars_w;
    top_tinyfarm_sim__DOT__qtybars_w = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__timer_w;
    top_tinyfarm_sim__DOT__timer_w = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__score_w;
    top_tinyfarm_sim__DOT__score_w = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__invw_h;
    top_tinyfarm_sim__DOT__invw_h = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__invc_h;
    top_tinyfarm_sim__DOT__invc_h = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__invca_h;
    top_tinyfarm_sim__DOT__invca_h = 0;
    SData/*9:0*/ top_tinyfarm_sim__DOT__invt_h;
    top_tinyfarm_sim__DOT__invt_h = 0;
    // Body
    vlSelfRef.top_tinyfarm_sim__DOT__de = ((0x0280U 
                                            > (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sx)) 
                                           & (0x01e0U 
                                              > (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sy)));
    vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x18U;
    vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x63U;
    vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x2aU;
    top_tinyfarm_sim__DOT__qtybars_w = (0x000003ffU 
                                        & ((IData)(0x0012U) 
                                           * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty)));
    top_tinyfarm_sim__DOT__timer_w = (0x000003ffU & 
                                      ((IData)(0x000aU) 
                                       * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_timer)));
    top_tinyfarm_sim__DOT__score_w = (0x000003ffU & 
                                      VL_SHIFTL_III(10,10,32, 
                                                    (0x0000001fU 
                                                     & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score)), 3U));
    top_tinyfarm_sim__DOT__invw_h = (0x000003ffU & 
                                     ((IData)(0x000aU) 
                                      * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat)));
    top_tinyfarm_sim__DOT__invc_h = (0x000003ffU & 
                                     ((IData)(0x000aU) 
                                      * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_corn)));
    top_tinyfarm_sim__DOT__invca_h = (0x000003ffU & 
                                      ((IData)(0x000aU) 
                                       * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot)));
    top_tinyfarm_sim__DOT__invt_h = (0x000003ffU & 
                                     ((IData)(0x000aU) 
                                      * (IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato)));
    top_tinyfarm_sim__DOT__fr = 0x7bU;
    top_tinyfarm_sim__DOT__fg = 0x4cU;
    top_tinyfarm_sim__DOT__fb = 0x20U;
    if (vlSelfRef.top_tinyfarm_sim__DOT__field_valid[0U]) {
        if (vlSelfRef.top_tinyfarm_sim__DOT__field_ready[0U]) {
            top_tinyfarm_sim__DOT__fr = 0x44U;
            top_tinyfarm_sim__DOT__fg = 0xe0U;
            top_tinyfarm_sim__DOT__fb = 0x44U;
        } else {
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[0U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[0U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[0U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop))
                    ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop))
                                ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop))
                                            ? 0xffU
                                            : 0xe5U)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop))
                    ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop))
                                ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop))
                                            ? 0x80U
                                            : 0x3aU)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop))
                    ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop))
                                ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop))
                                            ? 0x22U
                                            : 0x28U)));
            top_tinyfarm_sim__DOT__fr = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__Vfuncout;
            top_tinyfarm_sim__DOT__fg = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__Vfuncout;
            top_tinyfarm_sim__DOT__fb = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__Vfuncout;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__Vfuncout 
                    = ((((0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__x)) 
                         & (0x00d2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__x))) 
                        & (0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__y))) 
                       & (0x00aaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = top_tinyfarm_sim__DOT__fr;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = top_tinyfarm_sim__DOT__fg;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = top_tinyfarm_sim__DOT__fb;
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__y 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__y;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__x 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__x;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__Vfuncout 
                                    = ((((0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__x)) 
                                         & (0x00d2U 
                                            > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__x))) 
                                        & (0x001eU 
                                           <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__y))) 
                                       & (0x00aaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__y)));
                            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__Vfuncout)) 
                           & ((((0x0022U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__x)) 
                                | (0x00ceU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__x))) 
                               | (0x0022U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__y))) 
                              | (0x00a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__y))));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__19__Vfuncout)) 
         & (0U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[0U] 
          & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[0U])) 
         & ([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__w 
                        = (0x000003ffU & ((IData)(0x0014U) 
                                          * vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U]));
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__Vfuncout 
                        = ((((0x002aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__x) 
                                < (0x000003ffU & ((IData)(0x002aU) 
                                                  + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__w))))) 
                            & (0x0096U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__y))) 
                           & (0x009eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__y)));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__Vfuncout)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    top_tinyfarm_sim__DOT__fr = 0x7bU;
    top_tinyfarm_sim__DOT__fg = 0x4cU;
    top_tinyfarm_sim__DOT__fb = 0x20U;
    if (vlSelfRef.top_tinyfarm_sim__DOT__field_valid[1U]) {
        if (vlSelfRef.top_tinyfarm_sim__DOT__field_ready[1U]) {
            top_tinyfarm_sim__DOT__fr = 0x44U;
            top_tinyfarm_sim__DOT__fg = 0xe0U;
            top_tinyfarm_sim__DOT__fb = 0x44U;
        } else {
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[1U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[1U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[1U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop))
                    ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop))
                                ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop))
                                            ? 0xffU
                                            : 0xe5U)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop))
                    ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop))
                                ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop))
                                            ? 0x80U
                                            : 0x3aU)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop))
                    ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop))
                                ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop))
                                            ? 0x22U
                                            : 0x28U)));
            top_tinyfarm_sim__DOT__fr = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__Vfuncout;
            top_tinyfarm_sim__DOT__fg = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__Vfuncout;
            top_tinyfarm_sim__DOT__fb = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__Vfuncout;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__Vfuncout 
                    = ((((0x00e6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__x)) 
                         & (0x019aU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__x))) 
                        & (0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__y))) 
                       & (0x00aaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = top_tinyfarm_sim__DOT__fr;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = top_tinyfarm_sim__DOT__fg;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = top_tinyfarm_sim__DOT__fb;
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__y 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__y;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__x 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__x;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__Vfuncout 
                                    = ((((0x00e6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__x)) 
                                         & (0x019aU 
                                            > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__x))) 
                                        & (0x001eU 
                                           <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__y))) 
                                       & (0x00aaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__y)));
                            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__Vfuncout)) 
                           & ((((0x00eaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__x)) 
                                | (0x0196U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__x))) 
                               | (0x0022U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__y))) 
                              | (0x00a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__y))));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__26__Vfuncout)) 
         & (1U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[1U] 
          & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[1U])) 
         & ([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__w 
                        = (0x000003ffU & ((IData)(0x0014U) 
                                          * vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U]));
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__Vfuncout 
                        = ((((0x00f2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__x) 
                                < (0x000003ffU & ((IData)(0x00f2U) 
                                                  + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__w))))) 
                            & (0x0096U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__y))) 
                           & (0x009eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__y)));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__Vfuncout)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    top_tinyfarm_sim__DOT__fr = 0x7bU;
    top_tinyfarm_sim__DOT__fg = 0x4cU;
    top_tinyfarm_sim__DOT__fb = 0x20U;
    if (vlSelfRef.top_tinyfarm_sim__DOT__field_valid[2U]) {
        if (vlSelfRef.top_tinyfarm_sim__DOT__field_ready[2U]) {
            top_tinyfarm_sim__DOT__fr = 0x44U;
            top_tinyfarm_sim__DOT__fg = 0xe0U;
            top_tinyfarm_sim__DOT__fb = 0x44U;
        } else {
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[2U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[2U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[2U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop))
                    ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop))
                                ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop))
                                            ? 0xffU
                                            : 0xe5U)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop))
                    ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop))
                                ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop))
                                            ? 0x80U
                                            : 0x3aU)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop))
                    ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop))
                                ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop))
                                            ? 0x22U
                                            : 0x28U)));
            top_tinyfarm_sim__DOT__fr = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__Vfuncout;
            top_tinyfarm_sim__DOT__fg = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__Vfuncout;
            top_tinyfarm_sim__DOT__fb = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__Vfuncout;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__Vfuncout 
                    = ((((0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__x)) 
                         & (0x00d2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__x))) 
                        & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__y))) 
                       & (0x0154U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = top_tinyfarm_sim__DOT__fr;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = top_tinyfarm_sim__DOT__fg;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = top_tinyfarm_sim__DOT__fb;
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__y 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__y;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__x 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__x;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__Vfuncout 
                                    = ((((0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__x)) 
                                         & (0x00d2U 
                                            > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__x))) 
                                        & (0x00c8U 
                                           <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__y))) 
                                       & (0x0154U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__y)));
                            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__Vfuncout)) 
                           & ((((0x0022U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__x)) 
                                | (0x00ceU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__x))) 
                               | (0x00ccU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__y))) 
                              | (0x0150U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__y))));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__33__Vfuncout)) 
         & (2U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[2U] 
          & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[2U])) 
         & ([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__w 
                        = (0x000003ffU & ((IData)(0x0014U) 
                                          * vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U]));
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__Vfuncout 
                        = ((((0x002aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__x) 
                                < (0x000003ffU & ((IData)(0x002aU) 
                                                  + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__w))))) 
                            & (0x0140U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__y))) 
                           & (0x0148U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__y)));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__Vfuncout)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    top_tinyfarm_sim__DOT__fr = 0x7bU;
    top_tinyfarm_sim__DOT__fg = 0x4cU;
    top_tinyfarm_sim__DOT__fb = 0x20U;
    if (vlSelfRef.top_tinyfarm_sim__DOT__field_valid[3U]) {
        if (vlSelfRef.top_tinyfarm_sim__DOT__field_ready[3U]) {
            top_tinyfarm_sim__DOT__fr = 0x44U;
            top_tinyfarm_sim__DOT__fg = 0xe0U;
            top_tinyfarm_sim__DOT__fb = 0x44U;
        } else {
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[3U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[3U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop 
                = vlSelfRef.top_tinyfarm_sim__DOT__field_crop[3U];
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop))
                    ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop))
                                ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop))
                                            ? 0xffU
                                            : 0xe5U)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop))
                    ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop))
                                ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop))
                                            ? 0x80U
                                            : 0x3aU)));
            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__Vfuncout 
                = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop))
                    ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop))
                                ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop))
                                            ? 0x22U
                                            : 0x28U)));
            top_tinyfarm_sim__DOT__fr = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__Vfuncout;
            top_tinyfarm_sim__DOT__fg = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__Vfuncout;
            top_tinyfarm_sim__DOT__fb = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__Vfuncout;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__Vfuncout 
                    = ((((0x00e6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__x)) 
                         & (0x019aU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__x))) 
                        & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__y))) 
                       & (0x0154U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = top_tinyfarm_sim__DOT__fr;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = top_tinyfarm_sim__DOT__fg;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = top_tinyfarm_sim__DOT__fb;
    }
    if ((([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__Vfuncout 
                        = (([&]() {
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__y 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__y;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__x 
                                    = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__x;
                                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__Vfuncout 
                                    = ((((0x00e6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__x)) 
                                         & (0x019aU 
                                            > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__x))) 
                                        & (0x00c8U 
                                           <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__y))) 
                                       & (0x0154U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__y)));
                            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__Vfuncout)) 
                           & ((((0x00eaU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__x)) 
                                | (0x0196U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__x))) 
                               | (0x00ccU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__y))) 
                              | (0x0150U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__y))));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__40__Vfuncout)) 
         & (3U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[3U] 
          & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[3U])) 
         & ([&]() {
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__w 
                        = (0x000003ffU & ((IData)(0x0014U) 
                                          * vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U]));
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__y 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__x 
                        = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                    vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__Vfuncout 
                        = ((((0x00f2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__x)) 
                             & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__x) 
                                < (0x000003ffU & ((IData)(0x00f2U) 
                                                  + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__w))))) 
                            & (0x0140U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__y))) 
                           & (0x0148U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__y)));
                }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__Vfuncout)))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__Vfuncout 
                    = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__x)) 
                         & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__x))) 
                        & (0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__y))) 
                       & (0x00a0U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x1dU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x23U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x4fU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__x))) 
                        & (0x0037U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__y))) 
                       & (0x006eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__w 
                    = top_tinyfarm_sim__DOT__qtybars_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__x) 
                            < (0x000003ffU & ((IData)(0x021cU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__w))))) 
                        & (0x0046U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__y))) 
                       & (0x0058U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__w 
                    = top_tinyfarm_sim__DOT__timer_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__x) 
                            < (0x000003ffU & ((IData)(0x021cU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__w))))) 
                        & (0x0064U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__y))) 
                       & (0x0070U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf4U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x4eU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xd4U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout 
                    = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x)) 
                         & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x))) 
                        & (0x00b4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y))) 
                       & (0x0122U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x22U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x32U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__x))) 
                        & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__y))) 
                       & (0x00ffU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__Vfuncout))) {
        if ((0U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x55U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout))) {
        if ((1U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xe0U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x44U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x55U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout))) {
        if ((2U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x44U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x55U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout))) {
        if ((3U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x44U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x44U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x55U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x55U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__Vfuncout 
                    = ((((0x0014U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__x)) 
                         & (0x026cU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__x))) 
                        & (0x0186U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__y))) 
                       & (0x01ccU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x18U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__h 
                    = top_tinyfarm_sim__DOT__invw_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y0 
                    = (0x000003ffU & ((IData)(0x01c2U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invw_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout 
                    = ((((0x0032U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x)) 
                         & (0x004eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf2U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x40U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__h 
                    = top_tinyfarm_sim__DOT__invc_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y0 
                    = (0x000003ffU & ((IData)(0x01c2U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invc_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__Vfuncout 
                    = ((((0x005fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__x)) 
                         & (0x007bU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__h 
                    = top_tinyfarm_sim__DOT__invca_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y0 
                    = (0x000003ffU & ((IData)(0x01c2U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invca_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout 
                    = ((((0x008cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x)) 
                         & (0x00a8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x80U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__h 
                    = top_tinyfarm_sim__DOT__invt_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y0 
                    = (0x000003ffU & ((IData)(0x01c2U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invt_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout 
                    = ((((0x00b9U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x)) 
                         & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xe5U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x3aU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x28U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__w 
                    = top_tinyfarm_sim__DOT__score_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__Vfuncout 
                    = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__x) 
                            < (0x000003ffU & ((IData)(0x0118U) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__w))))) 
                        & (0x01a4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__y))) 
                       & (0x01b8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x30U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__w 
                    = vlSelfRef.top_tinyfarm_sim__DOT__frames_until_tick;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__Vfuncout 
                    = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__x) 
                            < (0x000003ffU & ((IData)(0x0118U) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__w))))) 
                        & (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__y))) 
                       & (0x01c6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
}

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___eval_stl(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_stl\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop_tinyfarm_sim_fixed___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop_tinyfarm_sim_fixed___024root___eval_phase__stl(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___eval_phase__stl\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tinyfarm_sim_fixed___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tinyfarm_sim_fixed___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop_tinyfarm_sim_fixed___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop_tinyfarm_sim_fixed___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk_pix)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tinyfarm_sim_fixed___024root___ctor_var_reset(Vtop_tinyfarm_sim_fixed___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim_fixed___024root___ctor_var_reset\n"); );
    Vtop_tinyfarm_sim_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk_pix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098658896731941934ull);
    vlSelf->sim_rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3714503687086834723ull);
    vlSelf->ui_mode_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15327338958105212542ull);
    vlSelf->ui_crop_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3255567971729591516ull);
    vlSelf->btn_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9499058026398146258ull);
    vlSelf->btn_right = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 858778956991903407ull);
    vlSelf->btn_action = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6151241816371156150ull);
    vlSelf->btn_fulfill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4755772314497853544ull);
    vlSelf->sdl_sx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1189650543127302554ull);
    vlSelf->sdl_sy = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14305830827530400904ull);
    vlSelf->sdl_de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8848505534622421384ull);
    vlSelf->sdl_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3846558581869724040ull);
    vlSelf->sdl_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6027855836595603051ull);
    vlSelf->sdl_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8827861841231814415ull);
    vlSelf->top_tinyfarm_sim__DOT__sx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11187925047112557240ull);
    vlSelf->top_tinyfarm_sim__DOT__sy = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4068728037109379726ull);
    vlSelf->top_tinyfarm_sim__DOT__de = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12847475670386592959ull);
    vlSelf->top_tinyfarm_sim__DOT__field_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5161377364868089988ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tinyfarm_sim__DOT__field_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10975190923795065013ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tinyfarm_sim__DOT__field_ready[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13947826511561511571ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tinyfarm_sim__DOT__field_crop[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13812626030540207209ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_tinyfarm_sim__DOT__field_timer[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2770099010786593144ull);
    }
    vlSelf->top_tinyfarm_sim__DOT__inv_wheat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5940173967221155337ull);
    vlSelf->top_tinyfarm_sim__DOT__inv_corn = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11842572341114922196ull);
    vlSelf->top_tinyfarm_sim__DOT__inv_carrot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14270249256666052751ull);
    vlSelf->top_tinyfarm_sim__DOT__inv_tomato = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11781570876909688073ull);
    vlSelf->top_tinyfarm_sim__DOT__order_crop = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3911255750585100836ull);
    vlSelf->top_tinyfarm_sim__DOT__order_qty = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11283352754348453119ull);
    vlSelf->top_tinyfarm_sim__DOT__order_timer = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6360555987172416671ull);
    vlSelf->top_tinyfarm_sim__DOT__score = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3676906344066462216ull);
    vlSelf->top_tinyfarm_sim__DOT__lfsr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5963399456487525771ull);
    vlSelf->top_tinyfarm_sim__DOT__frames_until_tick = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 513708602260371428ull);
    vlSelf->top_tinyfarm_sim__DOT__paint_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3811916260693105419ull);
    vlSelf->top_tinyfarm_sim__DOT__paint_g = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17637980472749579804ull);
    vlSelf->top_tinyfarm_sim__DOT__paint_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12967752172350112599ull);
    vlSelf->top_tinyfarm_sim__DOT__u_left__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1311599854981819956ull);
    vlSelf->top_tinyfarm_sim__DOT__u_right__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6762075545340549862ull);
    vlSelf->top_tinyfarm_sim__DOT__u_action__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17057552006612445427ull);
    vlSelf->top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2000332470461701677ull);
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__15__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__16__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__17__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__18__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__19__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__19__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__19__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__20__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__21__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__22__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__23__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__24__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__25__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__26__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__26__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__26__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__27__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__28__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__29__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__30__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__31__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__32__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__33__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__33__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__33__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__34__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__35__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__36__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__37__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__38__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__39__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__40__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__40__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__on_border__40__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__41__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__42__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__43__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__44__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__45__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__46__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__47__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__48__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__49__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__51__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_r__52__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_g__53__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__crop_b__54__crop = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__55__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__59__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y0 = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__h = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__y0 = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__64__h = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y0 = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__h = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y0 = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__h = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__76__w = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__Vfuncout = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__x = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__y = 0;
    vlSelf->__Vfunc_top_tinyfarm_sim__DOT__in_rect__77__w = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_pix__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
