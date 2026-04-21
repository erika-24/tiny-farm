// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_tinyfarm__Syms.h"


void Vtb_tinyfarm___024root__trace_chg_0_sub_0(Vtb_tinyfarm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_tinyfarm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root__trace_chg_0\n"); );
    // Body
    Vtb_tinyfarm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tinyfarm___024root*>(voidSelf);
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_tinyfarm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_tinyfarm___024root__trace_chg_0_sub_0(Vtb_tinyfarm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root__trace_chg_0_sub_0\n"); );
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_tinyfarm__DOT__rst_n));
        bufp->chgCData(oldp+1,(vlSelfRef.tb_tinyfarm__DOT__mode_sel),2);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_tinyfarm__DOT__field_sel),2);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_tinyfarm__DOT__crop_sel),2);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_tinyfarm__DOT__action_btn));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_tinyfarm__DOT__fulfill_btn));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+6,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__i),32);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__new_lfsr),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_state_update__DOT__fcrop),2);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+9,((1U & (~ ((0x0290U <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)) 
                                       & (0x02f0U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)))))));
        bufp->chgBit(oldp+10,((1U & (~ ((0x01eaU <= (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount)) 
                                        & (0x01ecU 
                                           > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount)))))));
        bufp->chgCData(oldp+11,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__score),8);
        bufp->chgSData(oldp+12,((((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                   [3U] << 9U) | (vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                                  [2U] 
                                                  << 6U)) 
                                 | ((vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                     [1U] << 3U) | 
                                    vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory
                                    [0U]))),12);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                [0U]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                [1U]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                [2U]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__fields
                                [3U]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[0]),3);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[1]),3);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[2]),3);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__inventory[3]),3);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__lfsr),8);
        bufp->chgBit(oldp+22,((IData)((2U == (6U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff))))));
        bufp->chgBit(oldp+23,((IData)((2U == (6U & (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff))))));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__game_tick));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__tick_div_ctr),32);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__state),2);
        bufp->chgSData(oldp+27,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount),10);
        bufp->chgSData(oldp+28,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount),10);
        bufp->chgBit(oldp+29,(((0x0280U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__hcount)) 
                               & (0x01e0U > (IData)(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vcount)))));
        bufp->chgCData(oldp+30,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_action_pulse__DOT__sync_ff),3);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__u_fulfill_pulse__DOT__sync_ff),3);
    }
    bufp->chgBit(oldp+32,(vlSelfRef.tb_tinyfarm__DOT__clk));
    bufp->chgCData(oldp+33,(vlSelfRef.tb_tinyfarm__DOT__vga_r),2);
    bufp->chgCData(oldp+34,(vlSelfRef.tb_tinyfarm__DOT__vga_g),2);
    bufp->chgCData(oldp+35,(vlSelfRef.tb_tinyfarm__DOT__vga_b),2);
    bufp->chgCData(oldp+36,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_crop__VforceRd),2);
    bufp->chgCData(oldp+37,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_qty__VforceRd),2);
    bufp->chgCData(oldp+38,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__order_timer__VforceRd),4);
    bufp->chgCData(oldp+39,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__next_state),2);
    bufp->chgCData(oldp+40,(vlSelfRef.tb_tinyfarm__DOT__dut__DOT__vga_render__DOT__rgb),6);
}

void Vtb_tinyfarm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_tinyfarm___024root__trace_cleanup\n"); );
    // Body
    Vtb_tinyfarm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_tinyfarm___024root*>(voidSelf);
    Vtb_tinyfarm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
