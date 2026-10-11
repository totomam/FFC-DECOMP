#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} T;

typedef struct {
    uint32_t f00;
    uint8_t f04;
    uint8_t f05;
    uint8_t f06;
    uint8_t f07;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    T t14;
    T t20;
} S;

void func_02070dfc(S *p, uint32_t v) {
    T *t;
    p->f00 = v;
    t = &p->t14;
    t->b = 0;
    t->c = 0;
    p->t14.a = 0;
    p->t20.a = 0;
    t = &p->t20;
    t->b = 0;
    t->c = 0;
    p->f04 = 0;
    p->f05 = 0;
    p->f06 = 0;
}
