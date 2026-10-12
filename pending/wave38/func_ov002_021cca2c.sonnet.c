#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Item;
typedef struct { Item *p; uint32_t n; } Pr;
typedef struct { Item *a; Item *b; } Rg;

extern void func_ov002_021cd5cc(Item *first, Item *last, int n);
extern void func_ov002_021cd108(Item *first, Item *last, Pr p, int n);
extern Pr func_ov002_021cd048(Pr q, Pr pm, Pr pe, Item *f, int n);
extern void func_ov002_021ccba4(Item *first, Item *mid, Item *last, int n, int c1, int c2, Pr p, Pr q);

void func_ov002_021cca2c(Rg r, Pr p, Pr q, int n)
{
    int len = r.b - r.a;
    if (len <= 1) {
        return;
    }
    if (len == 2) {
        if (r.b[-1].a > r.a[0].a) {
            Item t0 = r.a[0];
            Item t1 = r.b[-1];
            r.a[0] = t1;
            r.b[-1] = t0;
        }
        return;
    }
    if (len <= 20) {
        func_ov002_021cd5cc(r.a, r.b, n);
        return;
    }
    {
        int half = len - len / 2;
        Item *mid = r.a + half;
        if (len > q.p - p.p) {
            Rg r1; r1.a = r.a; r1.b = mid;
            Rg r2; r2.a = mid; r2.b = r.b;
            func_ov002_021cca2c(r1, p, q, n);
            func_ov002_021cca2c(r2, p, q, n);
            func_ov002_021ccba4(r.a, mid, r.b, n, mid - r.a, r.b - mid, p, q);
            return;
        }
        func_ov002_021cd108(r.a, mid, p, n);
        {
            Pr pm;
            pm.p = p.p + half;
            pm.n = p.n;
            func_ov002_021cd108(mid, r.b, pm, n);
            Pr pe; pe.p = p.p + len; pe.n = p.n;
            func_ov002_021cd048(q, pm, pe, r.a, n);
        }
    }
}
