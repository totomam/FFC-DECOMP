#include "ffc/types.h"

void func_02036c28(uint32_t *p, uint32_t x)
{
    *p = (*p & ~2u) | ((x & 1u) << 1);
}
