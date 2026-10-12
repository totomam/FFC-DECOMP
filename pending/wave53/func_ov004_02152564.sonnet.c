#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint16_t c;
    uint32_t d;
} Ent;

typedef struct {
    Ent *data;
    uint32_t count;
    uint32_t cap;
    uint32_t *ptr;
    uint32_t idx;
} Arr;

typedef struct { uint8_t x; } B;

extern int32_t func_ov004_021524e4(Arr *p, int32_t x);
extern void func_ov004_02152aec(Arr *t, int32_t v, B b);
extern void func_ov004_02152a3c(Arr *t);

void func_ov004_02152564(Arr *p, uint32_t n, Ent *src)
{
    Arr t;
    B b;
    Ent *dst, *end, *s;
    uint32_t k;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    t.idx = 0;
    t.ptr = &p->cap;
    b.x = 0;
    func_ov004_02152aec(&t, func_ov004_021524e4(p, p->count + n - p->cap), b);
    t.idx = p->count;
    dst = t.data + t.idx + t.count;
    for (k = n; k != 0; k--) {
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        dst->d = src->d;
        dst++;
    }
    t.count += n;
    s = p->data + p->count;
    dst = t.data + t.idx;
    while (s > p->data) {
        s--;
        dst--;
        dst->a = s->a;
        dst->b = s->b;
        dst->c = s->c;
        dst->d = s->d;
        t.idx--;
        t.count++;
    }
    p->count = 0;
    {
        uint32_t oc = p->cap; p->cap = t.cap; t.cap = oc;
        Ent *od = p->data; p->data = t.data; t.data = od;
    }
    p->count = t.count;
    t.count = 0;
    func_ov004_02152a3c(&t);
}
