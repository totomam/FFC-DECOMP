#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020ab5f8[];

void func_ov002_021c9538(void) {
    uint32_t *p = (uint32_t *)func_0205681c(0x10);
    if (p != 0) {
        p[2] = 0;
        p[3] = 0x100e4;
        p[0] = (uint32_t)data_020ab5f8;
    }
}
