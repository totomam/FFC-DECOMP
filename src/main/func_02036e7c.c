#include "ffc/types.h"

void func_02036e7c(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xffff7fffu) | ((v << 31) >> 16);
}
