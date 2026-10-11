#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov002_021d5300;

void func_ov002_021aa928(uint32_t a, uint32_t b, uint8_t c)
{
    uint32_t *obj = (uint32_t *)func_0205681c(0x20);
    if (obj != 0) {
        obj[3] &= ~0xffu;
        obj[0] = (uint32_t)&data_ov002_021d5300;
        obj[5] = a;
        obj[6] = b;
        *(uint8_t *)&obj[7] = c;
    }
}
