#include "ffc/types.h"
typedef struct { uint32_t *b; int32_t n; uint32_t *x; } V;
typedef struct { uint8_t c; } A;
extern void func_020224fc(V *v, int a, A c);
extern void func_02090380(void *d, const void *s, uint32_t n);
extern void *func_020903cc(void *o, int v, uint32_t n);
extern void func_ov003_0216e6a0(V *v);
void func_ov003_0216e5a0(V *p, int a)
{
    V t;
    struct { uint8_t p0, p1; A c; } w;
    uint32_t *s, *e, *tx;
    int n;
    A *pc = &w.c;
    pc->c = 0;
    t.b = 0; t.n = 0; t.x = 0;
    func_020224fc(&t, a, *pc);
    s = p->b;
    e = (uint32_t*)((uint8_t*)s + p->n * 4);
    n = e - s;
    func_02090380(t.b + t.n, s, n * 4);
    func_020903cc(s, 0, n * 4);
    t.n += n;
    p->n = 0;
    {uint32_t **q = &t.x; tx = p->x; p->x = *q; *q = tx;}
    s = p->b; p->b = t.b; t.b = s;
    p->n = t.n;
    t.n = 0;
    func_ov003_0216e6a0(&t);
}
