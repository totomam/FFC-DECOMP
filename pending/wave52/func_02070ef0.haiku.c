#include "ffc/types.h"

extern uint32_t func_02070a44(uint32_t);
extern uint32_t func_0209a978(uint32_t, uint32_t);
extern uint32_t func_02071314(void *, void *, uint8_t);

typedef struct {
    uint32_t a;
    uint32_t b;
} Ent;

typedef struct {
    uint32_t h;
    uint32_t pad[7];
    Ent *arr;
    uint32_t count;
    uint32_t cap;
} Obj;

uint32_t func_02070ef0(Obj *p, uint32_t x) {
    Ent tmp;
    uint32_t val;
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t z = 0;

    if (p->count == 0) {
        val = 0;
    } else {
        uint32_t idx = p->count - 1;
        Ent *base = p->arr;
        Ent *e = &base[idx];
        a = func_02070a44(p->h);
        b = func_02070a44(p->h);
        c = func_02070a44(p->h);
        val = a * func_0209a978(b + e->b + e->a - 1, c);
    }

    tmp.a = x;
    tmp.b = val;
    if (p->count < p->cap) {
        p->arr[p->count] = tmp;
        p->count = p->count + 1;
    } else {
        func_02071314(&p->arr, &tmp, z);
    }
    return p->count;
}
