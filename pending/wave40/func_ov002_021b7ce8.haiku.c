#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } P4;

typedef struct Vt {
    void *s0;
    void (*s1)(void *);
    void (*s2)(void *);
} Vt;

typedef struct Sub {
    Vt *vt;
    uint8_t p4[8];
    int8_t f0c;
    uint8_t f0d[8];
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
extern Sub *func_02057478(Sub *p, P4 v);

void func_ov002_021b7ce8(Self *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, P4 s5, uint32_t a9, uint32_t a10)
{
    volatile P4 t;
    Sub *s;
    uint32_t q;
    if (self->obj) {
        self->obj->vt->s1(self->obj);
        self->obj = 0;
    }
    s = func_0205681c(0x74);
    if (s) {
        t = s5;
        s = func_02057478(s, *(P4 *)&a1);
    }
    self->obj = s;
    s->f24 = a9;
    if (s->b15) {
        if (a9 != 0) {
            q = a9 << 4;
        } else {
            q = 1;
        }
        s->f1c = q;
    }
    self->obj->f30 = a10;
    if (self->obj->f0c == 0) {
        self->obj->vt->s2(self->obj);
    }
}
