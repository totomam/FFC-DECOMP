#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef struct { uint32_t k, v; } E;
extern void func_ov002_021cd5cc(E *f, E *l, uint32_t c);
extern void func_ov002_021cd108(E *f, E *l, S p, uint32_t c);
extern S func_ov002_021cd048(S p, uint32_t x);
extern void func_ov002_021ccba4(E *f, E *m, E *l, uint32_t c, int n1, int n2, S p, S q);
void func_ov002_021cca2c(S r, S p, S q, uint32_t comp)
{
    E *first = (E*)r.a, *last = (E*)r.b;
    int n = last - first;
    E *mid;
    if (n <= 1) return;
    if (n == 2) {
        E *b = last - 1;
        if (b->k > first->k) {
            E t = *first; *first = *b; *b = t;
        }
        return;
    }
    if (n <= 20) {
        func_ov002_021cd5cc(first, last, comp);
        return;
    }
    mid = first + (n - n / 2);
    if (n <= (int)((E*)q.a - (E*)p.a)) {
        func_ov002_021cd108(first, mid, p, comp);
        func_ov002_021cd108(mid, last, (S){(uint32_t)((E*)p.a + (n - n/2)), p.b}, comp);
        func_ov002_021cd048(p, p.a + (n - n/2)*8);
        return;
    }
    func_ov002_021cca2c((S){(uint32_t)first,(uint32_t)mid}, p, q, comp);
    func_ov002_021cca2c((S){(uint32_t)mid,(uint32_t)last}, p, q, comp);
    func_ov002_021ccba4(first, mid, last, comp, mid - first, last - mid, p, q);
}
