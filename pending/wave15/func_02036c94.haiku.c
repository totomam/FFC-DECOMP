#include "ffc/types.h"

void func_02036c94(uint32_t *p, uint32_t v)
{
    p[1] = (p[1] & 0xffff0000u) | (uint16_t)v;
}
