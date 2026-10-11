#include "ffc/types.h"

uint32_t func_02021bbc(uint8_t *self, uint32_t idx) {
    uint32_t bit = 1u << (idx & 7);
    uint8_t *a = *(uint8_t **)(self + 0xb8);
    uint32_t o = idx >> 3;
    uint32_t r = 1;
    if (!(a[o] & bit) && !((*(uint8_t **)(self + 0xc8))[o] & bit)) r = 0;
    return r;
}
