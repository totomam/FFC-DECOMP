#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x3c];
    uint32_t reg;
} Inner;

typedef struct Outer {
    uint8_t pad[0x3c];
    Inner *inner;
} Outer;

void func_0201b910(Outer *o, uint32_t v) {
    Inner *i = o->inner;
    i->reg = (i->reg & ~0x30u) | ((v << 30) >> 26);
}
