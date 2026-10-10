#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x10];
    uint32_t reg;
} Inner;

typedef struct Mid {
    uint8_t pad[0x18];
    Inner *inner;
} Mid;

typedef struct Outer {
    uint8_t pad[0x20];
    Mid *mid;
} Outer;

void func_0205e7f8(Outer *p, uint32_t v) {
    Inner *in = p->mid->inner;
    in->reg = (in->reg & ~3u) | (v & 3u);
}
