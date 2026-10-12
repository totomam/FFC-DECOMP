#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov002_021d5314[];

void *func_ov002_021ab2e8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x34);
    if (p != 0) {
        uint32_t f = *(uint32_t *)(a + 0xc4);
        uint32_t g = *(uint32_t *)(a + 0xb8);
        p[3] &= ~0xffu;
        p[0] = (uint32_t)data_ov002_021d5314;
        p[5] = a;
        p[6] = g;
        p[7] = b;
        p[8] = f;
        p[9] = 0;
        p[10] = c;
        p[11] = d;
        *((uint8_t *)p + 0x30) = e;
        *((uint8_t *)p + 0x31) = 1;
    }
    return p;
}
