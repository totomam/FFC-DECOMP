#include "ffc/types.h"

extern uint32_t func_0204f0f8(uint32_t a, uint32_t b);

uint32_t func_02059c0c(uint8_t *p)
{
    uint32_t a = *(uint32_t *)(p + 0x14);
    uint32_t s = *(uint32_t *)(p + 0x18);
    return func_0204f0f8(a, 1u << s);
}
