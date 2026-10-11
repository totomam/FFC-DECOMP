#include "ffc/types.h"

extern void func_0200b65c(void *p, uint32_t v);

void func_0200ac24(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, ...) {
    uint32_t *va = (uint32_t *)&c + 1;
    *(uint32_t *)(p + 0xa4) = a;
    *(uint32_t *)(p + 0xac) = b;
    *(uint32_t *)(p + 0xb0) = c;
    *(uint32_t *)(p + 0x12c) = va[0];
    func_0200b65c(p + 0x134, va[1]);
    func_0200b65c(p + 0x140, va[2]);
}
