#include "ffc/types.h"

extern uint16_t data_020b2944;
extern uint16_t data_0214136c;

void func_020819ac(void) {
    uint32_t v;
    uint32_t *reg;

    data_020b2944 = 1;
    v = data_0214136c;
    reg = (uint32_t *)0x04000000;
    if (v != 0) {
        *reg = (*reg & 0xfffcffffu) | (v << 16);
    } else {
        *reg = *reg | 0x00010000u;
    }
}
