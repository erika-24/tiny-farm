// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_selftest__pch.h"
#include "Vtb_selftest.h"
#include "Vtb_selftest___024root.h"

// FUNCTIONS
Vtb_selftest__Syms::~Vtb_selftest__Syms()
{
}

Vtb_selftest__Syms::Vtb_selftest__Syms(VerilatedContext* contextp, const char* namep, Vtb_selftest* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1021);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
