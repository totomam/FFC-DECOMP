#include "ffc/types.h"

extern void func_ov004_02152258(void *p, uint32_t n);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Sub;

typedef struct {
    Sub s[4];
} Obj;

Obj *func_ov004_02150a4c(Obj *p, uint32_t a, uint32_t b) {
    Sub *q;
    uint32_t n;

    q = &p->s[1];
    q->b = 0;
    q->c = 0;
    q = &p->s[2];
    q->b = 0;
    q->c = 0;
    q = &p->s[3];
    q->b = 0;
    q->c = 0;
    p->s[0].a = 0;
    p->s[0].b = 0;
    p->s[0].c = 0;
    p->s[1].a = 0;
    p->s[2].a = 0;
    p->s[3].a = 0;

    n = a * b;
    if (n > p->s[0].c) {
        func_ov004_02152258(p, n);
    }
    if (n > p->s[1].c) {
        func_ov004_02152258(&p->s[1], n);
    }
    if (n > p->s[2].c) {
        func_ov004_02152258(&p->s[2], n);
    }
    if (n > p->s[3].c) {
        func_ov004_02152258(&p->s[3], n);
    }
    return p;
}
