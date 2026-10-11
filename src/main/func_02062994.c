#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020b15b8;

uint32_t *func_02062994(uint32_t a, uint32_t b, uint32_t c)
{
    volatile uint32_t tmp[4];
    uint32_t *o = (uint32_t *)func_0205681c(0x20);
    if (o != 0) {
        o[3] &= ~0xffu;
        o[0] = (uint32_t)&data_020b15b8;
        tmp[2] = b;
        tmp[3] = c;
        tmp[0] = b;
        tmp[1] = c;
        o[5] = a;
        o[6] = b;
        o[7] = c;
    }
    return o;
}
