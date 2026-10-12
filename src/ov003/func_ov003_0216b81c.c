#include "ffc/types.h"

extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_0205681c(uint32_t size);
extern void func_ov003_021644cc(void *p, int a, uint32_t v, uint32_t t, uint32_t i1, uint32_t i2, uint32_t i3, uint32_t i4, uint32_t i5);

void func_ov003_0216b81c(int a, uint8_t *b)
{
    uint32_t n;
    uint32_t off = *(uint32_t *)(b + 8);
    uint8_t *c = b + off;
    uint32_t v = *(uint32_t *)c;
    uint32_t t = func_0209a76c(*(uint32_t *)(c + 4) << 16, 0x168);
    uint32_t i1, i2, i3, i4, i5;
    int f;
    void *p;

    n = *(uint32_t *)(b + 4);
    if (n > 2) {
        i1 = *(uint32_t *)(c + 8);
    } else {
        i1 = 1;
    }
    if (n > 3) {
        i2 = *(uint32_t *)(c + 12);
    } else {
        i2 = 0;
    }
    f = (*(uint16_t *)b == 12) ? 1 : 0;
    if (n > 4) {
        i3 = *(uint32_t *)(c + 16);
    } else {
        i3 = 0;
    }
    if (n > 5) {
        i4 = *(uint32_t *)(c + 20);
    } else {
        i4 = 0;
    }
    p = func_0205681c(0x98);
    if (p != 0) {
        func_ov003_021644cc(p, a, (uint16_t)v, (uint16_t)t, f, (uint16_t)i1, i2, i3, i4);
    }
}
