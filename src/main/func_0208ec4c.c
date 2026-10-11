#include "ffc/types.h"

void func_0208ec4c(volatile uint32_t *p)
{
    volatile uint16_t *reg = (volatile uint16_t *)0x4000204;
    uint32_t a = p[0];
    uint32_t v = *reg;
    v = (v & ~0xCu) | (a << 2);
    *reg = (uint16_t)v;
    uint32_t b = p[1];
    v = *reg;
    v = (v & ~0x10u) | (b << 4);
    *reg = (uint16_t)v;
}
