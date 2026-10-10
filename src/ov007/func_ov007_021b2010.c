#include "ffc/types.h"

extern uint32_t data_ov007_021c5f9c[2];

void func_ov007_021b2010(uint8_t *p)
{
    volatile uint32_t *d = data_ov007_021c5f9c;
    uint32_t x, y;
    *(uint32_t *)(p + 0xc0) = 2;
    x = d[0];
    y = d[1];
    *(uint32_t *)(p + 0xb0) = x;
    *(uint32_t *)(p + 0xb4) = y;
}
