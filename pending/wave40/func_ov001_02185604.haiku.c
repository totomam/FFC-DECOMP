#include "ffc/types.h"

uint8_t func_ov001_02185604(uint8_t *p, uint8_t r1) {
    uint32_t o = 1;
    uint8_t a;
    uint8_t I;
    uint8_t j;
    uint8_t q;
    uint8_t old;
    uint8_t m;
    uint8_t x;
    uint8_t c;
    uint8_t s2;

    o = o << 8;
    a = p[o];
    p[o] = a + 1;
    p[o + 1] = p[o + 1] + p[a];
    I = p[o];
    j = p[o + 1];
    q = p[o + 4];
    old = p[q];
    p[q] = p[j];
    m = p[o + 3];
    p[j] = p[m];
    p[m] = I;
    p[p[o]] = old;
    p[o + 2] = p[o + 2] + p[old];
    x = p[o + 2];
    c = r1 ^ p[(uint8_t)(p[x] + p[p[o]])];
    s2 = (uint8_t)(p[p[j]] + (p[m] + p[q]));
    p[o + 3] = c ^ p[p[s2]];
    p[o + 4] = r1;
    return p[o + 3];
}
