#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Item;
typedef struct { Item *p; uint32_t n; } Pr;

extern void func_ov002_021cd5cc(Item *first, Item *last, int n);
extern void func_ov002_021cd108(Item *first, Item *last, Pr p, int n);
extern void func_ov002_021cd048(Pr a, Pr b, Item *c, int n);
extern void func_ov002_021ccba4(Item *first, Item *mid, Item *last, int n, int c1, int c2, Pr p, Pr q);

void func_ov002_021cca2c(Item *first, Item *last, Pr p, Pr q, int n)
{
    int len = last - first;
    if (len <= 1) {
        return;
    }
    if (len == 2) {
        if (last[-1].a > first[0].a) {
            Item t0 = first[0];
            Item t1 = last[-1];
            first[0] = t1;
            last[-1] = t0;
        }
        return;
    }
    if (len <= 20) {
        func_ov002_021cd5cc(first, last, n);
        return;
    }
    {
        int half = len - len / 2;
        Item *mid = first + half;
        if (len > q.p - p.p) {
            func_ov002_021cca2c(first, mid, p, q, n);
            func_ov002_021cca2c(mid, last, p, q, n);
            func_ov002_021ccba4(first, mid, last, n, mid - first, last - mid, p, q);
            return;
        }
        func_ov002_021cd108(first, mid, p, n);
        {
            Pr pm;
            pm.p = p.p + half;
            pm.n = p.n;
            func_ov002_021cd108(mid, last, pm, n);
        }
        func_ov002_021cd048(p, q, first, n);
    }
}
