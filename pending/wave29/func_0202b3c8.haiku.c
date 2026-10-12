#include "ffc/types.h"

typedef struct { uint8_t v; } Byte1;

extern void func_0202d0c8(uint8_t *a, uint32_t *b, Byte1 c);

void func_0202b3c8(uint8_t *p, uint32_t *src) {
    uint32_t cnt = *(uint32_t *)(p + 360);
    uint32_t cap = *(uint32_t *)(p + 364);
    if (cnt < cap) {
        uint32_t *d;
        *(uint32_t *)(p + 360) = cnt + 1;
        d = (uint32_t *)(*(uint8_t **)(p + 356) + cnt * 16);
        d[0] = src[0];
        d[1] = src[1];
        d[2] = src[2];
        d[3] = src[3];
    } else {
        Byte1 z;
        z.v = 0;
        func_0202d0c8(p + 356, src, z);
    }
}
