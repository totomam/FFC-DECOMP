#include "ffc/types.h"

extern void func_020848b8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_01ff8f28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_020844ec(uint32_t a, uint32_t b, uint32_t c, uint32_t n, uint32_t mode) {
    volatile uint32_t *reg;
    if (n != 0) {
        func_020848b8(a, b, n, 0);
        reg = (volatile uint32_t *)(0x40000b0 + ((a * 3 + 2) << 2));
        while (*reg & 0x80000000) {}
        if (mode) {
            func_01ff8f28(a, b, c, (0x21 << 0x1a) | (n >> 2), 2);
        } else {
            func_01ff8f28(a, b, c, (1 << 0x1a) | (n >> 2), 6);
        }
        while (*reg & 0x80000000) {}
    }
}
