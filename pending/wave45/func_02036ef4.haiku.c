#include "ffc/types.h"

void func_02036ef4(uint32_t *p, uint32_t v)
{
    p[5] = (p[5] & 0xffffdfffu) | ((v & 1u) << 13);
}
