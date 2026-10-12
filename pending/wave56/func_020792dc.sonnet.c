#include "ffc/types.h"

typedef struct Inner { int8_t *data; } Inner;
typedef struct Obj { int32_t f0; Inner *f4; int32_t f8; int32_t fc; } Obj;
typedef struct P2 { uint8_t x; uint8_t y; } P2;
typedef struct W { int32_t v; } W;
typedef struct S { W w0; uint32_t mask; int32_t count; P2 p; } S;

extern int32_t func_02078400(Inner *a, int32_t b, int32_t c, int32_t d);
extern void func_02079260(Obj *a, int32_t x, int32_t y, W z, int32_t count, int32_t *pcount, P2 bytes);

void func_020792dc(Obj *a, int32_t p1, int32_t p2, int32_t p3, S s) {
    int32_t count = s.count;
    int32_t d = a->fc + a->f4->data[1];
    int32_t m1 = -(int32_t)s.p.y * d;
    int32_t m0 = (int32_t)s.p.x * d;
    int32_t half = (p3 + 1) / 2;
    uint32_t hi = s.mask & 0x800;
    uint32_t lo = s.mask & 0x400;
    int32_t i;
    int32_t off;
    int32_t t;
    int32_t r4;
    int32_t r5;

    for (i = 0; count != 0; i++) {
        r4 = p1 + i * m1;
        r5 = p2 + i * m0;
        if (hi) {
            t = func_02078400(a->f4, a->f8, count, 0);
            off = p3 - t;
            r4 += off * s.p.x;
            r5 += off * s.p.y;
        } else if (lo) {
            t = func_02078400(a->f4, a->f8, count, 0);
            off = half - (t + 1) / 2;
            r4 += off * s.p.x;
            r5 += off * s.p.y;
        }
        func_02079260(a, r4, r5, s.w0, count, &count, s.p);
    }
}
