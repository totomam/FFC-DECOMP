#include "ffc/types.h"

extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_02078070(uint32_t *p, uint32_t x, uint32_t n)
{
    uint32_t cur = p[1];
    uint32_t v = (cur - x) & ~(n - 1);
    if (v < p[0]) {
        return 0;
    }
    uint32_t d = cur - v;
    uint32_t w = *(uint32_t *)((char *)p - 4);
    uint16_t f = (uint16_t)(w & 0xFF);
    if (f & 1) {
        func_020849e0(0, v, d);
    }
    p[1] = v;
    return v;
}
