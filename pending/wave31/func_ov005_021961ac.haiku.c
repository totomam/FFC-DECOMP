#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_020055f0(uint32_t a, uint32_t b, uint32_t c);

void func_ov005_021961ac(uint8_t *p, uint32_t b) {
    int i;
    uint32_t v = b;

    for (i = 0; i < p[0x9c]; i++) {
        uint32_t hi = (uint32_t)(func_0209a76c(v, 10) >> 32);
        func_020055f0(*(uint32_t *)(*(uint32_t *)(p + 0x8c + i * 4) + 0x50),
                      *(uint32_t *)(*(uint32_t *)(p + 0x80) + 0x50), hi);
        v = (uint8_t)func_0209a76c(v, 10);
    }
}
