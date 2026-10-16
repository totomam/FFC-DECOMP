#include "ffc/types.h"
extern uint8_t data_020aadd0[];
extern uint8_t data_ov003_0217a368[];
void func_ov003_0215fea4(uint8_t *p, uint32_t a, uint8_t b)
{
    uint8_t *q;
    uint8_t *t;
    *(uint32_t*)p = (uint32_t)data_020aadd0;
    *(uint32_t*)(p + 0xc) &= ~0xff;
    q = p + 0x14;
    *(uint32_t*)(p + 0x14) = 0;
    *(uint32_t*)(q + 4) = 0;
    *(uint32_t*)(q + 8) = 0;
    q[0xc] = 0;
    t = q;
    if (t != 0) t = t - 0x14;
    *(uint32_t*)(q + 8) = (uint32_t)t;
    *(uint32_t*)(p + 0x28) = a;
    *(uint32_t*)p = (uint32_t)data_ov003_0217a368;
    p[0x21] = b;
    q[0xc] = 1;
    *(uint32_t*)(p + 0x24) = 0;
    p[0x2c] = 1;
}
