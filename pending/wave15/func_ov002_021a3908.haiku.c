#include "ffc/types.h"

extern uint32_t func_ov002_021a16ec(uint32_t x);

uint32_t func_ov002_021a3908(uint8_t *p, uint32_t v)
{
    uint32_t r = (uint32_t)p;
    if (v == func_ov002_021a16ec(*(uint32_t *)(p + 0xf8))) {
        r = *(uint32_t *)(p + 0xf8);
    }
    return r;
}
