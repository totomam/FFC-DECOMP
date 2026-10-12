#include "ffc/types.h"

extern int32_t func_02071188(void *p, uint32_t v, void *q);
extern void func_02070a44(void *p);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Ent;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    Ent *arr;
    uint32_t n;
    uint32_t f14;
    uint32_t f18;
} Elem;

typedef struct {
    void *p0;
    uint8_t b4;
    uint8_t f5;
    uint8_t f6;
    uint8_t b7;
    uint32_t u8;
    void *pc;
    uint32_t u10;
    Elem *elems;
    uint32_t count;
} P;

void func_02071270(P *p)
{
    uint32_t i, j;

    p->f5 = 0;
    p->f6 = 0;
    for (i = 0; i < p->count; i++) {
        Elem *e = &p->elems[i];
        e->f4 = 0;
        e->f8 = 0;
        for (j = 0; j < e->n; j++) {
            e->arr[j].a = i;
            e->arr[j].b = i;
        }
    }
    for (i = 0; i < p->count; i++) {
        Elem *e = &p->elems[i];
        for (j = 0; j < e->n; j++) {
            if (func_02071188(p, e->arr[j].c, &e->arr[j]) == 0) {
                return;
            }
        }
    }
    if (func_02071188(p, 0, p->pc) == 0) {
        return;
    }
    p->f5 = 1;
    p->f6 = 1;
    func_02070a44(p->p0);
    func_02070a44(p->p0);
    func_02070a44(p->p0);
}
