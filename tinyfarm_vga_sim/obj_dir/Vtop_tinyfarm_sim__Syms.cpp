// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_tinyfarm_sim__pch.h"
#include "Vtop_tinyfarm_sim.h"
#include "Vtop_tinyfarm_sim___024root.h"

// FUNCTIONS
Vtop_tinyfarm_sim__Syms::~Vtop_tinyfarm_sim__Syms()
{
}

Vtop_tinyfarm_sim__Syms::Vtop_tinyfarm_sim__Syms(VerilatedContext* contextp, const char* namep, Vtop_tinyfarm_sim* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(528);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
