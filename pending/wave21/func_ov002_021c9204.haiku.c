#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020abe98;

void func_ov002_021c9204(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t *p = (uint32_t *)func_0205681c(0x1c);
    if (p != 0) {
        p[2] = 0;
        p[3] = 0x10144;
        p[0] = (uint32_t)&data_020abe98;
        p[4] = a;
        p[5] = b;
        p[6] = c;
    }
}
