#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x10];
    uint32_t f;
} Inner;

typedef struct Outer {
    uint8_t pad[0x20];
    Inner *p;
} Outer;

void func_ov002_0219d0ac(Outer *o, uint32_t v) {
    Inner *p = o->p;
    if (p) {
        p->f = (p->f & ~3u) | (v & 3u);
    }
}
