#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef void (*VFn)(void *self, Pair p);
typedef struct Sub { VFn *vt; } Sub;
typedef struct Obj {
    uint32_t _0[5];
    Sub *p14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} Obj;

void func_ov011_021bd738(Obj *self, Pair v) {
    Pair buf[2];
    Pair *pv = &v;
    buf[0] = *pv;
    uint32_t a = buf[0].a;
    uint32_t b = buf[0].b;
    self->f20 += a - self->f18;
    self->f24 += b - self->f1c;
    self->f18 = a;
    self->f1c = b;
    buf[1] = buf[0];
    Sub *s = self->p14;
    s->vt[3](s, buf[1]);
}
