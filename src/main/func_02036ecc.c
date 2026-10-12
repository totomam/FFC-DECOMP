#include "ffc/types.h"

void func_02036ecc(uint32_t *p, uint32_t v)
{
    p[4] = (p[4] & 0xffe01fffu) | ((v & 0xffu) << 13);
}
