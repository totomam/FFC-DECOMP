#include "ffc/types.h"

uint32_t func_02036d34(uint32_t *p)
{
    uint32_t v = p[3];
    v = v << 17;
    v = v >> 31;
    if (v == 1) {
        return 1;
    }
    return 0;
}
