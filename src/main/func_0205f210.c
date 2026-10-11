#include "ffc/types.h"

void func_0205f210(uint32_t *p, uint32_t *q) {
    uint32_t v = q[7];
    uint32_t m = 0xfffffc00;
    if (((p[0] << 18) >> 31) == 1) {
        v <<= 1;
    }
    p[1] = (p[1] & m) | (v & (m >> 22));
}
