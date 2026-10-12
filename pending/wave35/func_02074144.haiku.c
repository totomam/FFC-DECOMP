#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern void func_02092878(void *dst, const uint8_t *src);
extern uint8_t data_020b23f0[];

uint32_t *func_02074144(uint32_t a0, const uint8_t *text, uint32_t a2, uint32_t a3, uint32_t a4)
{
    uint32_t *p;
    uint32_t one;
    uint32_t vt;

    p = (uint32_t *)func_0205681c(0x3c);
    if (p != 0) {
        one = 1;
        p[3] &= ~0xffu;
        p[5] = a0;
        p[6] = 0;
        vt = (uint32_t)data_020b23f0;
        p[7] = 0;
        p[0] = vt;
        p[9] = 2;
        p[10] = 0;
        p[11] = a2;
        p[12] = a3;
        p[13] = a4;
        p[14] = 0;
        p[10] = (uint32_t)func_02056830(one * (func_02092864(text) + 1));
        func_02092878((void *)p[10], text);
    }
    return p;
}
