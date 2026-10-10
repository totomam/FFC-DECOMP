#include "ffc/types.h"

void func_ov000_021587bc(uint32_t n, uint8_t *out) {
    uint32_t t = 0xFFFFFFFFu >> n;
    int i;
    uint32_t m = t ^ 0xFFFFFFFFu;
    for (i = 0; i < 4; i++) {
        out[i] = (uint8_t)(m >> (24 - i * 8));
    }
}
