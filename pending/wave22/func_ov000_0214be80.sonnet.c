#include "ffc/types.h"

uint32_t func_ov000_0214be80(uint32_t x, uint32_t *p) {
    uint32_t a = p[(x + 2) & 0xf];
    uint32_t b = p[(x + 13) & 0xf];
    uint32_t *q = &p[x];
    uint32_t v = p[x ^ 8] ^ b ^ a ^ *q;
    *q = (v << 1) | (v >> 31);
    return *q;
}
