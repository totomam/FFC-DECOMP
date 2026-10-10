#include "ffc/types.h"

uint32_t func_020901a4(uint32_t x)
{
    uint32_t v = x - ((x >> 1) & 0x55555555);
    v = (v & 0x33333333) + ((v >> 2) & 0x33333333);
    v = (v + (v >> 4)) & 0x0f0f0f0f;
    v = v + (v >> 8);
    v = v + (v >> 16);
    return (uint8_t)v;
}
