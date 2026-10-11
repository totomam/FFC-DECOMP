#include "ffc/types.h"

extern int32_t func_ov007_021c08a0(int32_t a, int32_t b);

struct Inner {
    int32_t a;
    int32_t b;
    int32_t c;
};

struct Outer {
    int32_t pad[2];
    struct Inner *in;
};

int32_t func_ov007_021c0b40(struct Outer *o)
{
    struct Inner *s = o->in;
    if (s->a == 0) {
        return 4;
    }
    if (s->c < 0) {
        return 6;
    }
    if (s->b == 0 && s->c > 0) {
        return 5;
    }
    return func_ov007_021c08a0(s->b, s->c);
}
