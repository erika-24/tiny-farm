// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_tinyfarm_sim__pch.h"

//============================================================
// Constructors

Vtop_tinyfarm_sim::Vtop_tinyfarm_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_tinyfarm_sim__Syms(contextp(), _vcname__, this)}
    , clk_pix{vlSymsp->TOP.clk_pix}
    , sim_rst{vlSymsp->TOP.sim_rst}
    , ui_mode_sel{vlSymsp->TOP.ui_mode_sel}
    , ui_crop_sel{vlSymsp->TOP.ui_crop_sel}
    , btn_left{vlSymsp->TOP.btn_left}
    , btn_right{vlSymsp->TOP.btn_right}
    , btn_action{vlSymsp->TOP.btn_action}
    , btn_fulfill{vlSymsp->TOP.btn_fulfill}
    , sdl_de{vlSymsp->TOP.sdl_de}
    , sdl_r{vlSymsp->TOP.sdl_r}
    , sdl_g{vlSymsp->TOP.sdl_g}
    , sdl_b{vlSymsp->TOP.sdl_b}
    , order_crop_o{vlSymsp->TOP.order_crop_o}
    , order_qty_o{vlSymsp->TOP.order_qty_o}
    , order_timer_o{vlSymsp->TOP.order_timer_o}
    , sdl_sx{vlSymsp->TOP.sdl_sx}
    , sdl_sy{vlSymsp->TOP.sdl_sy}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_tinyfarm_sim::Vtop_tinyfarm_sim(const char* _vcname__)
    : Vtop_tinyfarm_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_tinyfarm_sim::~Vtop_tinyfarm_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_tinyfarm_sim___024root___eval_debug_assertions(Vtop_tinyfarm_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tinyfarm_sim___024root___eval_static(Vtop_tinyfarm_sim___024root* vlSelf);
void Vtop_tinyfarm_sim___024root___eval_initial(Vtop_tinyfarm_sim___024root* vlSelf);
void Vtop_tinyfarm_sim___024root___eval_settle(Vtop_tinyfarm_sim___024root* vlSelf);
void Vtop_tinyfarm_sim___024root___eval(Vtop_tinyfarm_sim___024root* vlSelf);

void Vtop_tinyfarm_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_tinyfarm_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_tinyfarm_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_tinyfarm_sim___024root___eval_static(&(vlSymsp->TOP));
        Vtop_tinyfarm_sim___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_tinyfarm_sim___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_tinyfarm_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_tinyfarm_sim::eventsPending() { return false; }

uint64_t Vtop_tinyfarm_sim::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtop_tinyfarm_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_tinyfarm_sim___024root___eval_final(Vtop_tinyfarm_sim___024root* vlSelf);

VL_ATTR_COLD void Vtop_tinyfarm_sim::final() {
    Vtop_tinyfarm_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_tinyfarm_sim::hierName() const { return vlSymsp->name(); }
const char* Vtop_tinyfarm_sim::modelName() const { return "Vtop_tinyfarm_sim"; }
unsigned Vtop_tinyfarm_sim::threads() const { return 1; }
void Vtop_tinyfarm_sim::prepareClone() const { contextp()->prepareClone(); }
void Vtop_tinyfarm_sim::atClone() const {
    contextp()->threadPoolpOnClone();
}
