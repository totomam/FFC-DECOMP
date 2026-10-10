#include "ffc/types.h"

extern void func_0202b24c(uint8_t *node, uint32_t *slot);

void func_0202d68c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    uint8_t *n;
    *(uint32_t *)(p + 0xa0) = a;
    *(uint32_t *)(p + 0xa4) = b;
    *(uint32_t *)(p + 0xa8) = c;
    n = *(uint8_t **)(p + 0x5c);
    while (n != 0) {
        func_0202b24c(n, (uint32_t *)(p + 0xa0));
        n = *(uint8_t **)(n + 4);
    }
}
