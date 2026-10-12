#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern void func_0202cffc(void *h, void *s, void *p, uint32_t flag);
extern void func_0202d190(void *a, void *h);
extern void func_0202d17c(void *h);
extern void func_02056844(void *p);
extern uint8_t data_020ad7a0[];

typedef struct Sub {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Sub;

typedef struct Outer {
    uint32_t f0;
    Sub *p;
} Outer;

typedef struct Holder {
    uint32_t tag;
    Sub *b;
    Sub *c;
} Holder;

typedef struct Local {
    uint32_t pad[3];
    Sub **pl;
    Sub *s;
    Holder h;
} Local;

void func_0202cf3c(Outer *a, Outer *o) {
    Local L;
    Sub *t;
    Sub *x;
    uint32_t flag;

    if (o->p == 0) {
        return;
    }
    x = func_0205681c(16);
    if (x == 0) {
        func_02091a24(data_020ad7a0);
        func_0208f42c();
    }
    L.pl = &a->p;
    L.s = x;
    if (x) {
        x->fc = o->p->fc;
    }
    flag = 0;
    L.h.tag = 0;
    L.h.b = 0;
    L.h.c = (Sub *)&L.h.b;
    L.s->f4 = 0;
    L.s->f0 = 0;
    L.s->f8 = (uint32_t)&L.h.b | (L.s->f8 & 1);
    if (o->p->f8 & 1) {
        flag = 1;
    }
    if (flag) {
        L.s->f8 |= 1;
    } else {
        L.s->f8 &= ~1;
    }
    L.h.tag = 1;
    L.h.b = L.s;
    L.h.c = L.s;
    t = L.s;
    L.s = 0;
    if (o->p->f4) {
        func_0202cffc(&L.h, t, o->p, 0);
    }
    if (o->p->f0) {
        func_0202cffc(&L.h, L.h.b, o->p, 1);
    }
    func_0202d190(a, &L.h);
    func_0202d17c(&L.h);
    if (L.s) {
        func_02056844(L.s);
    }
}
