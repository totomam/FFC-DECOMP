#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_02056830(uint32_t size);
extern void func_02092878(uint32_t a, const uint8_t *text);
extern uint32_t data_020b23d8[];

uint32_t *func_02074468(uint32_t a, const uint8_t *text, uint32_t b, uint8_t c)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x30);
    if (p) {
        p[3] = p[3] & ~0xffu;
        p[5] = a;
        p[6] = 0;
        p[7] = 0;
        p[0] = (uint32_t)data_020b23d8;
        p[9] = 0;
        p[10] = b;
        *((uint8_t *)p + 0x2c) = c;
        p[9] = func_02056830((func_02092864(text) + 1) * sizeof(uint8_t));
        func_02092878(p[9], text);
    }
    return p;
}
