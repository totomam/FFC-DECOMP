#include "ffc/types.h"

static inline int rd(uint8_t **pp)
{
    uint8_t *q = *pp;
    int v = q[0] * 10 + q[1] - 0x210;
    *pp = q + 2;
    return v;
}

uint32_t func_ov000_0214992c(uint8_t *p, int mode)
{
    int x, c, e, a;
    a = rd(&p);
    if (mode == 0x17) {
        if ((uint32_t)a < 0x32) x = 0x7d0 + a;
        else x = 0x76c + a;
    } else {
        x = a * 100;
        x += p[0] * 10 + p[1] - 0x210;
        p += 2;
    }
    c = p[0] * 10 + p[1] - 0x210;
    x = (x << 16) + (c << 8);
    e = p[3] + p[2] * 10 - 0x210;
    return x + e;
}
