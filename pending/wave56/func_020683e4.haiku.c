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

extern void func_02062930(void *self, uint32_t a, uint32_t b);
extern void *func_02081210(uint32_t v, uint32_t p);
extern void func_0206133c(void *object);
extern char data_020b19d4[];

Self *func_020683e4(Self *self, void *obj, void *p2, uint32_t p3, uint32_t p4, uint32_t p5)
{
    S8 s;
    uint32_t t;
    uint32_t r;
    void *zero;
    void **vt;
    uint32_t i;

    vt = *(void ***)obj;
    ((void (*)(S8 *, void *))vt[6])(&s, obj);
    func_02062930(self, s.a, s.b);
    self->vt = data_020b19d4;
    self->obj = obj;
    self->p2 = p2;
    self->p3 = p3;
    self->p4 = p4;
    self->z2c = 0;
    self->z30 = 0;
    self->z34 = 0;
    zero = 0;
    if (p5 == 0) {
        self->f38 = zero;
    } else {
        vt = *(void ***)p2;
        ((void (*)(uint32_t *, void *))vt[1])(&t, p2);
        self->f38 = func_02081210(t << 12, p5);
    }
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
    ((void (*)(uint32_t *, void *, uint32_t))vt[3])(&r, self->p2, 0x2d);
    self->r68 = r;
    return self;
}
