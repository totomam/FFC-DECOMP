#include "ffc/types.h"

void func_02036f4c(volatile uint32_t *p, uint32_t v) {
    uint32_t f = (*p << 13) >> 24;
    if (v < f) {
        v = f;
    }
    *p = (*p & 0xfff807ff) | ((v << 24) >> 13);
}
