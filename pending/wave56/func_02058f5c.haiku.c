#include "ffc/types.h"

typedef struct { uint32_t a; int16_t b; uint16_t c; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; uint32_t *ref; uint32_t idx; } Tmp;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } Vec;

extern int func_02058edc(Vec *v, int n);
extern void func_0205903c(Tmp *t, int n, int z);
extern void func_0205902c(Tmp *t);

void func_02058f5c(Vec *v, int n, Elem *src) {
    uint8_t buf[8];
    uint8_t *q;
    uint8_t *p3;
    Tmp t;
    Elem *dst;
    Elem *end;
    Elem *beg;
    Elem *dd;
    Elem *olddata;
    uint32_t oldcap;
    int i;
    int need;

    t.data = 0;
    t.size = 0;
    t.cap = 0;
    t.idx = 0;
    t.ref = &v->cap;
    need = func_02058edc(v, (int)(v->size + n - v->cap));
    uint8_t x;
    p3 = buf + 3;
    *p3 = 0;
    x = *p3;
    buf[4] = x;
    q = buf;
    q -= 4;
    *q = x;
    func_0205903c(&t, need, *(int *)q);
    dst = t.data + v->size + t.size;
    i = n;
    while (i != 0) {
        i--;
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        dst++;
    }
    t.size = t.size + n;
    beg = v->data;
    end = beg + v->size;
    dd = t.data + v->size;
    t.idx = v->size;
    if (end > beg) {
        do {
            end--;
            dd--;
            *dd = *end;
            t.idx--;
            t.size++;
        } while (end > beg);
    }
    v->size = 0;
    oldcap = v->cap;
    v->cap = t.cap;
    t.cap = oldcap;
    olddata = v->data;
    v->data = t.data;
    t.data = olddata;
    v->size = t.size;
    t.size = 0;
    func_0205902c(&t);
}
