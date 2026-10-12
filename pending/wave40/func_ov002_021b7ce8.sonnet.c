#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } P4;
typedef struct { uint32_t a, b, c, d; } P2;

typedef struct Vt {
    void *s0;
    void (*s1)(void *);
    void (*s2)(void *);
} Vt;

typedef struct Sub {
    Vt *vt;
    uint8_t p4[8];
    uint32_t f0c;
    uint8_t f0d[5];
    uint8_t b15;
    uint8_t p16[6];
    uint32_t f1c;
    uint8_t p20[4];
    uint32_t f24;
    uint8_t p28[8];
    uint32_t f30;
} Sub;

typedef struct Self {
    uint8_t p[0x14];
    Sub *obj;
} Self;

extern void *func_0205681c(uint32_t size);
extern Sub *func_02057478(Sub *p, P4 v, P2 w);

void func_ov002_021b7ce8(Self *self, P4 v, P2 w, uint32_t a9, uint32_t a10)
{
    Sub *s;
    uint32_t q;
    if (self->obj) {
        if (self->obj) self->obj->vt->s1(self->obj);
        self->obj = 0;
    }
    s = func_0205681c(0x74);
    if (s) {
        s = func_02057478(s, v, w);
    }
    self->obj = s;
    s->f24 = a9;
    if (s->b15) {
        if (a9 == 0) s->f1c = 1; else s->f1c = a9 << 4;
    }
    self->obj->f30 = a10;
    if ((int8_t)self->obj->f0c == 0) {
        self->obj->vt->s2(self->obj);
    }
}
