#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_ov002_021d52ec[];

uint32_t *func_ov002_021ab340(uint8_t *p, uint32_t a1, uint8_t a2)
{
    uint32_t *o = func_0205681c(0x24);
    if (o != 0) {
        uint32_t v1 = *(uint32_t *)(p + 0xc4);
        uint32_t v5 = *(uint32_t *)(p + 0xb8);
        o[3] &= ~0xffu;
        o[0] = (uint32_t)data_ov002_021d52ec;
        o[5] = v5;
        o[6] = a1;
        o[7] = v1;
        {
            uint8_t *q = (uint8_t *)o + 0x20;
            *q = a2;
        }
    }
    return o;
}
