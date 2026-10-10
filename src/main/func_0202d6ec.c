#include "ffc/types.h"

extern void func_0202b240(uint8_t *node, uint32_t *slot);

void func_0202d6ec(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    uint8_t *n;
    *(uint32_t *)(p + 0x94) = a;
    *(uint32_t *)(p + 0x98) = b;
    *(uint32_t *)(p + 0x9c) = c;
    n = *(uint8_t **)(p + 0x5c);
    while (n != 0) {
        func_0202b240(n, (uint32_t *)(p + 0x94));
        n = *(uint8_t **)(n + 4);
    }
}
