#include "ffc/types.h"

uint32_t func_ov000_0214be80(uint32_t x, uint32_t *p) {
    uint32_t a = p[(x + 2) & 0xf];
    uint32_t b = p[(x + 13) & 0xf];
    uint32_t d = p[x ^ 8];
    uint32_t c = p[x];
    uint32_t v = d ^ b ^ a ^ c;
    v = (v << 1) | (v >> 31);
    p[x] = v;
    return v;
}
