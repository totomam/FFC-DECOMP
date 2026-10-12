#include "ffc/types.h"

extern char data_020b0d38[];
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void *func_02056830(uint32_t size);

typedef struct Src {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Src;

typedef struct Sub {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Sub;

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t b13;
    uint8_t b14;
    uint8_t b15;
    uint32_t f18;
    int32_t f1c;
    uint32_t f20;
    int32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    Sub s34;
    Src *f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint8_t b50;
    void *f54;
    uint32_t f58;
    uint32_t f5c;
} Obj;

Obj *func_02058724(Obj *self, Src *p, uint32_t x, uint32_t lim)
{
    uint32_t n;
    uint32_t sz;
    int32_t z;
    Sub *q;

    self->f0c &= ~0xffu;
    z = 0;
    self->f1c = z - 1;
    self->f24 = z - 1;
    self->f2c = 1;
    self->b13 = z;
    self->vt = data_020b0d38;
    self->b14 = z;
    self->b15 = z;
    self->f30 = z;
    self->s34.a = z;
    self->f40 = p;
    self->f44 = x;
    q = &self->s34;
    q->b = z;
    q->c = z;

    n = func_0209a978(p->f08, p->f1c) - x;
    {
        uint32_t *w = (n < lim) ? &n : &lim;
        self->f48 = *w;
    }

    sz = (p->f1c * self->f48) >> 1;
    self->b50 = z;
    self->f4c = sz;
    self->f58 = z;
    self->f5c = z;
    self->f54 = func_02056830(sz << 1);
    self->f2c = 1;
    self->f28 = 1;
    return self;
}
