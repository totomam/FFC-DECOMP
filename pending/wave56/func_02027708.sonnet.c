#include "ffc/types.h"

typedef struct { uint16_t h[4]; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; uint32_t *ref; uint32_t idx; } Tmp;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

extern uint32_t func_02027688(Vec *v, uint32_t x);
extern void func_020277fc(Tmp *t, uint32_t cap, uint32_t z);
extern void func_020277ec(Tmp *t);

void func_02027708(Vec *v, uint32_t n, const Elem *src) {
    uint8_t pad[8];
    uint8_t *pz;
    Tmp t;
    uint32_t cap;
    Elem *d;
    Elem *s;
    uint32_t i;
    uint32_t zero;
    uint32_t count;

    count = n;
    zero = 0;
    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.ref = &v->cap;
    t.idx = zero;
    cap = func_02027688(v, v->size + count - v->cap);
    pz = &pad[3];
    *pz = zero;
    pad[4] = *pz;
    func_020277fc(&t, cap, pad[4]);
    t.idx = v->size;

    d = t.data + (v->size + t.size);
    for (i = 0; i < count; i++) {
        d->h[0] = src->h[0];
        d->h[1] = src->h[1];
        d->h[2] = src->h[2];
        d->h[3] = src->h[3];
        d++;
        src++;
    }
    t.size += count;

    s = v->data + v->size;
    d = t.data + t.idx;
    while (s > v->data) {
        s--;
        d--;
        d->h[0] = s->h[0];
        d->h[1] = s->h[1];
        d->h[2] = s->h[2];
        d->h[3] = s->h[3];
        t.idx--;
        t.size++;
    }

    v->size = 0;
    {
        uint32_t oc = v->cap;
        v->cap = t.cap;
        t.cap = oc;
    }
    {
        Elem *od = v->data;
        v->data = t.data;
        t.data = od;
    }
    v->size = t.size;
    t.size = 0;
    func_020277ec(&t);
}
