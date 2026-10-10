#include "ffc/types.h"

uint32_t func_02036b60(uint32_t *p)
{
    uint32_t v = p[1];
    v = v << 26;
    v = v >> 31;
    if (v == 1) {
        return 1;
    }
    return 0;
}
