#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1[3];
} Elem;

typedef struct {
    Elem *begin;
    uint32_t size;
    uint32_t cap;
} Vec;

typedef struct {
    Elem *begin;
    uint32_t size;
    uint32_t cap;
    uint32_t *owner;
    uint32_t aux;
} Tmp;

extern uint32_t func_0200b574(Vec *a, uint32_t n);
extern void func_0200b838(Tmp *t, uint32_t n, uint32_t z);
extern void func_020095b8(void *dst, void *src);
extern void func_0200b808(Tmp *t);

void func_0200b738(Vec *a, uint32_t n, uint32_t *src) {
    Tmp t;
    uint32_t k;
    uint32_t r;
    Elem *e;
    Elem *d;
    Elem *s;
    Elem *b;
    uint32_t tmp;

    t.begin = 0;
    t.size = 0;
    t.cap = 0;
    t.owner = &a->cap;
    t.aux = 0;

    r = func_0200b574(a, a->size + n - a->cap);
    {
        union { uint32_t w; uint8_t b[4]; } u;
        u.b[3] = 0;
        func_0200b838(&t, r, u.w);
    }

    t.aux = a->size;
    k = t.aux;
    e = (Elem *)((uint8_t *)t.begin + a->size * 16 + t.size * 16);
    if (n != 0) {
        do {
            if (e != 0) {
                e->w0 = src[0];
                func_020095b8(&e->w1, &src[1]);
            }
            t.size++;
            e++;
            n--;
        } while (n != 0);
    }

    b = a->begin;
    s = a->begin + a->size;
    d = (Elem *)((uint8_t *)t.begin + k * 16);
    while (b < s) {
        s--;
        d--;
        if (d != 0) {
            d->w0 = s->w0;
            func_020095b8(&d->w1, &s->w1);
        }
        k--;
        t.size++;
    }

    {
        Elem *tb = t.begin;
        t.begin = a->begin;
        a->begin = tb;
    }
    tmp = a->size;
    a->size = t.size;
    t.size = tmp;
    tmp = a->cap;
    a->cap = t.cap;
    t.cap = tmp;

    func_0200b808(&t);
}
