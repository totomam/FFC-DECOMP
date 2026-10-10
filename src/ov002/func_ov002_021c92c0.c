#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_020abfd8[];

void *func_ov002_021c92c0(uint32_t a, uint32_t b) {
    uint32_t *p = func_0205681c(0x18);
    if (p != 0) {
        p[2] = 0;
        p[3] = 0x10148;
        p[0] = (uint32_t)data_020abfd8;
        p[4] = a;
        p[5] = b;
    }
    return p;
}
