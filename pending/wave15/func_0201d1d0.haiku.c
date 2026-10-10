#include "ffc/types.h"

void func_0201d1d0(uint8_t *a, uint32_t *out) {
    uint8_t *p;
    uint32_t *q;
    p = *(uint8_t **)(a + 0x3c);
    out[0] = *(uint32_t *)(p + 0x5c);
    q = (uint32_t *)(*(uint8_t **)(a + 0x3c) + 0x5c);
    out[1] = q[1];
    out[2] = q[2];
    out[3] = q[3];
    out[4] = q[4];
    out[5] = q[5];
}
