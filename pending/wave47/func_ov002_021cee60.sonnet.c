#include "ffc/types.h"
typedef struct { uint32_t w0; int32_t key; } Item;
typedef struct { Item *ptr; uint32_t x; } Pair;
typedef struct { Pair l; Pair f; } T;

static inline Item *cpy(T t, Item *d)
{
    while (t.f.ptr != t.l.ptr) {
        d->w0 = t.f.ptr->w0;
        d->key = t.f.ptr->key;
        t.f.ptr++;
        d++;
    }
    return d;
}

static inline int ne(Item *a, Item *ae, Item *b, Item *be){ int r = 0; if (a != ae && b != be) r = 1; return r; }
void func_ov002_021cee60(Item **out, Pair a, Pair ae, Pair b, Pair be, Item *dst)
{
    Item **pd = &dst;
    while (ne(a.ptr, ae.ptr, b.ptr, be.ptr)) {
        if (b.ptr->key < a.ptr->key) {
            (*pd)->w0 = b.ptr->w0;
            (*pd)->key = b.ptr->key;
            b.ptr++;
        } else {
            (*pd)->w0 = a.ptr->w0;
            (*pd)->key = a.ptr->key;
            a.ptr++;
        }
        (*pd)++;
    }
    Item *d = dst;
    if (a.ptr == ae.ptr) {
        T t; t.l = be; t.f = b;
        while (t.f.ptr != t.l.ptr) { d->w0 = t.f.ptr->w0; d->key = t.f.ptr->key; t.f.ptr++; d++; }
    } else {
        T t; t.l = ae; t.f = a;
        while (t.f.ptr != t.l.ptr) { d->w0 = t.f.ptr->w0; d->key = t.f.ptr->key; t.f.ptr++; d++; }
    }
    *out = d;
}
