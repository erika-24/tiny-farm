// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_selftest.h for the primary calling header

#include "Vtb_selftest__pch.h"

void Vtb_selftest___024root___ctor_var_reset(Vtb_selftest___024root* vlSelf);

Vtb_selftest___024root::Vtb_selftest___024root(Vtb_selftest__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_selftest___024root___ctor_var_reset(this);
}

void Vtb_selftest___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_selftest___024root::~Vtb_selftest___024root() {
}
