#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} Pair;

typedef struct {
    uint8_t pad[0x18];
    Pair *data;
    uint32_t count;
    uint32_t cap;
} Ctx;

typedef struct {
    uint8_t z;
    Pair p;
} Local;

typedef struct {
    uint8_t v;
} Tiny;

extern void func_ov003_0215bd44(void *vec, void *p, Tiny t);

void func_ov003_02155254(Ctx *s, uint16_t a, uint16_t b)
{
    Local l;
    Tiny t;
    uint16_t *q;
    uint32_t n;
    Pair *e;
    l.z = 0;
    l.p.a = a;
    l.p.b = b;
    q = &l.p.a;
    n = s->count;
    if (n < s->cap) {
        s->count = n + 1;
        e = s->data + n;
        e->a = q[0];
        e->b = q[1];
        return;
    }
    t.v = l.z;
    func_ov003_0215bd44(&s->data, q, t);
}
