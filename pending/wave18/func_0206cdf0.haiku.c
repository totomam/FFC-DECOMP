#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern char data_020b1cc8[];

void func_0206cdf0(int unused, uint16_t p)
{
    uint32_t *o = (uint32_t *)func_0205681c(0x18);
    if (o != 0) {
        o[3] = o[3] & ~0xffu;
        o[0] = (uint32_t)data_020b1cc8;
        *(uint16_t *)((uint8_t *)o + 0x14) = p;
    }
}
