#include "ffc/types.h"

void func_02023e9c(uint8_t *p, uint32_t *k) {
    uint32_t *q = (uint32_t *)p;
    if (q[0x3c / 4] == k[0] && q[0x40 / 4] == k[1] && q[0x44 / 4] == k[2]) {
        return;
    }
    q[0x3c / 4] = k[0];
    q[0x40 / 4] = k[1];
    q[0x44 / 4] = k[2];
    p[0x34] = 0;
}
