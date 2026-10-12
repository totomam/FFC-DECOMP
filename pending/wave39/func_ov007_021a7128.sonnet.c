#include "ffc/types.h"

extern uint32_t func_ov007_021a70a8(void *v, int32_t x);
typedef struct { uint8_t v; } A;
extern void func_ov007_021a728c(void *t, uint32_t a, A b);
extern void func_ov007_021a7228(void *t);

typedef struct { uint32_t w[6]; } Elem;
typedef struct { Elem *data; int32_t count; int32_t cap; } Vec;
typedef struct { Elem *data; int32_t count; int32_t cap; int32_t *ref; int32_t orig; } Tmp;

static inline void swp(int32_t *a, int32_t *b) { int32_t x = *a; *a = *b; *b = x; }
void func_ov007_021a7128(Vec *p, int32_t n, Elem *src)
{
    struct { uint8_t x[3]; A a; A b; } L;
    Tmp t;
    int32_t k;
    Elem *d;
    Elem *dst;
    Elem *pe;
    Elem *te;
    uint32_t r;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    t.orig = 0;
    t.ref = &p->cap;

    r = func_ov007_021a70a8(p, p->count + n - p->cap);
    {
        A *q = &L.a;
        q->v = 0;
        L.b = *q;
        func_ov007_021a728c(&t, r, L.b);
    }
    t.orig = p->count;
    dst = t.data + p->count + t.count;

    while (n != 0) {
        if (dst) {
            dst->w[0]=src->w[0];dst->w[1]=src->w[1];dst->w[2]=src->w[2];dst->w[3]=src->w[3];dst->w[4]=src->w[4];dst->w[5]=src->w[5];
        }
        n--;
        t.count++;
        dst++;
    }

    d = p->data;
    pe = d + p->count;
    te = t.data + t.orig;
    while (pe > d) {
        pe--;
        te--;
        if (te) {
            te->w[0]=pe->w[0];te->w[1]=pe->w[1];te->w[2]=pe->w[2];te->w[3]=pe->w[3];te->w[4]=pe->w[4];te->w[5]=pe->w[5];
        }
        t.orig--;
        t.count++;
    }

    p->count = 0;
    {
        swp(&t.cap, &p->cap);
    }
    {
        Elem *od = p->data;
        p->data = t.data;
        t.data = od;
    }
    p->count = t.count;
    t.count = 0;
    func_ov007_021a7228(&t);
}
