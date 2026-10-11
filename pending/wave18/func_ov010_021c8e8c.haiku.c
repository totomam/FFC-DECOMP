#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov010_021c8eac(void *p);

void func_ov010_021c8e8c(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint32_t x = *(uint32_t *)(b + 0x10c);
    uint32_t y = *(uint32_t *)(b + 0x110);
    uint64_t r = func_0209a76c(x + 1, y + 1);
    *(uint32_t *)(b + 0x10c) = (uint32_t)(r >> 32);
    func_ov010_021c8eac(p);
}
