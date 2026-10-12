#include "ffc/types.h"

uint8_t func_ov001_02185604(uint8_t *p, uint8_t r1) {
    uint32_t o = 256;
    uint8_t a = p[o];
    p[o] = a + 1;
    p[o + 1] = p[o + 1] + p[a];
    uint8_t q = p[o + 4];
    uint8_t old = p[q];
    p[q] = p[p[o + 1]];
    p[p[o + 1]] = p[p[o + 3]];
    p[p[o + 3]] = p[p[o]];
    p[p[o]] = old;
    p[o + 2] = p[o + 2] + p[old];
    uint32_t t = p[p[o + 3]];
    uint32_t c = r1 ^ p[(uint8_t)(p[p[o + 2]] + p[p[o]])];
    p[o + 3] = c ^ p[p[(uint8_t)(p[p[o + 1]] + (p[p[o + 4]] + t))]];
    p[o + 4] = r1;
    return p[o + 3];
}
