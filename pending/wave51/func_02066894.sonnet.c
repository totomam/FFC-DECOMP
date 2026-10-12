#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Triple;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t rest[5];
} Elem;

typedef struct {
    uint32_t hdr;
    uint32_t *tbl;
} Tbl;

typedef struct {
    uint32_t pad0[9];
    uint32_t f24;
    uint32_t f28;
    Elem *f2c;
    uint32_t f30;
    uint32_t pad1[6];
    Tbl *f4c;
} Obj;

void func_02066894(Obj *self, Triple s)
{
    uint32_t i;
    volatile uint32_t d3, d4, d1, d2;
    self->f24 = s.a;
    self->f28 = s.b;
    for (i = 0; i < self->f30; i++) {
        uint32_t val = s.a + self->f2c[i].w0;
        uint32_t t = s.b + self->f2c[i].w1;
        uint32_t *p = &self->f4c->tbl[i * 2];
        uint32_t word = *p;
        d1 = val;
        uint32_t lo = (uint8_t)t;
        word = (word & 0xfe00ffffu) | ((val << 23) >> 7);
        word &= ~0xffu;
        word |= (uint8_t)lo;
        *p = word;
        d2 = t; d3 = val; d4 = t;
    }
}
