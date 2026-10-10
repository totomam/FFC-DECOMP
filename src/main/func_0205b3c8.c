#include "ffc/types.h"

void func_0205b3c8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t hi = e << 24;
    uint32_t mid = d << 16;
    *(volatile uint32_t *)0x04000580 = hi | ((c << 8) | b | mid);
}
