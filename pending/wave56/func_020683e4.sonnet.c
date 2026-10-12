#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

typedef struct Self {
    void *vt;
    uint32_t w04[6];
    void *obj;
    void *p2;
    uint32_t p3;
    uint32_t p4;
    uint32_t z2c;
    uint32_t z30;
    uint32_t z34;
    void *f38;
    uint32_t z3c[4];
    uint32_t arr[3];
    uint32_t z58;
    uint32_t z5c;
    uint32_t z60;
    uint32_t z64;
    uint32_t r68;
    uint8_t b6c;
    uint8_t b6d;
} Self;

extern void func_02062930(void *self, S8 s);
extern void *func_02081210(void *object, void *p);
extern void func_0206133c(void *object);
extern char data_020b19d4[];

Self *func_020683e4(Self *self, void *obj, void *p2, uint32_t p3, uint32_t p4, uint32_t p5)
{
    S8 s;
    S8 t, r;
    S8 z, v, *pp;
    void **vt;
    uint32_t i;

    vt = *(void ***)obj;
    ((void (*)(S8 *, void *))vt[6])(&s, obj);
    func_02062930(self, s);
    self->vt = data_020b19d4;
    self->obj = obj;
    self->p2 = p2;
    self->p3 = (&p3)[0];
    self->p4 = (&p3)[1];
    self->z2c = 0;
    self->z30 = 0;
    self->z34 = 0;
    if ((&p3)[2] == 0) {
        z.a = 0;
        pp = &z;
    } else {
        vt = *(void ***)p2;
        ((void (*)(uint32_t *, void *))vt[1])((uint32_t *)&t, p2);
        v.a = (uint32_t)func_02081210((void *)(t.a << 12), (void *)(&p3)[2]);
        pp = &v;
    }
    self->f38 = (void *)pp->a;
    for (i = 0; i < 4; i++) {
        self->z3c[i] = 0;
    }
    for (i = 0; i < 3; i++) {
        self->arr[i] = 0;
    }
    self->b6c = 0;
    self->b6d = 0;
    self->z58 = 0;
    self->z5c = 0;
    self->z60 = 0;
    func_0206133c(self->p2);
    vt = *(void ***)self->p2;
    ((void (*)(uint32_t *, void *, uint32_t))vt[3])((uint32_t *)&r, self->p2, 0x2d);
    self->r68 = r.a;
    return self;
}
