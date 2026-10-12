#include "ffc/types.h"

extern uint32_t func_020817c8(int32_t first, int32_t second);
extern uint32_t func_02081210(uint32_t a, uint32_t b);

void func_02024fcc(uint8_t *p, uint32_t r1)
{
    uint32_t r;

    r = func_020817c8(*(uint32_t *)(p + 0x80), r1);
    *(uint32_t *)(p + 0x3c) += func_02081210(r, *(uint32_t *)(p + 0x54));

    r = func_020817c8(*(uint32_t *)(p + 0x84), r1);
    *(uint32_t *)(p + 0x40) += func_02081210(r, *(uint32_t *)(p + 0x58));

    r = func_020817c8(*(uint32_t *)(p + 0x88), r1);
    *(uint32_t *)(p + 0x44) += func_02081210(r, *(uint32_t *)(p + 0x5c));

    *(uint8_t *)(p + 0x34) = 0;
}
