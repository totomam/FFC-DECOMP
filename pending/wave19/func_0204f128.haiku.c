#include "ffc/types.h"

void func_0204f128(uint32_t *p, uint32_t m) {
    uint32_t v;
    if (m == 3) {
        m = 2;
    }
    v = p[3];
    p[3] = (v & 0xffff1fff) | ((((v << 16) >> 29) | (1u << m)) << 29 >> 16);
}
