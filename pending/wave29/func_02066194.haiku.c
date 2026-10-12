#include "ffc/types.h"

struct S {
    uint32_t f0;
    uint8_t *base;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    int32_t pitch;
};

void func_02066194(int a, struct S *s, int x, int n, int y, uint32_t *src) {
    int row = y >> 3;
    uint8_t *p = s->base;
    int t = row;
    t = n * t;
    x = x + t;
    p += x * s->pitch;
    p += (uint32_t)(y << 29) >> 27;
    while (n > 0) {
        *(uint32_t *)p = *src;
        src++;
        n--;
        p += 0x20;
    }
}
