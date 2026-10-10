#include "ffc/types.h"

extern void func_01ff8f28(uint32_t ch, void *dst, void *src, uint32_t ctrl, uint32_t mode);

void func_02084498(uint32_t ch, void *a, void *b, uint32_t len, uint32_t flag) {
    volatile uint32_t *p;
    if (len == 0) {
        return;
    }
    p = (volatile uint32_t *)(0x40000b0 + (ch * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    if (flag) {
        func_01ff8f28(ch, b, a, (0x85u << 24) | (len >> 2), 0x12);
    } else {
        func_01ff8f28(ch, b, a, (5u << 24) | (len >> 2), 0x16);
    }
    while (*p & 0x80000000) {
    }
}
