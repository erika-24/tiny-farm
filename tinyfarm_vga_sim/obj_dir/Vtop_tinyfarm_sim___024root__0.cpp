// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tinyfarm_sim.h for the primary calling header

#include "Vtop_tinyfarm_sim__pch.h"

void Vtop_tinyfarm_sim___024root___eval_triggers_vec__ico(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_triggers_vec__ico\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop_tinyfarm_sim___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___trigger_anySet__ico\n"); );
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

void Vtop_tinyfarm_sim___024root___ico_sequent__TOP__0(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___ico_sequent__TOP__0\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x28U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x28U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__Vfuncout 
                                = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x)) 
                                     & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x))) 
                                    & (0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y))) 
                                   & (0x00a0U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__Vfuncout)) 
                       & ((((0x01c5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x)) 
                            | (0x025fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x))) 
                           | (0x0021U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y))) 
                          | (0x009dU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xd0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x))) 
                        & (0x0037U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y))) 
                       & (0x006eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x)) 
                         & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x))) 
                        & (0x0046U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y))) 
                       & (0x0058U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__Vfuncout 
                                = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x)) 
                                     & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x))) 
                                    & (0x0046U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y))) 
                                   & (0x0058U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__Vfuncout)) 
                       & ((((0x021eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x)) 
                            | (0x0256U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x))) 
                           | (0x0048U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y))) 
                          | (0x0056U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__w 
                    = top_tinyfarm_sim__DOT__qtybars_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__Vfuncout 
                    = ((((0x021eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x) 
                            < (0x000003ffU & ((IData)(0x021eU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__w))))) 
                        & (0x0048U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y))) 
                       & (0x0056U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xf0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x)) 
                         & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x))) 
                        & (0x0064U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y))) 
                       & (0x0070U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout 
                                = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x)) 
                                     & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x))) 
                                    & (0x0064U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y))) 
                                   & (0x0070U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout)) 
                       & ((((0x021eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x)) 
                            | (0x0256U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x))) 
                           | (0x0066U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y))) 
                          | (0x006eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__w 
                    = top_tinyfarm_sim__DOT__timer_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout 
                    = ((((0x021eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x) 
                            < (0x000003ffU & ((IData)(0x021eU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__w))))) 
                        & (0x0066U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y))) 
                       & (0x006eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf2U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xb0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x3cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout 
                    = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x)) 
                         & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x))) 
                        & (0x00b4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y))) 
                       & (0x0122U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x30U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x30U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout 
                                = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x)) 
                                     & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x))) 
                                    & (0x00b4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y))) 
                                   & (0x0122U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout)) 
                       & ((((0x01c5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x)) 
                            | (0x025fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x))) 
                           | (0x00b7U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y))) 
                          | (0x011fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xd0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x))) 
                        & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y))) 
                       & (0x00ffU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__Vfuncout 
                                = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x)) 
                                     & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x))) 
                                    & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y))) 
                                   & (0x00ffU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__Vfuncout)) 
                       & ((((0x01d8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x)) 
                            | (0x020bU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x))) 
                           | (0x00caU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y))) 
                          | (0x00fdU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__Vfuncout))) {
        if ((0U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xe8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xe8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xe8U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout))) {
        if ((1U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x50U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__Vfuncout))) {
        if ((2U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x50U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__Vfuncout))) {
        if ((3U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x50U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x50U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__Vfuncout 
                    = ((((0x0014U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x)) 
                         & (0x026cU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x))) 
                        & (0x0186U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y))) 
                       & (0x01ccU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x18U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout 
                    = ((((0x0032U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x)) 
                         & (0x004eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__Vfuncout 
                                = ((((0x0032U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x)) 
                                     & (0x004eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__Vfuncout)) 
                       & ((((0x0034U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x)) 
                            | (0x004cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__h 
                    = top_tinyfarm_sim__DOT__invw_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invw_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__Vfuncout 
                    = ((((0x0034U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x)) 
                         & (0x004cU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf2U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x40U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__Vfuncout 
                    = ((((0x005fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x)) 
                         & (0x007bU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__Vfuncout 
                                = ((((0x005fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x)) 
                                     & (0x007bU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__Vfuncout)) 
                       & ((((0x0061U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x)) 
                            | (0x0079U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__h 
                    = top_tinyfarm_sim__DOT__invc_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invc_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__Vfuncout 
                    = ((((0x0061U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x)) 
                         & (0x0079U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__Vfuncout 
                    = ((((0x008cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x)) 
                         & (0x00a8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__Vfuncout 
                                = ((((0x008cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x)) 
                                     & (0x00a8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__Vfuncout)) 
                       & ((((0x008eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x)) 
                            | (0x00a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__h 
                    = top_tinyfarm_sim__DOT__invca_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invca_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__Vfuncout 
                    = ((((0x008eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x)) 
                         & (0x00a6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x80U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__Vfuncout 
                    = ((((0x00b9U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x)) 
                         & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__Vfuncout 
                                = ((((0x00b9U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x)) 
                                     & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__Vfuncout)) 
                       & ((((0x00bbU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x)) 
                            | (0x00d3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__h 
                    = top_tinyfarm_sim__DOT__invt_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invt_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__Vfuncout 
                    = ((((0x00bbU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x)) 
                         & (0x00d3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xe5U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x3aU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x28U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__Vfuncout 
                    = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x)) 
                         & (0x0190U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x))) 
                        & (0x01a4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y))) 
                       & (0x01b8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__Vfuncout 
                                = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x)) 
                                     & (0x0190U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x))) 
                                    & (0x01a4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y))) 
                                   & (0x01b8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__Vfuncout)) 
                       & ((((0x011aU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x)) 
                            | (0x018eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x))) 
                           | (0x01a6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y))) 
                          | (0x01b6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__w 
                    = top_tinyfarm_sim__DOT__score_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__Vfuncout 
                    = ((((0x011aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x) 
                            < (0x000003ffU & ((IData)(0x011aU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__w))))) 
                        & (0x01a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y))) 
                       & (0x01b6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x40U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xe0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x40U;
    }
}

void Vtop_tinyfarm_sim___024root___eval_ico(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_ico\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop_tinyfarm_sim___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop_tinyfarm_sim___024root___eval_phase__ico(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_phase__ico\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop_tinyfarm_sim___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tinyfarm_sim___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop_tinyfarm_sim___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop_tinyfarm_sim___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop_tinyfarm_sim___024root___eval_triggers_vec__act(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_triggers_vec__act\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk_pix) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_pix__0 = vlSelfRef.clk_pix;
}

bool Vtop_tinyfarm_sim___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___trigger_anySet__act\n"); );
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

void Vtop_tinyfarm_sim___024root___nba_sequent__TOP__0(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___nba_sequent__TOP__0\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop;
    __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v;
    __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__cur;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__cur = 0;
    CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__feedback;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__feedback = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__cur;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__cur = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__cur;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__cur = 0;
    CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__feedback;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__feedback = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__cur;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__cur = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__cur;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__cur = 0;
    CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__feedback;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__feedback = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__cur;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__cur = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__cur;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__cur = 0;
    CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__feedback;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__feedback = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__cur;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__cur = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__cur;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__cur = 0;
    CData/*0:0*/ __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__feedback;
    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__feedback = 0;
    CData/*1:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__Vfuncout;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__cur;
    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__cur = 0;
    CData/*1:0*/ __Vdly__top_tinyfarm_sim__DOT__field_sel;
    __Vdly__top_tinyfarm_sim__DOT__field_sel = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__inv_wheat;
    __Vdly__top_tinyfarm_sim__DOT__inv_wheat = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__inv_corn;
    __Vdly__top_tinyfarm_sim__DOT__inv_corn = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__inv_carrot;
    __Vdly__top_tinyfarm_sim__DOT__inv_carrot = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__inv_tomato;
    __Vdly__top_tinyfarm_sim__DOT__inv_tomato = 0;
    CData/*1:0*/ __Vdly__top_tinyfarm_sim__DOT__order_crop;
    __Vdly__top_tinyfarm_sim__DOT__order_crop = 0;
    CData/*1:0*/ __Vdly__top_tinyfarm_sim__DOT__order_qty;
    __Vdly__top_tinyfarm_sim__DOT__order_qty = 0;
    CData/*4:0*/ __Vdly__top_tinyfarm_sim__DOT__order_timer;
    __Vdly__top_tinyfarm_sim__DOT__order_timer = 0;
    CData/*7:0*/ __Vdly__top_tinyfarm_sim__DOT__score;
    __Vdly__top_tinyfarm_sim__DOT__score = 0;
    CData/*7:0*/ __Vdly__top_tinyfarm_sim__DOT__lfsr;
    __Vdly__top_tinyfarm_sim__DOT__lfsr = 0;
    SData/*9:0*/ __Vdly__top_tinyfarm_sim__DOT__frames_until_tick;
    __Vdly__top_tinyfarm_sim__DOT__frames_until_tick = 0;
    SData/*9:0*/ __Vdly__top_tinyfarm_sim__DOT__sx;
    __Vdly__top_tinyfarm_sim__DOT__sx = 0;
    SData/*9:0*/ __Vdly__top_tinyfarm_sim__DOT__sy;
    __Vdly__top_tinyfarm_sim__DOT__sy = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff = 0;
    CData/*2:0*/ __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_valid__v0;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_valid__v1;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v1 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v4;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_valid__v4;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v4 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v4;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v4 = 0;
    CData/*1:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_crop__v4;
    __VdlyVal__top_tinyfarm_sim__DOT__field_crop__v4 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v4;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v4 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v4;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v4 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v4;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v4 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v4;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v4 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v5;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v5 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v5;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v5 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v5;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v5 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v6;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v6 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v6;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v6 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v5;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v5 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v5;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v5 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_valid__v5;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v5 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v6;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v6 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v5;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v5 = 0;
    CData/*1:0*/ __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v7;
    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v7 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v8;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v8 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v8;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v8 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v9;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v9 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v10;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v10 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v10;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v10 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v11;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v11 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v12;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v12 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v12;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v12 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v13;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v13 = 0;
    CData/*2:0*/ __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v14;
    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v14 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v14;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v14 = 0;
    CData/*0:0*/ __VdlySet__top_tinyfarm_sim__DOT__field_timer__v15;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v15 = 0;
    // Body
    __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff 
        = vlSelfRef.top_tinyfarm_sim__DOT__u_left__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff 
        = vlSelfRef.top_tinyfarm_sim__DOT__u_right__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff 
        = vlSelfRef.top_tinyfarm_sim__DOT__u_action__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff 
        = vlSelfRef.top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff;
    __Vdly__top_tinyfarm_sim__DOT__sx = vlSelfRef.top_tinyfarm_sim__DOT__sx;
    __Vdly__top_tinyfarm_sim__DOT__sy = vlSelfRef.top_tinyfarm_sim__DOT__sy;
    __Vdly__top_tinyfarm_sim__DOT__lfsr = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
    __Vdly__top_tinyfarm_sim__DOT__frames_until_tick 
        = vlSelfRef.top_tinyfarm_sim__DOT__frames_until_tick;
    __Vdly__top_tinyfarm_sim__DOT__field_sel = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
    __Vdly__top_tinyfarm_sim__DOT__inv_wheat = vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat;
    __Vdly__top_tinyfarm_sim__DOT__inv_corn = vlSelfRef.top_tinyfarm_sim__DOT__inv_corn;
    __Vdly__top_tinyfarm_sim__DOT__inv_carrot = vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot;
    __Vdly__top_tinyfarm_sim__DOT__inv_tomato = vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato;
    __Vdly__top_tinyfarm_sim__DOT__score = vlSelfRef.top_tinyfarm_sim__DOT__score;
    __Vdly__top_tinyfarm_sim__DOT__order_crop = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
    __Vdly__top_tinyfarm_sim__DOT__order_qty = vlSelfRef.top_tinyfarm_sim__DOT__order_qty;
    __Vdly__top_tinyfarm_sim__DOT__order_timer = vlSelfRef.top_tinyfarm_sim__DOT__order_timer;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v4 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v5 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v8 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v10 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v12 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v14 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v6 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v9 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v11 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v13 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v15 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v4 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v0 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v1 = 0U;
    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v5 = 0U;
    if (vlSelfRef.sim_rst) {
        __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff = 0U;
        __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff = 0U;
        __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff = 0U;
        __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff = 0U;
        __Vdly__top_tinyfarm_sim__DOT__sx = 0U;
        __Vdly__top_tinyfarm_sim__DOT__sy = 0U;
        __Vdly__top_tinyfarm_sim__DOT__field_sel = 0U;
        __VdlySet__top_tinyfarm_sim__DOT__field_valid__v0 = 1U;
        __Vdly__top_tinyfarm_sim__DOT__inv_wheat = 0U;
        __Vdly__top_tinyfarm_sim__DOT__inv_corn = 0U;
        __Vdly__top_tinyfarm_sim__DOT__inv_carrot = 0U;
        __Vdly__top_tinyfarm_sim__DOT__inv_tomato = 0U;
        __Vdly__top_tinyfarm_sim__DOT__order_crop = 0U;
        __Vdly__top_tinyfarm_sim__DOT__order_qty = 1U;
        __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
        __Vdly__top_tinyfarm_sim__DOT__score = 0U;
        __Vdly__top_tinyfarm_sim__DOT__lfsr = 0xa5U;
        __Vdly__top_tinyfarm_sim__DOT__frames_until_tick = 0U;
        __VdlySet__top_tinyfarm_sim__DOT__field_valid__v1 = 1U;
    } else {
        __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_left__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.btn_left));
        __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_right__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.btn_right));
        __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_action__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.btn_action));
        __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff 
            = ((6U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff) 
                      << 1U)) | (IData)(vlSelfRef.btn_fulfill));
        if ((0x031fU == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sx))) {
            __Vdly__top_tinyfarm_sim__DOT__sy = ((0x020cU 
                                                  == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sy))
                                                  ? 0U
                                                  : 
                                                 (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sy))));
            __Vdly__top_tinyfarm_sim__DOT__sx = 0U;
        } else {
            __Vdly__top_tinyfarm_sim__DOT__sx = (0x000003ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sx)));
        }
        if ((IData)((2U == (6U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_left__DOT__sync_ff))))) {
            __Vdly__top_tinyfarm_sim__DOT__field_sel 
                = (3U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel) 
                         - (IData)(1U)));
        }
        if ((IData)((2U == (6U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_right__DOT__sync_ff))))) {
            __Vdly__top_tinyfarm_sim__DOT__field_sel 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__field_sel)));
        }
        if ((IData)((2U == (6U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_action__DOT__sync_ff))))) {
            if ((1U == (IData)(vlSelfRef.ui_mode_sel))) {
                if ((1U & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_valid
                           [vlSelfRef.top_tinyfarm_sim__DOT__field_sel]))) {
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v4 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v4 = 1U;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v4 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlyVal__top_tinyfarm_sim__DOT__field_crop__v4 
                        = vlSelfRef.ui_crop_sel;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v4 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop 
                        = vlSelfRef.ui_crop_sel;
                    __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__Vfuncout 
                        = ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop))
                            ? 3U : ((1U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop))
                                     ? 4U : ((2U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__crop))
                                              ? 5U : 6U)));
                    __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v4 
                        = __Vfunc_top_tinyfarm_sim__DOT__crop_growth_time__0__Vfuncout;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v4 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlySet__top_tinyfarm_sim__DOT__field_timer__v4 = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.ui_mode_sel))) {
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid
                     [vlSelfRef.top_tinyfarm_sim__DOT__field_sel] 
                     & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready
                        [vlSelfRef.top_tinyfarm_sim__DOT__field_sel]))) {
                    if ((1U < vlSelfRef.top_tinyfarm_sim__DOT__field_timer
                         [vlSelfRef.top_tinyfarm_sim__DOT__field_sel])) {
                        __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v5 
                            = (7U & (vlSelfRef.top_tinyfarm_sim__DOT__field_timer
                                     [vlSelfRef.top_tinyfarm_sim__DOT__field_sel] 
                                     - (IData)(1U)));
                        __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v5 
                            = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v5 = 1U;
                    } else {
                        __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v6 
                            = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v6 = 1U;
                        __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v5 
                            = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    }
                }
            } else if ((3U == (IData)(vlSelfRef.ui_mode_sel))) {
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid
                     [vlSelfRef.top_tinyfarm_sim__DOT__field_sel] 
                     & vlSelfRef.top_tinyfarm_sim__DOT__field_ready
                     [vlSelfRef.top_tinyfarm_sim__DOT__field_sel])) {
                    if ((0U == vlSelfRef.top_tinyfarm_sim__DOT__field_crop
                         [vlSelfRef.top_tinyfarm_sim__DOT__field_sel])) {
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v 
                            = vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat;
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__Vfuncout 
                            = (7U & ((7U > (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v))
                                      ? ((IData)(1U) 
                                         + (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v))
                                      : (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__v)));
                        __Vdly__top_tinyfarm_sim__DOT__inv_wheat 
                            = __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__1__Vfuncout;
                    } else if ((1U == vlSelfRef.top_tinyfarm_sim__DOT__field_crop
                                [vlSelfRef.top_tinyfarm_sim__DOT__field_sel])) {
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v 
                            = vlSelfRef.top_tinyfarm_sim__DOT__inv_corn;
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__Vfuncout 
                            = (7U & ((7U > (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v))
                                      ? ((IData)(1U) 
                                         + (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v))
                                      : (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__v)));
                        __Vdly__top_tinyfarm_sim__DOT__inv_corn 
                            = __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__2__Vfuncout;
                    } else if ((2U == vlSelfRef.top_tinyfarm_sim__DOT__field_crop
                                [vlSelfRef.top_tinyfarm_sim__DOT__field_sel])) {
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v 
                            = vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot;
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__Vfuncout 
                            = (7U & ((7U > (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v))
                                      ? ((IData)(1U) 
                                         + (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v))
                                      : (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__v)));
                        __Vdly__top_tinyfarm_sim__DOT__inv_carrot 
                            = __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__3__Vfuncout;
                    } else {
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v 
                            = vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato;
                        __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__Vfuncout 
                            = (7U & ((7U > (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v))
                                      ? ((IData)(1U) 
                                         + (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v))
                                      : (IData)(__Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__v)));
                        __Vdly__top_tinyfarm_sim__DOT__inv_tomato 
                            = __Vfunc_top_tinyfarm_sim__DOT__sat_inc3__4__Vfuncout;
                    }
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v5 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlySet__top_tinyfarm_sim__DOT__field_valid__v5 = 1U;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v6 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v5 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                    __VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v7 
                        = vlSelfRef.top_tinyfarm_sim__DOT__field_sel;
                }
            }
        }
        if ((IData)((2U == (6U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff))))) {
            if ((0U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_crop))) {
                if (((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat) 
                     >= (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty))) {
                    __Vdly__top_tinyfarm_sim__DOT__inv_wheat 
                        = (7U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat) 
                                 - (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty)));
                    __Vdly__top_tinyfarm_sim__DOT__score 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score)));
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__cur))));
                    __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__feedback));
                    if ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout))) {
                        __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr 
                        = __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__5__Vfuncout;
                    __Vdly__top_tinyfarm_sim__DOT__lfsr 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vdly__top_tinyfarm_sim__DOT__order_crop 
                        = (3U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr));
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__Vfuncout 
                        = ((0U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__cur) 
                                         >> 2U))) ? 1U
                            : ((1U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__cur) 
                                             >> 2U)))
                                ? 2U : 3U));
                    __Vdly__top_tinyfarm_sim__DOT__order_qty 
                        = __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__6__Vfuncout;
                }
            } else if ((1U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_crop))) {
                if (((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_corn) 
                     >= (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty))) {
                    __Vdly__top_tinyfarm_sim__DOT__inv_corn 
                        = (7U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_corn) 
                                 - (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty)));
                    __Vdly__top_tinyfarm_sim__DOT__score 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score)));
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__cur))));
                    __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__feedback));
                    if ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout))) {
                        __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr 
                        = __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__7__Vfuncout;
                    __Vdly__top_tinyfarm_sim__DOT__lfsr 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vdly__top_tinyfarm_sim__DOT__order_crop 
                        = (3U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr));
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__Vfuncout 
                        = ((0U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__cur) 
                                         >> 2U))) ? 1U
                            : ((1U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__cur) 
                                             >> 2U)))
                                ? 2U : 3U));
                    __Vdly__top_tinyfarm_sim__DOT__order_qty 
                        = __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__8__Vfuncout;
                }
            } else if ((2U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_crop))) {
                if (((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot) 
                     >= (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty))) {
                    __Vdly__top_tinyfarm_sim__DOT__inv_carrot 
                        = (7U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot) 
                                 - (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty)));
                    __Vdly__top_tinyfarm_sim__DOT__score 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score)));
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__cur))));
                    __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__feedback));
                    if ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout))) {
                        __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr 
                        = __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__9__Vfuncout;
                    __Vdly__top_tinyfarm_sim__DOT__lfsr 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vdly__top_tinyfarm_sim__DOT__order_crop 
                        = (3U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr));
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__Vfuncout 
                        = ((0U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__cur) 
                                         >> 2U))) ? 1U
                            : ((1U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__cur) 
                                             >> 2U)))
                                ? 2U : 3U));
                    __Vdly__top_tinyfarm_sim__DOT__order_qty 
                        = __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__10__Vfuncout;
                }
            } else if (((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato) 
                        >= (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty))) {
                __Vdly__top_tinyfarm_sim__DOT__inv_tomato 
                    = (7U & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato) 
                             - (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_qty)));
                __Vdly__top_tinyfarm_sim__DOT__score 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score)));
                __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__cur 
                    = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
                __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__feedback 
                    = (1U & VL_REDXOR_8((0xb8U & (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__cur))));
                __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
                __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout 
                    = ((0x000000feU & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__cur) 
                                       << 1U)) | (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__feedback));
                if ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout))) {
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout = 0xa5U;
                }
                vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr 
                    = __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__11__Vfuncout;
                __Vdly__top_tinyfarm_sim__DOT__lfsr 
                    = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                __Vdly__top_tinyfarm_sim__DOT__order_crop 
                    = (3U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr));
                __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__cur 
                    = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__Vfuncout 
                    = ((0U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__cur) 
                                     >> 2U))) ? 1U : 
                       ((1U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__cur) 
                                      >> 2U))) ? 2U
                         : 3U));
                __Vdly__top_tinyfarm_sim__DOT__order_qty 
                    = __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__12__Vfuncout;
            }
        }
        if (((0U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sx)) 
             & (0x01e0U == (IData)(vlSelfRef.top_tinyfarm_sim__DOT__sy)))) {
            if ((0U != (IData)(vlSelfRef.top_tinyfarm_sim__DOT__frames_until_tick))) {
                __Vdly__top_tinyfarm_sim__DOT__frames_until_tick 
                    = (0x000003ffU & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__frames_until_tick) 
                                      - (IData)(1U)));
            } else {
                __Vdly__top_tinyfarm_sim__DOT__frames_until_tick = 0U;
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[0U] 
                     & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[0U]))) {
                    if ((1U < vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U])) {
                        __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v8 
                            = (7U & (vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U] 
                                     - (IData)(1U)));
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v8 = 1U;
                    } else {
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v9 = 1U;
                    }
                }
                if ((1U < (IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_timer))) {
                    __Vdly__top_tinyfarm_sim__DOT__order_timer 
                        = (0x0000001fU & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__order_timer) 
                                          - (IData)(1U)));
                } else {
                    if ((0U != (IData)(vlSelfRef.top_tinyfarm_sim__DOT__score))) {
                        __Vdly__top_tinyfarm_sim__DOT__score 
                            = (0x000000ffU & ((IData)(vlSelfRef.top_tinyfarm_sim__DOT__score) 
                                              - (IData)(1U)));
                    }
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__feedback 
                        = (1U & VL_REDXOR_8((0xb8U 
                                             & (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__cur))));
                    __Vdly__top_tinyfarm_sim__DOT__order_timer = 0x0cU;
                    __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout 
                        = ((0x000000feU & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__cur) 
                                           << 1U)) 
                           | (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__feedback));
                    if ((0U == (IData)(__Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout))) {
                        __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout = 0xa5U;
                    }
                    vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr 
                        = __Vfunc_top_tinyfarm_sim__DOT__lfsr_advance__13__Vfuncout;
                    __Vdly__top_tinyfarm_sim__DOT__lfsr 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vdly__top_tinyfarm_sim__DOT__order_crop 
                        = (3U & (IData)(vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr));
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__cur 
                        = vlSelfRef.top_tinyfarm_sim__DOT__game_update__DOT__new_lfsr;
                    __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__Vfuncout 
                        = ((0U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__cur) 
                                         >> 2U))) ? 1U
                            : ((1U == (3U & ((IData)(__Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__cur) 
                                             >> 2U)))
                                ? 2U : 3U));
                    __Vdly__top_tinyfarm_sim__DOT__order_qty 
                        = __Vfunc_top_tinyfarm_sim__DOT__qty_from_lfsr__14__Vfuncout;
                }
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[1U] 
                     & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[1U]))) {
                    if ((1U < vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U])) {
                        __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v10 
                            = (7U & (vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U] 
                                     - (IData)(1U)));
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v10 = 1U;
                    } else {
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v11 = 1U;
                    }
                }
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[2U] 
                     & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[2U]))) {
                    if ((1U < vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U])) {
                        __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v12 
                            = (7U & (vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U] 
                                     - (IData)(1U)));
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v12 = 1U;
                    } else {
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v13 = 1U;
                    }
                }
                if ((vlSelfRef.top_tinyfarm_sim__DOT__field_valid[3U] 
                     & (~ vlSelfRef.top_tinyfarm_sim__DOT__field_ready[3U]))) {
                    if ((1U < vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U])) {
                        __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v14 
                            = (7U & (vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U] 
                                     - (IData)(1U)));
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v14 = 1U;
                    } else {
                        __VdlySet__top_tinyfarm_sim__DOT__field_timer__v15 = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.top_tinyfarm_sim__DOT__de) {
        vlSelfRef.sdl_de = 1U;
        vlSelfRef.sdl_sx = vlSelfRef.top_tinyfarm_sim__DOT__sx;
        vlSelfRef.sdl_sy = vlSelfRef.top_tinyfarm_sim__DOT__sy;
        vlSelfRef.sdl_r = vlSelfRef.top_tinyfarm_sim__DOT__paint_r;
        vlSelfRef.sdl_g = vlSelfRef.top_tinyfarm_sim__DOT__paint_g;
        vlSelfRef.sdl_b = vlSelfRef.top_tinyfarm_sim__DOT__paint_b;
    } else {
        vlSelfRef.sdl_de = 0U;
        vlSelfRef.sdl_sx = vlSelfRef.top_tinyfarm_sim__DOT__sx;
        vlSelfRef.sdl_sy = vlSelfRef.top_tinyfarm_sim__DOT__sy;
        vlSelfRef.sdl_r = 0U;
        vlSelfRef.sdl_g = 0U;
        vlSelfRef.sdl_b = 0U;
    }
    vlSelfRef.top_tinyfarm_sim__DOT__lfsr = __Vdly__top_tinyfarm_sim__DOT__lfsr;
    vlSelfRef.top_tinyfarm_sim__DOT__frames_until_tick 
        = __Vdly__top_tinyfarm_sim__DOT__frames_until_tick;
    vlSelfRef.top_tinyfarm_sim__DOT__u_left__DOT__sync_ff 
        = __Vdly__top_tinyfarm_sim__DOT__u_left__DOT__sync_ff;
    vlSelfRef.top_tinyfarm_sim__DOT__u_right__DOT__sync_ff 
        = __Vdly__top_tinyfarm_sim__DOT__u_right__DOT__sync_ff;
    vlSelfRef.top_tinyfarm_sim__DOT__u_action__DOT__sync_ff 
        = __Vdly__top_tinyfarm_sim__DOT__u_action__DOT__sync_ff;
    vlSelfRef.top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff 
        = __Vdly__top_tinyfarm_sim__DOT__u_fulf__DOT__sync_ff;
    vlSelfRef.top_tinyfarm_sim__DOT__field_sel = __Vdly__top_tinyfarm_sim__DOT__field_sel;
    vlSelfRef.top_tinyfarm_sim__DOT__inv_wheat = __Vdly__top_tinyfarm_sim__DOT__inv_wheat;
    vlSelfRef.top_tinyfarm_sim__DOT__inv_corn = __Vdly__top_tinyfarm_sim__DOT__inv_corn;
    vlSelfRef.top_tinyfarm_sim__DOT__inv_carrot = __Vdly__top_tinyfarm_sim__DOT__inv_carrot;
    vlSelfRef.top_tinyfarm_sim__DOT__inv_tomato = __Vdly__top_tinyfarm_sim__DOT__inv_tomato;
    vlSelfRef.top_tinyfarm_sim__DOT__score = __Vdly__top_tinyfarm_sim__DOT__score;
    vlSelfRef.top_tinyfarm_sim__DOT__order_crop = __Vdly__top_tinyfarm_sim__DOT__order_crop;
    vlSelfRef.top_tinyfarm_sim__DOT__order_qty = __Vdly__top_tinyfarm_sim__DOT__order_qty;
    vlSelfRef.top_tinyfarm_sim__DOT__order_timer = __Vdly__top_tinyfarm_sim__DOT__order_timer;
    if (__VdlySet__top_tinyfarm_sim__DOT__field_valid__v0) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[0U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[0U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[0U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_valid__v1) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[1U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[2U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[3U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[1U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[2U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[3U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[1U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[2U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[3U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_valid__v4) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[__VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v4] = 1U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[__VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v4] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_crop__v4;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[__VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v4] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v6) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[__VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v5] = 1U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_valid__v5) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_valid[__VdlyDim0__top_tinyfarm_sim__DOT__field_valid__v5] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_crop[__VdlyDim0__top_tinyfarm_sim__DOT__field_crop__v5] = 0U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[__VdlyDim0__top_tinyfarm_sim__DOT__field_ready__v6] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v9) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[0U] = 1U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v11) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[1U] = 1U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v13) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[2U] = 1U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v4) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[__VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v4] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v4;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v5) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[__VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v5] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v5;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v6) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[__VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v6] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_valid__v5) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[__VdlyDim0__top_tinyfarm_sim__DOT__field_timer__v7] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v8) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v8;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v9) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[0U] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v10) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v10;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v11) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[1U] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v12) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v12;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v13) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[2U] = 0U;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v14) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U] 
            = __VdlyVal__top_tinyfarm_sim__DOT__field_timer__v14;
    }
    if (__VdlySet__top_tinyfarm_sim__DOT__field_timer__v15) {
        vlSelfRef.top_tinyfarm_sim__DOT__field_ready[3U] = 1U;
        vlSelfRef.top_tinyfarm_sim__DOT__field_timer[3U] = 0U;
    }
    vlSelfRef.top_tinyfarm_sim__DOT__sx = __Vdly__top_tinyfarm_sim__DOT__sx;
    vlSelfRef.top_tinyfarm_sim__DOT__sy = __Vdly__top_tinyfarm_sim__DOT__sy;
    vlSelfRef.order_crop_o = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
    vlSelfRef.order_qty_o = vlSelfRef.top_tinyfarm_sim__DOT__order_qty;
    vlSelfRef.order_timer_o = vlSelfRef.top_tinyfarm_sim__DOT__order_timer;
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
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x28U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x28U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__Vfuncout 
                                = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x)) 
                                     & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__x))) 
                                    & (0x001eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y))) 
                                   & (0x00a0U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__45__Vfuncout)) 
                       & ((((0x01c5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x)) 
                            | (0x025fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__x))) 
                           | (0x0021U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y))) 
                          | (0x009dU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__44__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xd0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__x))) 
                        & (0x0037U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y))) 
                       & (0x006eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__46__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop 
            = vlSelfRef.top_tinyfarm_sim__DOT__order_crop;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__47__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__48__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__49__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x)) 
                         & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__x))) 
                        & (0x0046U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y))) 
                       & (0x0058U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__50__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__Vfuncout 
                                = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x)) 
                                     & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__x))) 
                                    & (0x0046U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y))) 
                                   & (0x0058U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__52__Vfuncout)) 
                       & ((((0x021eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x)) 
                            | (0x0256U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__x))) 
                           | (0x0048U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y))) 
                          | (0x0056U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__51__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__w 
                    = top_tinyfarm_sim__DOT__qtybars_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__Vfuncout 
                    = ((((0x021eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__x) 
                            < (0x000003ffU & ((IData)(0x021eU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__w))))) 
                        & (0x0048U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y))) 
                       & (0x0056U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__53__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xf0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x)) 
                         & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__x))) 
                        & (0x0064U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y))) 
                       & (0x0070U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__54__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout 
                                = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x)) 
                                     & (0x0258U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__x))) 
                                    & (0x0064U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y))) 
                                   & (0x0070U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__56__Vfuncout)) 
                       & ((((0x021eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x)) 
                            | (0x0256U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__x))) 
                           | (0x0066U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y))) 
                          | (0x006eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__55__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__w 
                    = top_tinyfarm_sim__DOT__timer_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout 
                    = ((((0x021eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__x) 
                            < (0x000003ffU & ((IData)(0x021eU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__w))))) 
                        & (0x0066U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y))) 
                       & (0x006eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__57__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf2U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xb0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x3cU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout 
                    = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x)) 
                         & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__x))) 
                        & (0x00b4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y))) 
                       & (0x0122U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__58__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x30U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x30U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout 
                                = ((((0x01c2U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x)) 
                                     & (0x0262U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__x))) 
                                    & (0x00b4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y))) 
                                   & (0x0122U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__60__Vfuncout)) 
                       & ((((0x01c5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x)) 
                            | (0x025fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__x))) 
                           | (0x00b7U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y))) 
                          | (0x011fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__59__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xd0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__Vfuncout 
                    = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x)) 
                         & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__x))) 
                        & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y))) 
                       & (0x00ffU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__61__Vfuncout))) {
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop 
            = vlSelfRef.ui_crop_sel;
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                ? 0xf2U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                            ? 0xffU : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__crop))
                                        ? 0xffU : 0xe5U)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                ? 0xd0U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                            ? 0xf0U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__crop))
                                        ? 0x80U : 0x3aU)));
        vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__Vfuncout 
            = ((0U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                ? 0x40U : ((1U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                            ? 0x30U : ((2U == (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__crop))
                                        ? 0x22U : 0x28U)));
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_r__62__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_g__63__Vfuncout;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__crop_b__64__Vfuncout;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__Vfuncout 
                                = ((((0x01d6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x)) 
                                     & (0x020dU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__x))) 
                                    & (0x00c8U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y))) 
                                   & (0x00ffU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__66__Vfuncout)) 
                       & ((((0x01d8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x)) 
                            | (0x020bU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__x))) 
                           | (0x00caU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y))) 
                          | (0x00fdU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__65__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__67__Vfuncout))) {
        if ((0U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xe8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xe8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xe8U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__x))) 
                        & (0x00c3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y))) 
                       & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__68__Vfuncout))) {
        if ((1U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x50U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__Vfuncout 
                    = ((((0x021cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x)) 
                         & (0x0232U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__69__Vfuncout))) {
        if ((2U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x50U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc8U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xffU;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__Vfuncout 
                    = ((((0x023aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x)) 
                         & (0x0250U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__x))) 
                        & (0x00e1U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y))) 
                       & (0x00f3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__70__Vfuncout))) {
        if ((3U == (IData)(vlSelfRef.ui_mode_sel))) {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x50U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xffU;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x50U;
        } else {
            vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x60U;
            vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x60U;
        }
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__Vfuncout 
                    = ((((0x0014U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x)) 
                         & (0x026cU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__x))) 
                        & (0x0186U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y))) 
                       & (0x01ccU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__71__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x18U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x18U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout 
                    = ((((0x0032U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x)) 
                         & (0x004eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__72__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__Vfuncout 
                                = ((((0x0032U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x)) 
                                     & (0x004eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__74__Vfuncout)) 
                       & ((((0x0034U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x)) 
                            | (0x004cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__73__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__h 
                    = top_tinyfarm_sim__DOT__invw_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invw_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__Vfuncout 
                    = ((((0x0034U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x)) 
                         & (0x004cU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__75__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xf2U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xd0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x40U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__Vfuncout 
                    = ((((0x005fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x)) 
                         & (0x007bU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__79__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__Vfuncout 
                                = ((((0x005fU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x)) 
                                     & (0x007bU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__81__Vfuncout)) 
                       & ((((0x0061U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x)) 
                            | (0x0079U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__80__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__h 
                    = top_tinyfarm_sim__DOT__invc_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invc_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__Vfuncout 
                    = ((((0x0061U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x)) 
                         & (0x0079U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__82__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xf0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x30U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__Vfuncout 
                    = ((((0x008cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x)) 
                         & (0x00a8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__86__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__Vfuncout 
                                = ((((0x008cU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x)) 
                                     & (0x00a8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__88__Vfuncout)) 
                       & ((((0x008eU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x)) 
                            | (0x00a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__87__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__h 
                    = top_tinyfarm_sim__DOT__invca_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invca_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__Vfuncout 
                    = ((((0x008eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x)) 
                         & (0x00a6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__89__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xffU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x80U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x22U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__Vfuncout 
                    = ((((0x00b9U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x)) 
                         & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__x))) 
                        & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y))) 
                       & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__93__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__Vfuncout 
                                = ((((0x00b9U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x)) 
                                     & (0x00d5U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__x))) 
                                    & (0x0172U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y))) 
                                   & (0x01c2U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__95__Vfuncout)) 
                       & ((((0x00bbU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x)) 
                            | (0x00d3U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__x))) 
                           | (0x0174U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y))) 
                          | (0x01c0U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__94__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__h 
                    = top_tinyfarm_sim__DOT__invt_h;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0 
                    = (0x000003ffU & ((IData)(0x01c0U) 
                                      - (IData)(top_tinyfarm_sim__DOT__invt_h)));
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__Vfuncout 
                    = ((((0x00bbU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x)) 
                         & (0x00d3U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__x))) 
                        & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y) 
                           >= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0))) 
                       & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y) 
                          < (0x000003ffU & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__y0) 
                                            + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__h)))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__96__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xe5U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x3aU;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x28U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__Vfuncout 
                    = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x)) 
                         & (0x0190U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__x))) 
                        & (0x01a4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y))) 
                       & (0x01b8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__100__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0x20U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x20U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__Vfuncout 
                    = (([&]() {
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x 
                                = vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x;
                            vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__Vfuncout 
                                = ((((0x0118U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x)) 
                                     & (0x0190U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__x))) 
                                    & (0x01a4U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y))) 
                                   & (0x01b8U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__y)));
                        }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__102__Vfuncout)) 
                       & ((((0x011aU > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x)) 
                            | (0x018eU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__x))) 
                           | (0x01a6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y))) 
                          | (0x01b6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__y))));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__on_border__101__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xc0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0xc0U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__w 
                    = top_tinyfarm_sim__DOT__score_w;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sy;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x 
                    = vlSelfRef.top_tinyfarm_sim__DOT__sx;
                vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__Vfuncout 
                    = ((((0x011aU <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x)) 
                         & ((IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__x) 
                            < (0x000003ffU & ((IData)(0x011aU) 
                                              + (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__w))))) 
                        & (0x01a6U <= (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y))) 
                       & (0x01b6U > (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__y)));
            }(), (IData)(vlSelfRef.__Vfunc_top_tinyfarm_sim__DOT__in_rect__103__Vfuncout))) {
        vlSelfRef.top_tinyfarm_sim__DOT__paint_r = 0x40U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_g = 0xe0U;
        vlSelfRef.top_tinyfarm_sim__DOT__paint_b = 0x40U;
    }
}

void Vtop_tinyfarm_sim___024root___eval_nba(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_nba\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop_tinyfarm_sim___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop_tinyfarm_sim___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tinyfarm_sim___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop_tinyfarm_sim___024root___eval_phase__act(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_phase__act\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop_tinyfarm_sim___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tinyfarm_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop_tinyfarm_sim___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop_tinyfarm_sim___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop_tinyfarm_sim___024root___eval_phase__nba(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_phase__nba\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop_tinyfarm_sim___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop_tinyfarm_sim___024root___eval_nba(vlSelf);
        Vtop_tinyfarm_sim___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop_tinyfarm_sim___024root___eval(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tinyfarm_sim___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("top_tinyfarm_sim.sv", 4, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop_tinyfarm_sim___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop_tinyfarm_sim___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("top_tinyfarm_sim.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop_tinyfarm_sim___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("top_tinyfarm_sim.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop_tinyfarm_sim___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop_tinyfarm_sim___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop_tinyfarm_sim___024root___eval_debug_assertions(Vtop_tinyfarm_sim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tinyfarm_sim___024root___eval_debug_assertions\n"); );
    Vtop_tinyfarm_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_pix & 0xfeU)))) {
        Verilated::overWidthError("clk_pix");
    }
    if (VL_UNLIKELY(((vlSelfRef.sim_rst & 0xfeU)))) {
        Verilated::overWidthError("sim_rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.ui_mode_sel & 0xfcU)))) {
        Verilated::overWidthError("ui_mode_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.ui_crop_sel & 0xfcU)))) {
        Verilated::overWidthError("ui_crop_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.btn_left & 0xfeU)))) {
        Verilated::overWidthError("btn_left");
    }
    if (VL_UNLIKELY(((vlSelfRef.btn_right & 0xfeU)))) {
        Verilated::overWidthError("btn_right");
    }
    if (VL_UNLIKELY(((vlSelfRef.btn_action & 0xfeU)))) {
        Verilated::overWidthError("btn_action");
    }
    if (VL_UNLIKELY(((vlSelfRef.btn_fulfill & 0xfeU)))) {
        Verilated::overWidthError("btn_fulfill");
    }
}
#endif  // VL_DEBUG
