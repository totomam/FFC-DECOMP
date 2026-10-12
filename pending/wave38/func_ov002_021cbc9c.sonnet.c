#include "ffc/types.h"

typedef struct E { uint32_t a; int32_t k; } E;
typedef struct Rng { E *s; E *e; } Rng;

extern void func_ov002_021cc8c8(E *a, E *b, uint32_t g);
extern void func_ov002_021cc408(E *a, E *b, Rng c, uint32_t g);
extern void func_ov002_021cc344(void *out, Rng c, Rng y, Rng y2, Rng z, E *a, uint32_t g);
extern void func_ov002_021cbe14(E *a, E *m, E *b, uint32_t g, int32_t n1, int32_t n2, Rng c, Rng e);

void func_ov002_021cbc9c(Rng r, Rng c, Rng e, uint32_t g)
{
    E *a = r.s;
    E *b = r.e;
    int32_t n = b - a;
    E *m;
    int32_t h;
    Rng r1;
    Rng r2;
    Rng y;
    if (n <= 1) {
        return;
    }
    if (n == 2) {
        if (b[-1].k > a[0].k) {
            E t = a[0];
            a[0] = b[-1];
            b[-1] = t;
        }
        return;
    }
    if (n <= 20) {
        func_ov002_021cc8c8(a, b, g);
        return;
    }
    h = n - n / 2;
    m = a + h;
    if (n <= e.s - c.s) {
        uint32_t out;
        r1.s = a;
        r1.e = m;
        func_ov002_021cc408(a, m, c, g);
        r2.s = m;
        r2.e = b;
        y.s = c.s + h;
        y.e = c.e;
        func_ov002_021cc408(m, b, y, g);
        Rng z; z.s = c.s + n; z.e = c.e;
        func_ov002_021cc344(&out, c, y, y, z, a, g);
    } else {
        r1.s = a;
        r1.e = m;
        func_ov002_021cbc9c(r1, c, e, g);
        r2.s = m;
        r2.e = b;
        func_ov002_021cbc9c(r2, c, e, g);
        func_ov002_021cbe14(a, m, b, g, m - a, b - m, c, e);
    }
}
