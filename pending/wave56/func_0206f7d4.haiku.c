#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Elem;
typedef struct { uint32_t a; uint16_t b; } Src;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

extern uint32_t func_0206f754(Vec *v, uint32_t n);
extern void func_0206f8b8(Vec *t, uint32_t cap, uint32_t z);
extern void func_0206f8a8(Vec *t);

typedef struct {
    uint8_t b[8];
    Vec t;
    uint32_t *capp;
    uint32_t oldsize;
} Local;

void func_0206f7d4(Vec *v, uint32_t n, Src *src)
{
    Local L;
    Elem *dst;
    Elem *end;
    Elem *begin;
    uint32_t tmp;
    uint32_t newcap;
    uint32_t i;
    uint8_t z;

    L.t.data = 0;
    L.t.size = 0;
    L.t.cap = 0;
    L.capp = &v->cap;
    L.oldsize = 0;
    newcap = func_0206f754(v, v->size + n - v->cap);
    L.b[3] = 0;
    z = L.b[3];
    func_0206f8b8(&L.t, newcap, z);

    L.oldsize = v->size;
    dst = L.t.data + L.oldsize + L.t.size;
    if (n != 0) {
        i = n;
        do {
            dst->a = src->a;
            ((uint16_t *)dst)[2] = src->b;
            dst++;
            i--;
        } while (i != 0);
    }
    L.t.size += n;

    end = v->data + v->size;
    begin = v->data;
    dst = L.t.data + L.oldsize;
    while (end > begin) {
        end--;
        dst--;
        if (dst != 0) {
            *dst = *end;
        }
        L.oldsize--;
        L.t.size++;
    }

    v->size = 0;
    tmp = v->cap;
    v->cap = L.t.cap;
    L.t.cap = tmp;
    dst = v->data;
    v->data = L.t.data;
    L.t.data = dst;
    v->size = L.t.size;
    L.t.size = 0;
    func_0206f8a8(&L.t);
}
