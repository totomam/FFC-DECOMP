#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov009_021b0598;

void func_ov009_021a0320(uint8_t *p) {
    if (*(uint32_t *)(p + 0x8c) < *(uint32_t *)(p + 0x90)) {
        return;
    }
    {
        uint32_t *q = *(uint32_t **)(p + 0x88);
        q[3] &= ~0xffu;
    }
    *(Pair *)(p + 0x80) = data_ov009_021b0598;
}
