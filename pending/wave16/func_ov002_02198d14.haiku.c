#include "ffc/types.h"

extern uint32_t func_ov002_0219b860(uint32_t v);

uint32_t func_ov002_02198d14(uint8_t *p, uint32_t x)
{
    if (x == func_ov002_0219b860(*(uint32_t *)(p + 0xe8))) {
        return *(uint32_t *)(p + 0xe8);
    }
    return *(uint32_t *)(p + 0xec);
}
