#include "ffc/types.h"

void func_02036e90(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xfffeffffu) | ((v << 31) >> 15);
}
