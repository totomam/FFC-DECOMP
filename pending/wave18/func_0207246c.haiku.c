#include "ffc/types.h"

extern uint32_t data_020b2368[];

void func_0207246c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c,
                   uint32_t d, uint32_t e, uint32_t f)
{
    uint32_t *s = (uint32_t *)p;
    uint32_t t;
    s[0x14 / 4] = a;
    s[0x20 / 4] = d;
    s[0x24 / 4] = e;
    t = s[0xc / 4] & ~0xffu;
    s[0x28 / 4] = f;
    s[0xc / 4] = t;
    s[0] = (uint32_t)data_020b2368;
    s[0x18 / 4] = b;
    s[0x1c / 4] = c;
    s[0x2c / 4] = 0;
}
