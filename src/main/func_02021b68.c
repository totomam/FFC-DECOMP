#include "ffc/types.h"

void func_02021b68(void *self, uint32_t idx, int set) {
    volatile uint32_t v1;
    volatile uint32_t v0;
    uint8_t *base = (uint8_t *)self + 0xac;
    v0 = (uint32_t)base;
    v1 = idx;
    if (set) {
        uint8_t *bits = *(uint8_t **)(base + 0xc);
        bits[idx >> 3] |= (uint8_t)(1u << (idx & 7));
    } else {
        uint8_t *bits = *(uint8_t **)(base + 0xc);
        bits[idx >> 3] &= (uint8_t)~(1u << (idx & 7));
    }
}
