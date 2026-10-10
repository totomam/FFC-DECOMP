#include "ffc/types.h"

extern uint32_t func_0207abbc(uint32_t a, uint32_t b);

void func_0200619c(uint8_t *p, uint32_t a, uint32_t b)
{
    *(uint32_t *)(p + 0x10) = func_0207abbc(a, b);
    p[1] = 1;
}
