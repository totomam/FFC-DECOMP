#include "ffc/types.h"

void func_020812a4(uint32_t x) {
    uint32_t base = 0x04000280;
    *(volatile uint16_t *)base = 1;
    *(volatile uint64_t *)(base + 0x10) = (uint64_t)(base >> 14) << 32;
    *(volatile uint64_t *)(base + 0x18) = x;
}
