#include "ffc/types.h"

typedef struct { uint8_t b; } Flag;

extern void func_0202d0c8(void *a, uint32_t *src, Flag f);

typedef struct {
    uint32_t *data;
    uint32_t count;
    uint32_t cap;
} Vec;

void func_0202b344(uint8_t *p, uint32_t idx, uint32_t *src)
{
    uint32_t off = idx * 12;
    Flag f;
    Vec *e = (Vec *)(p + 0xbc + off);
    uint32_t cnt = *(uint32_t *)(p + 0xc0 + off);
    uint32_t cap = e->cap;
    f.b = 0;
    if (cnt < cap) {
        *(uint32_t *)(p + 0xc0 + off) += 1;
        uint8_t *base = (uint8_t *)e->data;
        uint32_t i = *(uint32_t *)(p + 0xc0 + off) - 1;
        uint32_t *d = (uint32_t *)(base + (i << 4));
        d[0] = src[0];
        d[1] = src[1];
        d[2] = src[2];
        d[3] = src[3];
    } else {
        func_0202d0c8(e, src, f);
    }
    p[0x47] = 1;
}
