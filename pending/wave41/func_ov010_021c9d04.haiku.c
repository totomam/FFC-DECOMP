#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void *func_0203bb94(void *a, int b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov010_021d1bd4[];
extern uint32_t data_ov010_021d1cbc[];

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Self {
    uint8_t pad[0x2ac];
    Obj *obj;
} Self;

void func_ov010_021c9d04(Self *self) {
    if (self->obj != 0) {
        func_02056bf4((uint8_t *)self + 0x48);
        if (self->obj != 0) {
            ((void (*)(Obj *))self->obj->vt[1])(self->obj);
        }
        self->obj = 0;
    }
    self->obj = func_0203bb94((void *)data_ov010_021d1bd4[1], 1, 0, 0);
    func_02056bc0((uint8_t *)self + 0x48, self->obj);
    ((void (*)(Obj *))self->obj->vt[10])(self->obj);
    ((void (*)(Obj *, int))self->obj->vt[8])(self->obj, 2);
    {
        uint32_t *p = data_ov010_021d1cbc;
        ((void (*)(Obj *, uint32_t, uint32_t))self->obj->vt[3])(self->obj, p[0], p[1]);
    }
}
