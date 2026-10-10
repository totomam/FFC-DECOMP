#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x5c];
    uint32_t v[6];
} Inner;

typedef struct Outer {
    uint8_t pad[0x3c];
    Inner *in;
} Outer;

uint32_t *func_0201d1b0(Outer *o, uint32_t *src) {
    Inner *in = o->in;
    uint8_t *p = (uint8_t *)in;
    in->v[0] = src[0];
    p += 0x5c;
    ((uint32_t *)p)[1] = src[1];
    ((uint32_t *)p)[2] = src[2];
    ((uint32_t *)p)[3] = src[3];
    ((uint32_t *)p)[4] = src[4];
    ((uint32_t *)p)[5] = src[5];
    return (uint32_t *)p;
}
