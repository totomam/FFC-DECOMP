#include "ffc/types.h"

extern int32_t func_ov007_021c0c88(int32_t a, int32_t b, int32_t c);

typedef struct Inner {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
} Inner;

typedef struct Outer {
    int32_t f0;
    int32_t f4;
    Inner *inner;
} Outer;

int32_t func_ov007_021c11b0(Outer *o)
{
    Inner *s = o->inner;
    if (s->f0 == 0) {
        return 4;
    }
    if (s->f8 <= 0) {
        return 6;
    }
    if (s->f4 == 0) {
        return 5;
    }
    if (s->f14 < 0) {
        return 10;
    }
    if (s->f18 <= 0) {
        return 11;
    }
    return func_ov007_021c0c88(s->f4, s->f8, s->f18);
}
