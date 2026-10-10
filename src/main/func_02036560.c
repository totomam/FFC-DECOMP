#include "ffc/types.h"

void func_02036560(uint32_t *p, uint32_t v)
{
    p[22] = (p[22] & 0xfff7ffffu) | ((v << 31) >> 12);
}
