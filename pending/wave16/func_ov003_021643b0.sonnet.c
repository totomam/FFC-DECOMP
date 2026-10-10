#include "ffc/types.h"

extern uint8_t data_ov003_0217a6fc[];

void func_ov003_021643b0(uint8_t *p, uint32_t a, uint16_t b, uint8_t c, uint8_t d)
{
    uint32_t v;
    v = *(uint32_t *)(p + 0xc) & ~0xffu;
    *(uint8_t **)p = data_ov003_0217a6fc;
    *(uint32_t *)(p + 0x14) = a;
    *(uint32_t *)(p + 0xc) = v;
    *(uint16_t *)(p + 0x18) = b;
    *(uint8_t *)(p + 0x1a) = c;
    *(uint8_t *)(p + 0x1b) = d;
}
