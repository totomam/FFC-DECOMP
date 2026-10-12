#include "ffc/types.h"

extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_02056bf4(void *o);
extern void func_02056bc0(void *o, void *n);
extern uint32_t func_02064aa8(const void *o);
extern void func_0205f2f0(void *o, uint32_t v);
extern uint8_t data_ov009_021af7c0[];

typedef struct { uint32_t a, b; } Pair;
typedef struct Obj { void **vt; } Obj;
typedef struct {
    uint8_t p0[0x84]; void *f84; void *f88; void *f8c; Obj *f90;
    uint8_t p1[0x0e]; uint8_t fa2; uint8_t pad; uint32_t fa4; uint32_t fa8;
} S;

void func_ov009_02199d98(S *self, uint32_t flag)
{
    Obj *o = self->f90;
    if (o != 0) {
        if (self->fa2 == flag) {
            ((void (*)(Obj *, int, int))o->vt[14])(o, 1, 0);
            o = self->f90;
            ((void (*)(Obj *))o->vt[11])(o);
        } else {
            func_02056bf4(self->f8c);
            o = self->f90;
            if (o != 0) {
                if (o != 0) ((void (*)(Obj *))o->vt[1])(o);
            }
            self->f90 = 0;
        }
    }
    if (self->f90 == 0) {
        uint32_t a;
        Pair pr;
        if (flag == 0) a = *(uint32_t *)(data_ov009_021af7c0 + 0xc);
        else a = *(uint32_t *)(data_ov009_021af7c0 + 0x20);
        o = (Obj *)func_0203b95c(a, self->f84, 0, 1);
        self->f90 = o;
        ((void (*)(Obj *, int, int))o->vt[14])(o, 1, 0);
        pr.a = self->fa4 + 0x10;
        pr.b = self->fa8;
        o = self->f90;
        ((void (*)(Obj *, Pair))o->vt[3])(o, pr);
        o = self->f90;
        ((void (*)(Obj *, int))o->vt[8])(o, 1);
        o = self->f90;
        ((void (*)(Obj *))o->vt[11])(o);
        func_02056bc0(self->f8c, self->f90);
        func_0205f2f0((void *)func_02064aa8(self->f90), 1);
    }
}
