#include "ffc/types.h"

extern uint32_t func_ov007_021a70a8(void *v, int32_t x);
extern void func_ov007_021a728c(void *t, uint32_t a, uint32_t b);
extern void func_ov007_021a7228(void *t);

typedef struct { uint32_t w[6]; } Elem;
typedef struct { Elem *data; int32_t count; int32_t cap; } Vec;
typedef struct { Elem *data; int32_t count; int32_t cap; int32_t *ref; int32_t orig; } Tmp;

void func_ov007_021a7128(Vec *p, int32_t n, Elem *src)
{
    volatile uint8_t pad[8];
    Tmp t;
    int32_t k;
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
        pad[3] = 0;
        func_ov007_021a728c(&t, r, pad[3]);
    }
    t.orig = p->count;
    dst = t.data + p->count + t.count;

    k = n;
    while (k != 0) {
        if (dst) {
            *dst = *src;
        }
        t.count++;
        dst++;
        k--;
    }

    pe = p->data + p->count;
    te = t.data + t.orig;
    while (pe > p->data) {
        pe--;
        te--;
        if (te) {
            *te = *pe;
        }
        t.orig--;
        t.count++;
    }

    p->count = 0;
    {
        int32_t oc = p->cap;
        p->cap = t.cap;
        t.cap = oc;
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
