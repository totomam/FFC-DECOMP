#include "ffc/types.h"

void func_020812e8(uint32_t a, uint32_t b) {
    uint32_t base = 0x04000280;
    *(volatile uint16_t *)base = 1;
    volatile uint64_t *p = (volatile uint64_t *)(base + 0x10);
    *p = (uint64_t)a << 32;
    base += 0x18;
    volatile uint64_t *q = (volatile uint64_t *)base;
    *q = (uint64_t)b;
}
