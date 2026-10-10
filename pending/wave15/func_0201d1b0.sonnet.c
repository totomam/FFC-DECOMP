#include "ffc/types.h"
typedef struct Inner { uint8_t pad[0x5c]; uint32_t v[6]; } Inner;
typedef struct Outer { uint8_t pad[0x3c]; Inner *in; } Outer;
uint32_t *func_0201d1b0(Outer *o, uint32_t *src) {
    Inner *in = o->in;
    uint32_t *d = in->v;
    in->v[0] = src[0];
    d[1] = src[1];
    d[2] = src[2];
    d[3] = src[3];
    uint32_t b = src[4];
    d[5] = src[5];
    d[4] = b;
    return d;
}
