#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; } Vec;
typedef struct { uint8_t v; } Tag;

extern uint32_t func_ov004_02148570(uint32_t x);
extern void func_ov004_02148804(Vec *t, uint32_t n, Tag init);
extern void func_ov004_021487f4(Vec *t);

void func_ov004_0214872c(Vec *v, uint32_t n, Elem *src)
{
    Vec t;
    uint32_t *capp;
    uint32_t oc;
    uint32_t sz;
    Elem *e;
    Elem *dst;
    Tag z, z2;
    uint32_t tmp;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    oc = 0;
    capp = &v->cap;
    oc = v->count;
    sz = func_ov004_02148570(oc + n - v->cap);
    z.v = 0;
    z2 = z;
    func_ov004_02148804(&t, sz, z2);

    dst = t.data + oc + t.count;
    if (n != 0) {
        do {
            if (dst != 0) {
                *dst = *src;
            }
            t.count++;
            dst++;
            n--;
        } while (n != 0);
    }

    e = v->data + v->count;
    dst = t.data + oc;
    while (e > v->data) {
        e--;
        dst--;
        if (dst) *dst = *e;
        oc--;
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
