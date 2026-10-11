#include "ffc/types.h"

void func_0208ec18(uint32_t *out) {
    volatile uint16_t *reg = (volatile uint16_t *)0x4000204;
    out[0] = (*reg & 0xc) >> 2;
    out[1] = (*reg & 0x10) >> 4;
    *reg = (*reg & ~0xc) | 0xc;
    *reg = *reg & ~0x10;
}
