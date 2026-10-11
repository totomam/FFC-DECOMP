#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad0[4];
    uint8_t *base;
    uint8_t pad1[0x0c];
    int32_t stride;
} Inner;

typedef struct Outer {
    uint8_t pad0[0x2c];
    Inner *inner;
    uint8_t pad1[4];
    int32_t width;
} Outer;

uint32_t func_02066540(Outer *o, int32_t x, int32_t y) {
    Inner *in = o->inner;
    int32_t idx = (x >> 3) + (y >> 3) * o->width;
    int32_t off = idx * in->stride;
    uint32_t word = *(uint32_t *)(in->base + off + ((y & 7) << 2));
    return (word >> ((x & 7) << 2)) & 0xF;
}
