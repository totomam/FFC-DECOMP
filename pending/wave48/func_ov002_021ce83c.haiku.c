#include "ffc/types.h"

typedef struct { int32_t a; int32_t b; } Pair;

extern void func_ov002_021cf3e4(Pair *lo, Pair *hi, int32_t c);
extern void func_ov002_021cef24(Pair *lo, Pair *hi, Pair p, int32_t c);
extern void func_ov002_021cee60(Pair *out, Pair p, Pair c);
extern void func_ov002_021ce9b4(Pair *lo, Pair *mid, Pair *hi, int32_t c, int32_t nl, int32_t nr, Pair p, Pair s);
extern void func_ov002_021ce83c(Pair *lo, Pair *hi, Pair p, Pair s, int32_t c);

void func_ov002_021ce83c(Pair *lo, Pair *hi, Pair p, Pair s, int32_t c)
{
    Pair **plo = &lo;
    Pair **phi = &hi;
    Pair *pp = &p;
    Pair *ps = &s;
    int32_t n = *phi - *plo;
    int32_t off;
    Pair *mid;
    Pair t;
    Pair buf[3];

    if (n <= 1) {
        return;
    }
    if (n == 2) {
        Pair *h1 = *phi - 1;
        if (h1->b < (*plo)->b) {
            t = **plo;
            **plo = *h1;
            *h1 = t;
        }
        return;
    }
    if (n <= 20) {
        func_ov002_021cf3e4(*plo, *phi, c);
        return;
    }

    off = (n - n / 2) * 8;
    mid = (Pair *)((uint8_t *)*plo + off);

    if (n > (ps->a - pp->a) / 8) {
        func_ov002_021ce83c(*plo, mid, *pp, *ps, c);
        func_ov002_021ce83c(mid, *phi, *pp, *ps, c);
        func_ov002_021ce9b4(*plo, mid, *phi, c, (mid - *plo), (*phi - mid), *pp, *ps);
        return;
    }

    func_ov002_021cef24(*plo, mid, *pp, c);
    {
        Pair q;
        q.a = pp->a + off;
        q.b = pp->b;
        func_ov002_021cef24(mid, *phi, q, c);
    }
    buf[0].a = pp->a + n * 8;
    buf[0].b = pp->b;
    buf[1].a = pp->a + off;
    buf[1].b = pp->b;
    buf[2].a = pp->a + off;
    buf[2].b = pp->b;
    {
        Pair cc;
        cc.a = pp->a + off;
        cc.b = pp->b;
        func_ov002_021cee60(buf, *pp, cc);
    }
}
