#include "ffc/types.h"

uint32_t func_02081944(uint32_t param) {
    volatile uint16_t *reg = (volatile uint16_t *)0x04000004;
    uint32_t old = *reg & 0x8;
    if (param != 0) {
        *reg = *reg | 0x8;
    } else {
        *reg = *reg & 0xfff7;
    }
    return old;
}
