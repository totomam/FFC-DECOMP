#include "ffc/types.h"

extern void func_0206133c(void *object);
typedef struct { uint8_t v; } Byte1;
extern void func_0200d5d4(void *object, void *value, Byte1 flag);

typedef struct { int32_t x; int32_t y; } Pair;
typedef Pair (*PairFn)(void **self);

typedef struct Obj {
    uint32_t pad[6];
    void **data;
    uint32_t count;
    uint32_t cap;
    int32_t m24;
    int32_t m28;
    int32_t m2c;
    int32_t m30;
} Obj;

void func_020618f8(Obj *p, void **item) {
    Pair a, b, c, d;
    int32_t *s;
    Byte1 z[2];
    Byte1 *zp;
    uint8_t zero = 0;

    func_0206133c(item);
    zp = &z[1];
    if (p->count < p->cap) {
        uint32_t n = p->count + 1;
        p->count = n;
        p->data[n - 1] = item;
    } else {
                zp->v = zero;
        func_0200d5d4(&p->data, &item, *zp);
    }

    s = &a.x;
    a = ((PairFn)((void **)*item)[1])(item);
    if (p->m24 >= *s) s = &p->m24;
    p->m24 = *s;

    b = ((PairFn)((void **)*item)[1])(item);
    s = &b.y;
    if (p->m28 >= *s) s = &p->m28;
    p->m28 = *s;

    s = &c.x;
    c = ((PairFn)((void **)*item)[2])(item);
    if (*s >= p->m2c) s = &p->m2c;
    p->m2c = *s;

    d = ((PairFn)((void **)*item)[2])(item);
    s = &d.y;
    if (*s >= p->m30) s = &p->m30;
    p->m30 = *s;
}
