#include "ffc/types.h"

extern uint32_t data_020b01bc[2];

void func_0204a5f8(uint8_t *p)
{
    volatile uint32_t *d = data_020b01bc;
    uint32_t x, y;
    *(uint32_t *)(p + 0xa0) = 5;
    x = d[0];
    y = d[1];
    *(uint32_t *)(p + 0x80) = x;
    *(uint32_t *)(p + 0x84) = y;
}
