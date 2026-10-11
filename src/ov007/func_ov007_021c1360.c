#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t f;
    int32_t e;
} Inner;

typedef struct {
    int32_t pad0;
    int32_t pad1;
    Inner *inner;
} Outer;

extern int32_t func_ov007_021c0c88(int32_t x, int32_t y);

int32_t func_ov007_021c1360(Outer *p)
{
    Inner *s = p->inner;
    int32_t e;
    if (s->a == 0) {
        return 4;
    }
    if (s->c <= 0) {
        return 0xd;
    }
    if (s->b == 0) {
        return 0xc;
    }
    e = s->e;
    if (e <= 0) {
        return 6;
    }
    if (s->f != 0) {
        return func_ov007_021c0c88(s->f, e);
    }
    return 5;
}
