// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tinyfarm_sim_fixed.h for the primary calling header

#include "Vtop_tinyfarm_sim_fixed__pch.h"

void Vtop_tinyfarm_sim_fixed___024root___ctor_var_reset(Vtop_tinyfarm_sim_fixed___024root* vlSelf);

Vtop_tinyfarm_sim_fixed___024root::Vtop_tinyfarm_sim_fixed___024root(Vtop_tinyfarm_sim_fixed__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtop_tinyfarm_sim_fixed___024root___ctor_var_reset(this);
}

void Vtop_tinyfarm_sim_fixed___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_tinyfarm_sim_fixed___024root::~Vtop_tinyfarm_sim_fixed___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
