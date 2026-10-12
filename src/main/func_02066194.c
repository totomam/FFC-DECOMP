#include "ffc/types.h"
struct S { uint32_t f0; uint8_t *base; uint32_t f8; uint32_t fc; uint32_t f10; int32_t pitch; };
void func_02066194(int a, struct S *s, int x, int n, int y, uint32_t *src) {
    uint8_t *base = s->base;
    int row = y >> 3;
    int col = y & 7;
    int idx = x + row * n;
    uint8_t *p = base + idx * s->pitch + col * 4;
    while (n > 0) {
        *(uint32_t *)p = *src;
        p += 0x20;
        src++;
        n--;
    }
}
