#include "ffc/types.h"

extern void func_02084ca4(uint32_t x, uint32_t y);

uint32_t func_0207c87c(uint8_t *a, uint32_t b, uint32_t c, uint32_t d)
{
    func_02084ca4(*(uint32_t *)(a + 0xac) + d, b);
    return c;
}
