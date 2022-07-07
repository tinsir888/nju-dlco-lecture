#include <nvboard.h>
#include "Vmux.h"

void nvboard_bind_all_pins(Vmux* top) {
	nvboard_bind_pin( &top->a, BIND_RATE_SCR, BIND_DIR_IN , 4, SW0, SW1, SW2, SW3);
	nvboard_bind_pin( &top->s, BIND_RATE_SCR, BIND_DIR_IN , 2, SW4, SW5);
	nvboard_bind_pin( &top->y, BIND_RATE_SCR, BIND_DIR_OUT, 1, LD0);
}
