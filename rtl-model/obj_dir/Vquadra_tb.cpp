// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vquadra_tb__pch.h"

//============================================================
// Constructors

Vquadra_tb::Vquadra_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vquadra_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vquadra_tb::Vquadra_tb(const char* _vcname__)
    : Vquadra_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vquadra_tb::~Vquadra_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vquadra_tb___024root___eval_debug_assertions(Vquadra_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vquadra_tb___024root___eval_static(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval_initial(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval_settle(Vquadra_tb___024root* vlSelf);
void Vquadra_tb___024root___eval(Vquadra_tb___024root* vlSelf);

void Vquadra_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vquadra_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vquadra_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vquadra_tb___024root___eval_static(&(vlSymsp->TOP));
        Vquadra_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vquadra_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vquadra_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vquadra_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vquadra_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vquadra_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vquadra_tb___024root___eval_final(Vquadra_tb___024root* vlSelf);

VL_ATTR_COLD void Vquadra_tb::final() {
    contextp()->executingFinal(true);
    Vquadra_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vquadra_tb::hierName() const { return vlSymsp->name(); }
const char* Vquadra_tb::modelName() const { return "Vquadra_tb"; }
unsigned Vquadra_tb::threads() const { return 1; }
void Vquadra_tb::prepareClone() const { contextp()->prepareClone(); }
void Vquadra_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
