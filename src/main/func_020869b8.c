#include "ffc/types.h"

void func_020869b8(void) {
    volatile uint16_t *reg = (volatile uint16_t *)0x04000204;
    uint16_t mask = 0x80;
    *reg = *reg & ~mask;
}
