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
    int32_t n = hi - lo;
    int32_t off;
    Pair *mid;
    Pair buf[3];

    if (n <= 1) {
        return;
    }
    if (n == 2) {
        Pair *h1 = hi - 1;
        if (h1->b < lo->b) {
            int32_t t0 = lo->a;
            lo->a = h1->a;
            h1->a = t0;
            t0 = lo->b;
            lo->b = h1->b;
            h1->b = t0;
        }
        return;
    }
    if (n <= 20) {
        func_ov002_021cf3e4(*plo, *phi, c);
        return;
    }

    off = (n - n / 2) * 8;
    mid = (Pair *)((uint8_t *)*plo + off);

    if (n <= (s.a - p.a) / 8) {
    func_ov002_021cef24(*plo, mid, p, c);
    {
        Pair q;
        q.a = p.a + off;
        q.b = p.b;
        func_ov002_021cef24(mid, *phi, q, c);
    }
    buf[0].a = p.a + n * 8;
    buf[0].b = p.b;
    buf[1].a = p.a + off;
    buf[1].b = p.b;
    buf[2].a = p.a + off;
    buf[2].b = p.b;
    {
        Pair cc;
        cc.a = p.a + off;
        cc.b = p.b;
        func_ov002_021cee60(buf, p, cc);
    }
        return;
    }
        func_ov002_021ce83c(*plo, mid, p, s, c);
        func_ov002_021ce83c(mid, *phi, p, s, c);
        func_ov002_021ce9b4(*plo, mid, *phi, c, (mid - *plo), (*phi - mid), p, s);
    }
