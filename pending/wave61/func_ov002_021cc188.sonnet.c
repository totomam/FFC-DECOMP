#include "ffc/types.h"
typedef struct { int32_t a, k; } E;
typedef struct { E *p; } I1;
typedef struct { E *p; int32_t x; } I2;
typedef struct { E *p; int32_t x; } R;
static inline E *cb2(I2 f, I2 l, E *r) {
    I2 g = f;
    while (g.p != l.p) { --l.p; --r; *r = *l.p; }
    return r;
}
static inline E *cb1(E *f, E *l, E *r) {
    while (f != l) { --l; --r; *r = *l; }
    return r;
}
R func_ov002_021cc188(I1 f1, I1 l1, I2 f2, I2 l2, E *r) {
    R ret;
    E *a, *b;
    a = f1.p; b = l1.p;
    if (a == b) { ret.p = cb2(f2, l2, r); return ret; }
    if (f2.p == l2.p) { ret.p = cb1(a, b, r); return ret; }
    --b; --l2.p;
    for (;;) {
        if (l2.p->k > b->k) {
            *--r = *b;
            if (a == b) { I2 y = l2; y.p++; ret.p = cb2(f2, y, r); return ret; }
            --b;
        } else {
            *--r = *l2.p;
            if (f2.p == l2.p) { ret.p = cb1(a, b + 1, r); return ret; }
            --l2.p;
        }
    }
}
