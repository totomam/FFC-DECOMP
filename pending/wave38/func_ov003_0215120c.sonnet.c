#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Elem;

typedef union {
    uint8_t b[8];
    uint32_t w[2];
} U8x8;

typedef struct {
    Elem *data;
    uint32_t size;
    uint32_t cap;
} Vec;

typedef struct {
    Elem *data;
    uint32_t size;
    uint32_t cap;
    uint32_t *capp;
    uint32_t oldsize;
} Tmp;

extern uint32_t func_ov003_0215118c(Vec *v, uint32_t a, uint32_t b);
typedef struct { uint8_t b; } S1;
extern void func_ov003_021512e4(Tmp *t, uint32_t n, S1 w);
extern void func_ov003_021512d4(Tmp *t);

void func_ov003_0215120c(Vec *p, uint32_t count, Elem *src)
{
    Tmp t;
    uint32_t total;
    uint32_t r;
    uint32_t tc;
    Elem *dst;
    Elem *end;
    Elem *begin;
    Elem *od;

    U8x8 u;
    uint32_t z;
    z = 0;
    t.data = (Elem *)z;
    t.size = z;
    t.cap = z;
    t.oldsize = z;
    t.capp = &p->cap;
    total = p->size + count;
    r = func_ov003_0215118c(p, total - p->cap, total);
    struct { uint8_t p[3]; S1 a; S1 b; uint8_t q[3]; } L;
    volatile uint8_t *pp = &L.a.b;
    *pp = (uint8_t)z;
    L.b.b = *pp;
    func_ov003_021512e4(&t, r, L.b);

    t.oldsize = p->size;
    dst = t.data + t.oldsize + t.size;
    if (count != 0) {
        do {
            if (dst != 0) {
                dst->a = src->a;
                dst->b = src->b;
            }
            count--;
            t.size++;
            dst++;
        } while (count != 0);
    }

    end = p->data + p->size;
    begin = p->data;
    dst = t.data + t.oldsize;
    if (end > begin) {
        do {
            end--;
            dst--;
            if (dst != 0) {
                dst->a = end->a;
                dst->b = end->b;
            }
            t.oldsize--;
            t.size++;
        } while (end > begin);
    }

    p->size = z;
    tc = p->cap;
    p->cap = t.cap;
    t.cap = tc;

    od = p->data;
    p->data = t.data;
    t.data = od;
    p->size = t.size;
    t.size = z;

    func_ov003_021512d4(&t);
}
