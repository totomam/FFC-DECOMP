#include "ffc/types.h"

extern uint32_t func_0206f5fc(void *v, uint32_t x);
extern void func_0206f908(void *t, uint32_t n, uint32_t z);
extern void func_0206f898(void *t);

typedef struct { uint32_t a; uint16_t b; uint32_t c; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

void func_0206f67c(Vec *v, uint32_t n, Elem *src) {
    Vec tmp;
    uint32_t z;
    uint32_t old;
    Elem *ps;
    Elem *pd;
    Elem *t;
    uint32_t i;
    uint32_t r;
    uint32_t ec;
    uint32_t cc;

    z = 0;
    tmp.data = 0;
    tmp.size = 0;
    tmp.cap = 0;
    old = v->size;
    r = func_0206f5fc(v, old + n - v->cap);
    func_0206f908(&tmp, r, z);

    pd = tmp.data + (v->size + tmp.size);
    if (n != 0) {
        i = n;
        do {
            *pd = *src;
            pd++;
            i--;
        } while (i != 0);
    }
    tmp.size += n;

    ps = v->data + v->size;
    pd = tmp.data + old;
    while (ps > v->data) {
        ps--;
        pd--;
        if (pd != 0) {
            *pd = *ps;
        }
        old--;
        tmp.size++;
    }

    t = v->data;
    cc = tmp.size;
    v->data = tmp.data;
    tmp.data = t;
    v->size = cc;
    tmp.size = 0;
    ec = v->cap;
    v->cap = tmp.cap;
    tmp.cap = ec;
    func_0206f898(&tmp);
}
