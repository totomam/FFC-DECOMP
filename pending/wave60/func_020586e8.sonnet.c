#include "ffc/types.h"
extern void *func_0205681c(int n);
extern uint32_t data_020b0d50;
void *func_020586e8(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint8_t d)
{
    uint8_t *o = (uint8_t *)func_0205681c(0x28);
    if (o != 0) {
        uint32_t w = *(uint32_t *)(o + 0xc) & ~0xff;
        uint32_t t = *(uint32_t *)(p + 0x40);
        *(uint32_t *)(o + 0xc) = w;
        *(uint32_t **)o = &data_020b0d50;
        *(uint32_t *)(o + 0x14) = t;
        *(uint32_t *)(o + 0x18) = a;
        *(uint32_t *)(o + 0x1c) = b;
        *(uint32_t *)(o + 0x20) = c;
        o[0x24] = d;
    }
    return o;
}
