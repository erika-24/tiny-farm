// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_tinyfarm.h for the primary calling header

#include "Vtb_tinyfarm__pch.h"

void Vtb_tinyfarm___024root___ctor_var_reset(Vtb_tinyfarm___024root* vlSelf);

Vtb_tinyfarm___024root::Vtb_tinyfarm___024root(Vtb_tinyfarm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_tinyfarm___024root___ctor_var_reset(this);
}

void Vtb_tinyfarm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_tinyfarm___024root::~Vtb_tinyfarm___024root() {
}
