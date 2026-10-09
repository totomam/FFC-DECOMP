#include "ffc/types.h"

uint32_t func_02036388(uint32_t *p)
{
    uint32_t v = p[22];
    v = v << 12;
    v = v >> 31;
    if (v == 1) {
        return 1;
    }
    return 0;
}
