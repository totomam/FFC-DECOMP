#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void *func_0203b95c(void *a, void *b, uint8_t c, int d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d5c80[];

typedef struct { uint32_t a, b; } S2;
typedef struct Obj Obj;
struct VT {
    void *p0; void (*dtor)(Obj *); void *p2; void (*set)(Obj *, S2);
    S2 (*f4)(Obj *);
    void *p5[5]; void (*f10)(Obj *);
    void *p11[3]; void (*f14)(Obj *, uint32_t, uint32_t); void (*f15)(Obj *, uint32_t);
};
struct Obj { struct VT *vt; };
typedef struct {
    uint8_t pad0[0x48]; uint8_t list[0x38];
    Obj *obj;
    uint8_t pad1[0x14];
    uint32_t a; uint8_t b; uint8_t pad2[3]; void *c;
} Self;

void func_ov002_021b60d0(Self *self, uint32_t idx)
{
    S2 tmp;
    void *node;

    tmp = self->obj->vt->f4(self->obj);
    func_02056bf4(self->list, self->obj);
    if (self->obj) {
        if (self->obj) self->obj->vt->dtor(self->obj);
        self->obj = 0;
    }
    node = ((void **)((uint8_t *)data_ov002_021d5c80 + (self->a << 4)))[idx];
    self->obj = (Obj *)func_0203b95c(node, self->c, self->b, 1);
    self->obj->vt->set(self->obj, tmp);
    self->obj->vt->f10(self->obj);
    self->obj->vt->f15(self->obj, 1);
    func_0205f2f0((void *)func_02064aa8(self->obj), 1);
    func_02056bc0(self->list, self->obj);
    self->obj->vt->f14(self->obj, 1, 0);
}
