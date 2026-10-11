#include "ffc/types.h"

void func_0201d1d0(uint8_t *a, uint32_t *out) {
    uint32_t *p = *(uint32_t **)(a + 0x3c);
    uint32_t *q = p + 0x17;
    uint32_t t = p[0x17];
    out[0] = t;
    out[1] = q[1];
    out[2] = q[2];
    out[3] = q[3];
    out[4] = q[4];
    out[5] = q[5];
}
