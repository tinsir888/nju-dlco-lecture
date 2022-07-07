// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux.h"
#include "Vmux__Syms.h"

//============================================================
// Constructors

Vmux::Vmux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux::Vmux(const char* _vcname__)
    : Vmux(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux::~Vmux() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux___024root___eval_initial(Vmux___024root* vlSelf);
void Vmux___024root___eval_settle(Vmux___024root* vlSelf);
void Vmux___024root___eval(Vmux___024root* vlSelf);
QData Vmux___024root___change_request(Vmux___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux___024root___final(Vmux___024root* vlSelf);

static void _eval_initial_loop(Vmux__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux___024root___eval_settle(&(vlSymsp->TOP));
        Vmux___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/ysyx/dig_ele/lab1/vsrc/mux.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/ysyx/dig_ele/lab1/vsrc/mux.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmux::final() {
    Vmux___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmux::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux::name() const {
    return vlSymsp->name();
}
