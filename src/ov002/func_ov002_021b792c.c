#include "ffc/types.h"

void func_ov002_021b792c(uint32_t *out, uint8_t *base) {
    uint32_t tmp[2];
    uint32_t *src;
    if (base[0x10e4]) {
        uint32_t *q = *(uint32_t **)(base + 0x88);
        tmp[0] = q[0x1c / 4];
        tmp[1] = q[0x20 / 4];
        src = tmp;
    } else {
        src = (uint32_t *)(base + 0x10e8);
    }
    out[0] = src[0];
    out[1] = src[1];
}
