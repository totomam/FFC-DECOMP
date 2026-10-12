#include "ffc/types.h"

extern int32_t func_020714b8(int32_t x);
extern void func_02071a74(void *t, int32_t n, uint8_t z);
extern void func_0207196c(void *t);

typedef struct { uint32_t a; uint32_t b; } Item;
typedef struct { Item *data; uint32_t size; uint32_t cap; uint32_t *p; uint32_t idx; } Tmp;
typedef struct { Item *data; uint32_t size; uint32_t off; } Vec;

void func_02071538(Vec *v, uint32_t n, Item *src) {
    Tmp t;
    uint8_t pad[8];
    Item *d;
    Item *end;
    uint32_t k;
    uint32_t oldoff;
    Item *old;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.idx = 0;
    t.p = &v->off;
    pad[3] = 0;
    {
        int32_t r = func_020714b8(v->size + n - v->off);
        func_02071a74(&t, r, pad[3]);
    }

    d = t.data + v->size + t.size;
    for (k = n; k != 0; k--) {
        d->a = src->a;
        d->b = src->b;
        d++;
    }
    t.size += n;

    end = v->data + v->size;
    t.idx = v->size;
    while (end > v->data) {
        end--;
        t.idx--;
        d = t.data + t.idx;
        d->a = end->a;
        d->b = end->b;
        t.size++;
    }

    v->size = 0;
    oldoff = v->off;
    v->off = t.cap;
    t.cap = oldoff;
    old = v->data;
    v->data = t.data;
    t.data = old;
    v->size = t.size;
    t.size = 0;

    func_0207196c(&t);
}
