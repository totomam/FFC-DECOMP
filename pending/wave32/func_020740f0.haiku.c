#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *p, const uint8_t *text);
extern uint32_t data_020b23f0[];

uint32_t *func_020740f0(uint32_t a, const uint8_t *text, uint32_t c)
{
    uint32_t *o;
    uint32_t k;

    o = (uint32_t *)func_0205681c(0x3c);
    if (o != 0) {
        o[3] &= ~0xffu;
        o[5] = a;
        o[6] = 0;
        o[7] = 0;
        o[0] = (uint32_t)data_020b23f0;
        k = 1;
        o[9] = k;
        o[10] = 0;
        o[11] = c;
        o[12] = 0;
        o[13] = 0;
        o[14] = 0;
        o[10] = (uint32_t)func_02056830((func_02092864(text) + 1) * k);
        func_02092878((void *)o[10], text);
    }
    return o;
}
