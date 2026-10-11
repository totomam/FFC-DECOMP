#include "ffc/types.h"

extern uint32_t func_ov003_0215b54c(uint32_t a);

uint32_t func_ov003_0215b560(uint32_t a, uint32_t i, uint32_t j) {
    uint32_t base;
    uint32_t q;
    uint32_t p;

    if (func_ov003_0215b54c(a) == 0) {
        return 0;
    }
    base = *(uint32_t *)(a + 0xa8);
    q = base + *(uint32_t *)(base + 0x88);
    p = base + *(uint32_t *)(q + i * 4);
    if (p == 0) {
        return 0;
    }
    p = p + *(uint32_t *)(p + 4);
    q = p + j * 4;
    if (q == 0) {
        return 0;
    }
    return q;
}
