// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX41B__SYMS_H_
#define VERILATED_VMUX41B__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmux41b.h"

// INCLUDE MODULE CLASSES
#include "Vmux41b___024root.h"

// SYMS CLASS (contains all model state)
class Vmux41b__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux41b* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux41b___024root              TOP;

    // CONSTRUCTORS
    Vmux41b__Syms(VerilatedContext* contextp, const char* namep, Vmux41b* modelp);
    ~Vmux41b__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
