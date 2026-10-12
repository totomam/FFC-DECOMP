#include "ffc/types.h"

extern int32_t func_ov002_021d2d80(void *p, int32_t v);
extern void func_ov002_021d3088(void *t, int32_t cap, uint8_t flag);
extern void func_ov002_021d3018(void *t);

typedef struct { uint32_t w[12]; } Elem;
typedef struct { Elem *base; uint32_t n; uint32_t m; uint32_t *pm; uint32_t cnt; } Tmp;
typedef struct { Elem *base; uint32_t n; uint32_t m; } Obj;

void func_ov002_021d2e00(Obj *p, uint32_t a, Elem *src)
{
    Tmp t;
    Elem *d;
    Elem *e;
    Elem *ds;
    uint32_t k;
    uint8_t flag = 0;
    int32_t cap;

    t.base = 0;
    t.n = 0;
    t.m = 0;
    t.pm = &p->m;
    t.cnt = 0;
    cap = func_ov002_021d2d80(p, (int32_t)(p->n + a - p->m));
    func_ov002_021d3088(&t, cap, flag);
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
