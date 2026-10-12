#include "ffc/types.h"

extern void func_020848b8(int a, void *b, uint32_t size, uint32_t zero);
extern void func_01ff8f28(int a, void *b, void *c, uint32_t d, uint32_t e);

void func_020845a8(int a, void *b, void *c, uint32_t size, int flag) {
    volatile uint32_t *reg;

    if (size == 0) {
        return;
    }
    func_020848b8(a, b, size, 0);
    reg = (volatile uint32_t *)((uint8_t *)0x40000b0 + (uint32_t)(a * 3 + 2) * 4);
    while (*reg & 0x80000000) {
    }
    if (flag != 0) {
        func_01ff8f28(a, b, c, 0x80000000 | (size >> 1), 2);
    } else {
        func_01ff8f28(a, b, c, size >> 1, 6);
    }
    while (*reg & 0x80000000) {
    }
}
