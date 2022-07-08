#include "verilated.h"
#include "Valu.h"
#include "nvboard.h"
#include <stdlib.h>

VerilatedContext* contextp=NULL;
static TOP_NAME dut;
static Valu* top;
void nvboard_bind_all_pins(Valu* top);
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