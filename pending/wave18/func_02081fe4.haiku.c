#include "ffc/types.h"

int func_02081fe4(uint32_t *p) {
    volatile uint32_t *reg = (volatile uint32_t *)0x04000600;
    if (*reg & 1) {
        return -1;
    }
    *p = *reg & 2;
    return 0;
}
