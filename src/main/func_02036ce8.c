#include "ffc/types.h"

uint32_t func_02036ce8(uint32_t *p)
{
    int32_t v = p[3];
    v = v << 31;
    v = (uint32_t)v >> 31;
    if (v == 1) {
        return 1;
    }
    return 0;
}
