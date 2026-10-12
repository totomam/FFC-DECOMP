#include "ffc/types.h"

extern void func_0206133c(void *object);
extern void func_0200d5d4(void *object, void *value, uint8_t flag);

typedef struct { uint32_t x; uint32_t y; } Pair;
typedef struct { uint8_t v; } Byte1;
typedef Pair (*PairFn)(void **self);

typedef struct Obj {
    uint32_t pad[6];
    void **data;
    uint32_t count;
    uint32_t cap;
    uint32_t m24;
    uint32_t m28;
    uint32_t m2c;
    uint32_t m30;
} Obj;

void func_020618f8(Obj *p, void **item) {
    volatile Byte1 z;
    Pair d;
    Pair c;
    Pair b;
    Pair a;
    uint32_t *s;

    z.v = 0;
    func_0206133c(item);
    if (p->count < p->cap) {
        uint32_t i = p->count;
        p->count = i + 1;
        p->data[i] = item;
    } else {
        func_0200d5d4(&p->data, &item, z.v);
    }

    a = ((PairFn)((void **)*item)[1])(item);
    s = (p->m24 < a.x) ? &a.x : &p->m24;
    p->m24 = *s;

    b = ((PairFn)((void **)*item)[1])(item);
    s = (p->m28 < b.y) ? &b.y : &p->m28;
    p->m28 = *s;

    c = ((PairFn)((void **)*item)[2])(item);
    s = (c.x < p->m2c) ? &c.x : &p->m2c;
    p->m2c = *s;

    d = ((PairFn)((void **)*item)[2])(item);
    s = (d.y < p->m30) ? &d.y : &p->m30;
    p->m30 = *s;
}
