#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_020b15a0[];

void func_02062a08(uint32_t a, uint32_t b)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x1c);
    if (p) {
        p[3] = p[3] & ~0xffu;
        p[0] = (uint32_t)data_020b15a0;
        p[5] = a;
        p[6] = b;
    }
}
