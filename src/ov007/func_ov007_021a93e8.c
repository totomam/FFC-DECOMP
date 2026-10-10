#include "ffc/types.h"

extern uint32_t data_ov007_021c49d8[2];

void func_ov007_021a93e8(uint8_t *p)
{
    volatile uint32_t *d = data_ov007_021c49d8;
    uint32_t x, y;
    *(uint32_t *)(p + 0x88) = 0;
    x = d[0];
    y = d[1];
    *(uint32_t *)(p + 0x80) = x;
    *(uint32_t *)(p + 0x84) = y;
}
