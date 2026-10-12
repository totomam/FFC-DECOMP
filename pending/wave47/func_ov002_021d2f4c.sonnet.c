#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Elem;
typedef struct { Elem *data; uint32_t count; uint32_t cap; } Vec;

typedef struct {
    uint32_t pad0;
    uint32_t pad1;
    Vec tmp;
    uint32_t *capp;
    uint32_t old;
} Local;

extern uint32_t func_ov002_021d2c1c(uint32_t x);
extern void func_ov002_021d3038(Vec *tmp, uint32_t n);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void *func_020903cc(void *object, int c, uint32_t len);
extern void func_ov002_021d3028(Vec *tmp);

void func_ov002_021d2f4c(Vec *v, uint32_t n, const Elem *src) {
    Local l;
    Elem *dst;
    uint32_t m;
    uint32_t i;
    uint32_t c;

    l.tmp.data = 0;
    l.tmp.count = 0;
    l.tmp.cap = 0;
    l.old = 0;
    l.capp = &v->cap;
    func_ov002_021d3038(&l.tmp, func_ov002_021d2c1c(v->count + n - v->cap));
    l.old = v->count;
    dst = l.tmp.data + l.old + l.tmp.count;
    for (i = n; i != 0; i--) {
        dst->a = src->a;
        dst->b = src->b;
        dst++;
    }
    l.tmp.count += n;
    m = (uint32_t)((v->data + v->count) - v->data);
    l.old -= m;
    func_02090380(l.tmp.data + l.old, v->data, m * 8);
    func_020903cc(v->data, 0, m * 8);
    l.tmp.count += m;
    v->count = 0;
    c = v->cap; v->cap = l.tmp.cap; l.tmp.cap = c;
    {
        Elem *d = v->data; v->data = l.tmp.data; l.tmp.data = d;
    }
    v->count = l.tmp.count;
    l.tmp.count = 0;
    func_ov002_021d3028(&l.tmp);
}
