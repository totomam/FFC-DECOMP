#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; } Vec;

extern uint32_t func_ov004_02148570(uint32_t x);
extern void func_ov004_02148804(Vec *t, uint32_t n, uint32_t init);
extern void func_ov004_021487f4(Vec *t);

void func_ov004_0214872c(Vec *v, uint32_t n, Elem *src)
{
    Vec t;
    uint32_t *capp;
    uint32_t oc;
    uint32_t sz;
    uint32_t k;
    Elem *e;
    Elem *dst;
    uint32_t tmp;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    tmp = 0;
    capp = &v->cap;
    oc = v->count;
    sz = func_ov004_02148570(v->count + n - v->cap);
    func_ov004_02148804(&t, sz, 0);

    if (n != 0) {
        do {
            dst = t.data + oc + t.count;
            if (dst != 0) {
                *dst = *src;
            }
            t.count++;
            n--;
        } while (n != 0);
    }

    e = v->data + oc;
    k = oc;
    while (e > v->data) {
        e--;
        k--;
        t.data[k] = *e;
        t.count++;
    }

    v->count = 0;
    tmp = *capp;
    *capp = t.cap;
    t.cap = tmp;
    {
        Elem *d = v->data;
        v->data = t.data;
        t.data = d;
    }
    v->count = t.count;
    t.count = 0;
    func_ov004_021487f4(&t);
}
