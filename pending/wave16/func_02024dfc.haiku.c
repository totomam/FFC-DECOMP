#include "ffc/types.h"

extern uint8_t *func_02024e18(uint8_t *p, uint32_t *q);

void func_02024dfc(uint8_t *base, uint32_t x, uint8_t v)
{
    uint8_t *p = func_02024e18(base + 0x194, &x);
    p[1] = v;
}
