#include "ffc/types.h"

typedef struct { uint32_t a; uint8_t b; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; uint32_t *ptr; uint32_t n; } Tmp;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Arr;

extern uint32_t func_02031108(Arr *arr, uint32_t x);
extern void func_0203128c(Tmp *t, uint32_t r, uint32_t v);
extern void func_0203127c(Tmp *t);

void func_02031188(Arr *arr, uint32_t n, Elem *src) {
    Elem s;
    Tmp t;
    Elem *e;
    Elem *d;
    uint32_t r;
    uint32_t cap;
    uint32_t sz;
    uint8_t *p;

    t.data = 0;
    t.count = 0;
    t.cap = 0;
    t.n = 0;
    t.ptr = &arr->cap;

    r = func_02031108(arr, arr->size + n - arr->cap);

    p = (uint8_t *)&s;
    p = p + 3;
    *p = 0;
    s.b = *p;
    func_0203128c(&t, r, s.b);

    sz = arr->size;
    t.n = sz;
    d = (Elem *)((uint8_t *)t.data + sz * 8 + t.count * 8);
    if (n != 0) {
        uint32_t k = n;
        do {
            d->a = src->a;
            d->b = src->b;
            d++;
        } while (--k != 0);
    }
    t.count += n;

    e = arr->data + sz;
    d = t.data + t.n;
    while (e > arr->data) {
        e--;
        d--;
        *d = *e;
        t.n--;
        t.count++;
    }

    arr->size = 0;
    cap = arr->cap;
    arr->cap = t.cap;
    t.cap = cap;
    e = arr->data;
    arr->data = t.data;
    t.data = e;
    arr->size = t.count;
    t.count = 0;
    func_0203127c(&t);
}
