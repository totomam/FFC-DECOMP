#include "ffc/types.h"

void func_0201d014(uint8_t *self, uint32_t idx, uint32_t *out) {
    uint32_t *base = *(uint32_t **)(self + 0x40);
    uint32_t *e = (uint32_t *)((uint8_t *)base + (idx << 4));
    out[0] = e[0];
    out[1] = e[1];
    out[2] = e[2];
    out[3] = e[3];
}
