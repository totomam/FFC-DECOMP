#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_020b0b28;

void func_0205fac0(uint32_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t n = p[5];
    uint32_t y, x;
    uint32_t *o;
    uint32_t r;

    x = c * n;
    y = p[2] - b * n;
    r = *((x < y) ? &x : &y);

    if (p[5] == 0x20) {
        o = func_0205681c(0x20);
        if (o != 0) {
            uint32_t t = p[1] + b * p[5];
            o[3] &= ~0xffu;
            o[0] = (uint32_t)&data_020b0b28;
            o[5] = a * 0x11111111u;
            o[6] = t;
            o[7] = r;
        }
    } else {
        o = func_0205681c(0x20);
        if (o != 0) {
            uint32_t t = p[1] + b * p[5];
            o[3] &= ~0xffu;
            o[0] = (uint32_t)&data_020b0b28;
            o[5] = a * 0x01010101u;
            o[6] = t;
            o[7] = r;
        }
    }
}
