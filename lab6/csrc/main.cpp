#include "verilated.h"
#include "Vlfsr.h"
#include "nvboard.h"
#include <stdlib.h>

VerilatedContext* contextp=NULL;
static TOP_NAME dut;
static Vlfsr* top;
void nvboard_bind_all_pins(Vlfsr* top);
int main(){
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    //sim_init();
    while(true){
        dut.eval();
        nvboard_update();
    }
    nvboard_quit();
    //sim_exit();
}