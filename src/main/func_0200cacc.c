#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020ab070[];

void func_0200cacc(uint32_t p) {
    uint32_t *r = (uint32_t *)func_0205681c(0x18);
    if (r != 0) {
        r[3] &= ~0xffu;
        r[0] = (uint32_t)data_020ab070;
        r[5] = p + 0xf8;
    }
}
