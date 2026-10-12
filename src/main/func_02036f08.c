#include "ffc/types.h"

void func_02036f08(uint32_t *p, uint32_t v)
{
    p[5] = (p[5] & 0xffffbfffu) | ((v & 1u) << 14);
}
