#include "ffc/types.h"

extern uint8_t data_020b22a0[];

void func_02074028(void *p) {
    uint32_t *w = (uint32_t *)p;
    w[3] &= ~0xffu;
    w[0] = (uint32_t)data_020b22a0;
    w[5] = 0x1c20;
    w[6] = 0;
    w[7] = 0;
}
