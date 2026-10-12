#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov001_0217894c(void *a, Pair pr, void *p, int z, int w);

void func_ov001_021788f0(void *a, uint32_t b, uint32_t c)
{
    uint8_t *base = *(uint8_t **)a;
    Pair pr;
    uint32_t *p;

    if (c == 1) {
        *(uint32_t *)(base + 0x5bc) = 1;
    }
    pr = *(Pair *)(base + 0x1a8);
    if (pr.x != 0) {
        p = func_ov000_021653d4(0x10);
        if (p != 0) {
            p[0] = b;
            p[3] = c;
            p[1] = *(uint32_t *)(base + 0x5b8);
            p[2] = (uint32_t)base;
        }
        func_ov001_0217894c(a, pr, p, 0, 1);
    }
}
