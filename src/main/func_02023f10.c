#include "ffc/types.h"

void func_02023f10(uint8_t *p, uint32_t *k) {
    uint32_t *q = (uint32_t *)p;
    if (q[0x54 / 4] == k[0] && q[0x58 / 4] == k[1] && q[0x5c / 4] == k[2]) {
        return;
    }
    q[0x54 / 4] = k[0];
    q[0x58 / 4] = k[1];
    q[0x5c / 4] = k[2];
    p[0x34] = 0;
}
