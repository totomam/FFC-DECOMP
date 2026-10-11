#include "ffc/types.h"

int32_t func_02081f9c(uint32_t *out) {
    volatile uint32_t *reg = (volatile uint32_t *)0x04000600;
    if (*reg & 0x4000) {
        return -1;
    }
    *out = (*reg & 0x1F00) >> 8;
    return 0;
}
