#include "ffc/types.h"

void func_02036cb4(uint32_t *p, uint32_t v) {
    uint32_t old = p[1];
    p[1] = ((old << 16) >> 16) | (v << 16);
}
