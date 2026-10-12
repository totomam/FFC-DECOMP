#include "ffc/types.h"

typedef struct {
    int32_t w[4];
} Quad;

typedef struct {
    Quad v;
    int32_t a2;
    int32_t a3;
    int32_t o28;
    int32_t o2c;
    int32_t g;
    int32_t f;
} Big;

extern int32_t func_02059e18(int32_t a, int32_t b, int32_t c, int32_t d, Big s);

typedef struct {
    int32_t p0;
    int32_t p4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f2c;
    uint8_t f30;
    uint8_t f31;
} Obj;

typedef struct {
    Obj *p;
    int32_t a1;
    int32_t a2;
    int32_t a3;
} Args;

int32_t func_0205e8c8(Args s, int32_t a4, int32_t a5)
{
    Obj *p = s.p;
    int32_t a1 = s.a1;
    int32_t a2 = s.a2;
    int32_t a3 = s.a3;
    int32_t o24 = p->f24;
    int32_t o20 = p->f20;
    int32_t f = p->f31;
    int32_t g = p->f30;
    int32_t X = 0;
    int32_t Y = 0;
    Quad v;

    if (f) {
        X = (p->f10 - a5) - (a3 - p->f8);
    }
    if (g) {
        Y = (p->fc - a4) - (a2 - p->f8);
    }
    v.w[0] = a2 + Y + o20;
    v.w[1] = a3 + X + o24;
    v.w[2] = a4 + Y + o20;
    v.w[3] = a5 + X + o24;

    return func_02059e18(a1, p->f14, p->f18, p->f1c,
        (Big){ v, a2, a3, p->f28, p->f2c, g, f });
}
