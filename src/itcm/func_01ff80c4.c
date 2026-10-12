#include "ffc/types.h"

void func_01ff80c4(uint8_t *p)
{
    uint8_t *base;
    int32_t i;
    uint32_t *x;
    uint32_t w;
    uint32_t k;
    uint8_t *t;

    i = 1;
    base = p + 0x34;
    do {
        x = (uint32_t *)(base + (i << 3));
        x = (uint32_t *)((uint8_t *)x - 8);
        *(uint32_t *)((uint8_t *)x + 0xc) = (uint32_t)x;
        i++;
        *(uint32_t *)((uint8_t *)x + 0x8) = (uint32_t)x;
    } while (i < 0x80);
    k = 0x448;
    *(uint32_t *)(p + k) = 0;
    *(uint32_t *)(p + k + 0xc) = 0;
    *(uint32_t *)(p + k + 4) = 0x20000;
    *(uint32_t *)(p + k - 4) = 0x20000;
    w = *(uint32_t *)p;
    *(uint32_t *)p = 0x49 | (w & 2);
    t = p + 0x3c;
    t = t - 8;
    *(uint32_t *)(p + 0x2c) = (uint32_t)t;
    *(uint32_t *)(p + k + 0x14) = 0x1000;
}
