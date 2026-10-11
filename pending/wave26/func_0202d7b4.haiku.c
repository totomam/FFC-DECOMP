#include "ffc/types.h"

extern void func_0202b228(void *node, uint32_t a, uint32_t b);

void func_0202d7b4(void *p, uint8_t a, uint32_t b)
{
    uint32_t *n;
    if (b == 0) {
        *((uint8_t *)p + 0xb4) = a;
    }
    n = *(uint32_t **)((uint8_t *)p + 0x5c);
    while (n != 0) {
        func_0202b228(n, a, b);
        n = (uint32_t *)n[1];
    }
}
