#include "ffc/types.h"

void func_02021b48(uint8_t *p, uint32_t n) {
    uint8_t *b = *(uint8_t **)(p + 0xc8);
    b[n >> 3] |= (uint8_t)(1 << (n & 7));
}
