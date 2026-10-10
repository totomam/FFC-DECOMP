#include "ffc/types.h"

extern uint32_t func_02083728(uint32_t x);

uint32_t func_0208e8e8(uint8_t *p, uint32_t x, uint32_t y, uint32_t n)
{
    uint32_t mask = (1u << n) - 1;
    uint32_t v = func_02083728(x & mask);
    return y + *(uint16_t *)(p + 0x810) * v;
}
