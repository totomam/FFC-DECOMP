#include "ffc/types.h"

uint32_t func_02036d5c(uint32_t *p)
{
    uint32_t v = p[3];
    v = v << 15;
    v = v >> 31;
    if (v == 1) {
        return 1;
    }
    return 0;
}
