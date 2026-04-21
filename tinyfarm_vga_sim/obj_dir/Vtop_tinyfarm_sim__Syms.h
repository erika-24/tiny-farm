// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TINYFARM_SIM__SYMS_H_
#define VERILATED_VTOP_TINYFARM_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_tinyfarm_sim.h"

// INCLUDE MODULE CLASSES
#include "Vtop_tinyfarm_sim___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop_tinyfarm_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_tinyfarm_sim* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_tinyfarm_sim___024root    TOP;

    // CONSTRUCTORS
    Vtop_tinyfarm_sim__Syms(VerilatedContext* contextp, const char* namep, Vtop_tinyfarm_sim* modelp);
    ~Vtop_tinyfarm_sim__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
