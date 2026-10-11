#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020abdd8;

void func_ov002_021aa8f0(uint8_t *p)
{
    uint32_t *o;
    uint32_t v;

    o = (uint32_t *)func_0205681c(0x28);
    if (o == 0) {
        return;
    }
    v = *(uint32_t *)(p + 0xc4);
    o[2] = 0;
    o[3] = 0x10108;
    o[0] = (uint32_t)&data_020abdd8;
    o[4] = 0;
    o[5] = v;
    o[6] = 4;
    o[7] = 0;
    o[8] = 0;
    o[9] = (uint32_t)-1;
}
