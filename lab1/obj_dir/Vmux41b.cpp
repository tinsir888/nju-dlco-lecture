// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux41b.h"
#include "Vmux41b__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux41b::Vmux41b(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmux41b__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmux41b::Vmux41b(const char* _vcname__)
    : Vmux41b(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmux41b::~Vmux41b() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmux41b___024root___eval_initial(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval_settle(Vmux41b___024root* vlSelf);
void Vmux41b___024root___eval(Vmux41b___024root* vlSelf);
QData Vmux41b___024root___change_request(Vmux41b___024root* vlSelf);
#ifdef VL_DEBUG
void Vmux41b___024root___eval_debug_assertions(Vmux41b___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux41b___024root___final(Vmux41b___024root* vlSelf);

static void _eval_initial_loop(Vmux41b__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmux41b___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmux41b___024root___eval_settle(&(vlSymsp->TOP));
        Vmux41b___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/mux.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux41b::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux41b::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux41b___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmux41b___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/mux.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmux41b___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmux41b::final() {
    Vmux41b___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmux41b::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmux41b::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vmux41b___024root__traceInitTop(Vmux41b___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux41b___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41b___024root*>(voidSelf);
    Vmux41b__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmux41b___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vmux41b___024root__traceRegister(Vmux41b___024root* vlSelf, VerilatedVcd* tracep);

void Vmux41b::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vmux41b___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
