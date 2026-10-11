#include "ffc/types.h"

uint32_t func_ov000_0215b7d4(uint8_t *p, int32_t n)
{
    uint32_t r = 0;
    int32_t i;
    for (i = 0; i < n; i++) {
        uint32_t bit = 1;
        r |= bit << p[i];
    }
    return r;
}
