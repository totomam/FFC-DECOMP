#include "ffc/types.h"

extern char data_020b1074[];
extern char data_020b109c[];

typedef struct {
    int32_t w[4];
} W;

typedef struct {
    void *vt;
    W w;
    int32_t a;
    int32_t b;
    int32_t nc;
    int32_t nd;
    int32_t e;
    int32_t f;
    uint8_t g;
    uint8_t h;
} S;

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} P;

typedef struct {
    int32_t d;
    int32_t e;
    int32_t f;
    uint8_t g;
    uint8_t h;
} X;

S *func_0205e978(S *p, P in, X x)
{
    W v;
    v.w[0] = in.c;
    v.w[1] = x.d;
    v.w[2] = in.c + in.a;
    v.w[3] = x.d + in.b;
    p->vt = data_020b1074;
    p->w = v;
    p->vt = data_020b109c;
    p->a = in.a;
    p->b = in.b;
    p->nc = -in.c;
    p->nd = -x.d;
    p->e = x.e;
    p->f = x.f;
    p->g = x.g;
    p->h = x.h;
    return p;
}
