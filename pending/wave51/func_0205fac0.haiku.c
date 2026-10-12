#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_020b0b28;

void func_0205fac0(uint32_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t n = p[5];
    uint32_t v[2];
    uint32_t *q;
    uint32_t *o;
    uint32_t r;

    v[0] = n * c;
    v[1] = p[2] - n * b;
    q = (v[0] < v[1]) ? &v[0] : &v[1];
    r = *q;

    if (p[5] == 0x20) {
        o = func_0205681c(0x20);
        if (o == 0) {
            return;
        }
        o[3] &= ~0xffu;
        o[0] = (uint32_t)&data_020b0b28;
        o[5] = a * 0x11111111u;
        o[6] = p[1] + p[5] * b;
        o[7] = r;
    } else {
        o = func_0205681c(0x20);
        if (o == 0) {
            return;
        }
        o[3] &= ~0xffu;
        o[0] = (uint32_t)&data_020b0b28;
        o[5] = a * 0x01010101u;
        o[6] = p[1] + p[5] * b;
        o[7] = r;
    }
}
