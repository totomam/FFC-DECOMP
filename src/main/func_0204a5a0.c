#include "ffc/types.h"

extern uint32_t data_020b01ac[2];

void func_0204a5a0(uint8_t *p)
{
    volatile uint32_t *d = data_020b01ac;
    uint32_t x, y;
    *(uint32_t *)(p + 0xa0) = 4;
    x = d[0];
    y = d[1];
    *(uint32_t *)(p + 0x80) = x;
    *(uint32_t *)(p + 0x84) = y;
}
