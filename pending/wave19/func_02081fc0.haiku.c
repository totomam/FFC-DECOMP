#include "ffc/types.h"

int func_02081fc0(uint32_t *out) {
    volatile uint32_t *reg = (volatile uint32_t *)0x04000600;
    if (*reg & 0x4000) {
        return -1;
    }
    *out = (*reg & 0x2000) >> 13;
    return 0;
}
