#include "ffc/types.h"

void func_02036c48(uint32_t *p, uint32_t x)
{
    *p = (*p & ~0x38u) | ((x & 7u) << 3);
}
