#include "ffc/types.h"

uint32_t func_020822d0(void) {
    volatile uint16_t *reg = (volatile uint16_t *)0x400100a;
    int32_t v = *reg;
    return (uint32_t)((((v & 0x3c) >> 2) << 14) + 0x6200000);
}
