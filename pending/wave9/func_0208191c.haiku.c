#include "ffc/types.h"

uint32_t func_0208191c(uint32_t param) {
    volatile uint16_t *reg = (volatile uint16_t *)0x04000004;
    uint32_t old = *reg & 0x10;
    if (param != 0) {
        *reg = *reg | 0x10;
    } else {
        *reg = *reg & 0xffef;
    }
    return old;
}
