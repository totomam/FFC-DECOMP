#include "ffc/types.h"

void func_02036ea4(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xf801ffffu) | ((v << 22) >> 5);
}
