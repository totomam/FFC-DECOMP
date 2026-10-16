#include "ffc/types.h"
uint32_t func_02021bbc(uint8_t *p, uint32_t i) {
    uint32_t m = 1 << (i & 7);
    uint32_t r = 1;
    if (((*(uint8_t **)(p + 0xb8))[i >> 3] & m) == 0) {
        if (((*(uint8_t **)(p + 0xc8))[i >> 3] & m) == 0) r = 0;
    }
    return r;
}
