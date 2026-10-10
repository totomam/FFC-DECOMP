#include "ffc/types.h"

extern uint8_t data_ov003_0217a98c[];

void func_ov003_02165ed8(uint32_t *p, uint32_t x, uint32_t y, uint32_t z, uint32_t w, uint32_t v)
{
    uint32_t t;
    uint32_t m;
    uint32_t a;
    p[5] = x;
    a = w;
    t = p[3];
    m = 0xff;
    t &= ~m;
    p[8] = a;
    p[3] = t;
    p[0] = (uint32_t)data_ov003_0217a98c;
    p[6] = y;
    p[7] = z;
    p[9] = v;
}
