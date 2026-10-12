/* cflags: -lang c++ */
#include "ffc/types.h"

struct A { uint8_t b; A(uint8_t x) : b(x) {} };

typedef struct { uint32_t x[6]; } Sub;
typedef struct { uint32_t a, b, c, d, e; Sub s; uint32_t f; } Elem;
typedef struct { Elem *base; uint32_t n; uint32_t m; uint32_t *pm; uint32_t cnt; } Tmp;
typedef struct { Elem *base; uint32_t n; uint32_t m; } Obj;

extern "C" {
int32_t func_ov002_021d2d80(void *p, int32_t v);
void func_ov002_021d3088(void *t, int32_t cap, A a);
void func_ov002_021d3018(void *t);
void func_ov002_021d2e00(Obj *p, uint32_t a, Elem *src);
}

inline void call(Tmp *t, int32_t cap, A a) { func_ov002_021d3088(t, cap, a); }

void func_ov002_021d2e00(Obj *p, uint32_t a, Elem *src)
{
    Tmp t;
    Elem *d;
    Elem *e;
    Elem *ds;
    uint32_t k;
    int32_t cap;

    t.base = 0;
    t.n = 0;
    t.m = 0;
    t.pm = &p->m;
    t.cnt = 0;
    cap = func_ov002_021d2d80(p, (int32_t)(p->n + a - p->m));
    A f0(0); A f = f0;
    call(&t, cap, f);
    t.cnt = p->n;

    d = t.base + t.cnt;
    for (k = a; k != 0; k--) {
        *d = *src;
        d++;
    }
    t.n = t.n + a;

    e = p->base + p->n;
    ds = t.base + t.cnt;
    while (e > p->base) {
        e--;
        ds--;
        t.cnt--;
        if (ds != 0) {
            *ds = *e;
        }
        t.n++;
    }

    {
        uint32_t tm = p->m;
        p->m = t.m;
        t.m = tm;
    }
    {
        Elem *tb = p->base;
        p->base = t.base;
        t.base = tb;
    }
    {
        uint32_t tn = p->n;
        p->n = t.n;
        t.n = tn;
    }
    func_ov002_021d3018(&t);
}
