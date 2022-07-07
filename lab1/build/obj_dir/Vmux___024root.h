// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux__Syms;

//----------

VL_MODULE(Vmux___024root) {
  public:

    // PORTS
    VL_IN8(a,3,0);
    VL_IN8(s,1,0);
    VL_OUT8(y,0,0);

    // INTERNAL VARIABLES
    Vmux__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux___024root);  ///< Copying not allowed
  public:
    Vmux___024root(const char* name);
    ~Vmux___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
