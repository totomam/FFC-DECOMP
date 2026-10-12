#include "ffc/types.h"

typedef struct Entry {
    uint32_t v;
    uint8_t f;
} Entry;

typedef struct Vec {
    uint32_t pad;
    Entry *buf;
    uint32_t count;
    uint32_t cap;
} Vec;

typedef struct Local {
    uint8_t a;
    uint32_t v;
    uint8_t f;
} Local;

extern void func_02030ed0(void *a, void *b, uint8_t c);

void func_0202e200(Vec *p, uint32_t val, uint8_t c)
{
    Local l;
    Entry *e;
    uint32_t n;
    l.v = val;
    l.f = c;
    if (p->count < p->cap) {
        n = p->count + 1;
        p->count = n;
        e = &p->buf[n - 1];
        e->v = l.v;
        e->f = l.f;
        return;
    }
    l.a = 0;
    func_02030ed0(&p->buf, &l.v, l.a);
}
