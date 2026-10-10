#include "ffc/types.h"

void func_020818f8(uint32_t v)
{
    volatile uint16_t *p = (volatile uint16_t *)0x04000004;
    uint32_t bit = v & 0x100;
    uint32_t lo = *p;
    lo &= 0x3f;
    *p = (uint16_t)(((v << 24) >> 16) | lo | (bit >> 1));
}
