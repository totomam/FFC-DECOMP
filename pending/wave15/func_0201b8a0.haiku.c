#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x38];
    uint32_t v;
} Inner;

typedef struct Outer {
    uint8_t pad[0x3c];
    Inner *p;
} Outer;

void func_0201b8a0(Outer *o, uint32_t x) {
    Inner *p = o->p;
    p->v = (p->v & 0xfbffffff) | ((x & 1) << 26);
}
