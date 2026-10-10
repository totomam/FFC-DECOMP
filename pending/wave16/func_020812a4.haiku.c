#include "ffc/types.h"

void func_020812a4(uint32_t x) {
    volatile uint16_t *cnt = (volatile uint16_t *)0x04000280;
    volatile uint32_t *numer = (volatile uint32_t *)0x04000290;
    volatile uint32_t *denom = (volatile uint32_t *)0x04000298;
    uint32_t hi;
    *cnt = 1;
    hi = (uint32_t)cnt >> 14;
    numer[0] = 0;
    numer[1] = hi;
    denom[0] = x;
    denom[1] = 0;
}
