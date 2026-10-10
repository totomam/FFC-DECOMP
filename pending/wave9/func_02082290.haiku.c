#include "ffc/types.h"

uint32_t func_02082290(void) {
    volatile uint16_t *reg = (volatile uint16_t *)0x04001008;
    int32_t v = *reg;
    return (uint32_t)((((v & 0x3c) >> 2) << 14) + 0x6200000);
}
