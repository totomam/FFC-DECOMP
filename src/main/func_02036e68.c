#include "ffc/types.h"

void func_02036e68(uint32_t *p, uint32_t v)
{
    p[3] = (p[3] & 0xffffbfffu) | ((v << 31) >> 17);
}
