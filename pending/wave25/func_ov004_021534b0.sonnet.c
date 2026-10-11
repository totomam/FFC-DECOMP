#include "ffc/types.h"

extern uint8_t data_ov004_02159744[];

typedef struct {
    uint32_t a, b, c, d;
} S;

typedef struct {
    uint8_t pad[0x6c];
    S v;
} Tbl;

void func_ov004_021534b0(volatile S *out, int unused, int n)
{
    volatile S loc[2];
    uint32_t a, b, c, d, t;
    Tbl *src;
    if (n >= 2) {
        n = n + 1;
    }
    src = (Tbl *)data_ov004_02159744;
    a = src->v.a;
    out->a = a;
    b = src->v.b;
    out->b = b;
    c = src->v.c;
    loc[1].d = b;
    out->c = c;
    d = src->v.d;
    t = n * 0x34;
    uint32_t ct = c + t, at = a + t;
    loc[1].c = at;
    loc[0].c = at;
    loc[0].d = b;
    out->a = at;
    out->b = b;
    loc[1].a = ct;
    loc[1].b = d;
    loc[0].a = ct;
    loc[0].b = d;
    out->c = ct;
    out->d = d;
}
