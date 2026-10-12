#include "ffc/types.h"

extern void func_020657e4(void *p, uint32_t n);
extern void func_ov004_02152258(void *p, uint32_t n);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Sub;

typedef struct {
    uint32_t h0;
    uint32_t h1;
    Sub s8;
    Sub s14;
    Sub s20;
    Sub s2c;
} Obj;

void *func_ov004_02150ab8(Obj *p, uint32_t a, uint32_t b) {
    uint32_t z = 0;
    uint32_t n;
    Sub *r = &p->s8;
    Sub *q;
    q = &p->s14;
    q->b = z;
    q->c = z;
    q = &p->s20;
    q->b = z;
    q->c = z;
    q = &p->s2c;
    q->b = z;
    q->c = z;
    n = a * b;
    p->s8.a = z;
    r->b = z;
    r->c = z;
    p->s14.a = z;
    p->s20.a = z;
    p->s2c.a = z;
    if (n > (r->c << 5)) {
        func_020657e4(r, n);
    }
    if (n > p->s14.c) {
        func_ov004_02152258(&p->s14, n);
    }
    if (n > p->s20.c) {
        func_ov004_02152258(&p->s20, n);
    }
    return p;
}
