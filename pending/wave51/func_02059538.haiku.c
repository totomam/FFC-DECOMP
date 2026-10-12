#include "ffc/types.h"

typedef struct Obj {
    void (**vtbl)(struct Obj *);
    uint32_t id;
} Obj;

typedef struct Lst {
    uint32_t pad;
    volatile uint32_t count;
} Lst;

typedef struct Self {
    uint8_t pad0[8];
    Lst *lst;
    uint32_t pad1;
    uint8_t *a;
    Obj *arr[1];
} Self;

typedef struct Guard {
    uint8_t *p;
    volatile uint8_t f;
} Guard;

extern void func_0208763c(uint8_t *p);
extern void func_02059c0c(Obj *o);
extern void func_02058048(uint8_t *a, uint32_t id, uint32_t z);
extern void func_02087678(uint8_t *p);

void func_02059538(Self *s, Obj *o)
{
    Guard g;
    uint32_t i;
    Lst *lst;
    Obj *t;

    g.p = s->a + 0x20;
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }

    lst = s->lst;
    for (i = 0; i < lst->count; i++) {
        if (s->arr[i] == o) {
            break;
        }
    }

    func_02059c0c(o);
    func_02058048(s->a, o->id, 0);
    s->arr[i] = 0;

    t = o;
    if (t != 0) {
        t->vtbl[1](t);
    }

    if (g.f) {
        func_02087678(g.p);
    }
}
