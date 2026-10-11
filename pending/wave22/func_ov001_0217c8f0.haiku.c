#include "ffc/types.h"

extern uint32_t func_ov000_02168b44(void *a, uint32_t *b);

uint32_t func_ov001_0217c8f0(void **p, uint32_t v, uint32_t *out)
{
    uint32_t local[12];
    uint8_t *base = (uint8_t *)*p;
    uint32_t r;
    local[0] = v;
    r = func_ov000_02168b44(*(void **)(base + 0x5c8), local);
    if (out) {
        *out = r;
    }
    return r ? 1 : 0;
}
