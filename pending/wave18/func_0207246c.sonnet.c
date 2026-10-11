#include "ffc/types.h"

extern uint32_t data_020b2368[];

void func_0207246c(uint32_t *s, uint32_t a, uint32_t b, uint32_t c,
                   uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t t = s[3] & ~0xffu;
    s[5] = a;
    s[8] = d;
    s[9] = e;
    s[10] = f;
    s[0] = (uint32_t)data_020b2368;
    s[3] = t;
    s[6] = b;
    s[7] = c;
    s[11] = 0;
}
