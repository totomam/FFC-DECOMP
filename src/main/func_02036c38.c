#include "ffc/types.h"

void func_02036c38(uint32_t *p, uint32_t x)
{
    *p = (*p & ~4u) | ((x & 1u) << 2);
}
