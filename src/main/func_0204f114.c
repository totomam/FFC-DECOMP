#include "ffc/types.h"

uint32_t func_0204f114(uint32_t *p, uint32_t m)
{
    uint32_t v = p[3];
    v = v << 19;
    v = v >> 27;
    if (v & m) {
        return 0;
    }
    return 1;
}
