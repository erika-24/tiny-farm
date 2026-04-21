// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_selftest__pch.h"

//============================================================
// Constructors

Vtb_selftest::Vtb_selftest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_selftest__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_selftest::Vtb_selftest(const char* _vcname__)
    : Vtb_selftest(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_selftest::~Vtb_selftest() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_selftest___024root___eval_debug_assertions(Vtb_selftest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_selftest___024root___eval_static(Vtb_selftest___024root* vlSelf);
void Vtb_selftest___024root___eval_initial(Vtb_selftest___024root* vlSelf);
void Vtb_selftest___024root___eval_settle(Vtb_selftest___024root* vlSelf);
void Vtb_selftest___024root___eval(Vtb_selftest___024root* vlSelf);

void Vtb_selftest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_selftest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_selftest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_selftest___024root___eval_static(&(vlSymsp->TOP));
        Vtb_selftest___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_selftest___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_selftest___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_selftest::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_selftest::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_selftest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_selftest___024root___eval_final(Vtb_selftest___024root* vlSelf);

VL_ATTR_COLD void Vtb_selftest::final() {
    Vtb_selftest___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_selftest::hierName() const { return vlSymsp->name(); }
const char* Vtb_selftest::modelName() const { return "Vtb_selftest"; }
unsigned Vtb_selftest::threads() const { return 1; }
void Vtb_selftest::prepareClone() const { contextp()->prepareClone(); }
void Vtb_selftest::atClone() const {
    contextp()->threadPoolpOnClone();
}
