#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint8_t *base;
    uint32_t b, c, d;
    int32_t stride;
} S;

void func_02066164(int r0unused, S *s, int x, int n, int v, uint32_t *dst)
{
    int row = v >> 3;
    int idx = x + row * n;
    uint8_t *p = s->base + idx * s->stride + (((uint32_t)v & 7) << 2);
    while (n > 0) {
        *dst++ = *(uint32_t *)p;
        p += 32;
        n--;
    }
}
