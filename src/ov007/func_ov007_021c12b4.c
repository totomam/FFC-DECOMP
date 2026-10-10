#include "ffc/types.h"

extern void func_ov007_021c1134(uint32_t a, uint32_t b, uint32_t c);

struct Pair {
    uint32_t x;
    uint32_t y;
};

struct Inner {
    uint32_t pad[2];
    uint32_t v;
};

struct Outer {
    uint32_t pad[2];
    struct Inner *inner;
    struct Pair *pair;
};

void func_ov007_021c12b4(struct Outer *o)
{
    struct Inner *in = o->inner;
    struct Pair *q = o->pair;
    if (q != 0) {
        func_ov007_021c1134(in->v, q->x, q->y);
    }
}
