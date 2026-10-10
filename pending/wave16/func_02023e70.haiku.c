#include "ffc/types.h"

void func_02023e70(uint32_t *p, int clear, uint32_t bit) {
    uint32_t mask = 1u << bit;
    if (clear) {
        p[4] &= ~mask;
    } else {
        p[4] |= mask;
    }
}
