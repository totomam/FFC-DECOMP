#include "ffc/types.h"

extern void func_02062848(void *object);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern uint8_t data_ov005_02199278[];
extern uint8_t data_ov005_02199040[];

typedef struct Node {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
    uint8_t pad[3];
} Node;

typedef struct Self {
    void *vt;
    uint32_t pad[4];
    Node node;
    uint32_t f24, f28, f2c, f30, f34, f38;
    uint8_t f3c, f3d, f3e, f3f;
    uint32_t f40, f44;
} Self;

void *func_ov005_021959c0(Self *self, uint32_t a1, uint32_t a2)
{
    Node *n;
    Self *o;
    void *obj;
    void **vt;

    func_02062848(self);
    n = &self->node;
    n->f0 = 0;
    n->f4 = 0;
    n->f8 = 0;
    n->fc = 0;
    o = (Self *)n;
    if (o) o = (Self *)((uint8_t *)o - 0x14);
    n->f8 = (uint32_t)o;
    n->fc = 1;
    self->f3c = 1;
    self->f3d = 1;
    self->vt = data_ov005_02199278;
    self->f3e = 0;
    self->f24 = 0;
    self->f28 = 0;
    self->f2c = 0;
    self->f30 = 0;
    self->f34 = 0;
    self->f38 = 0;
    self->f40 = 0;
    self->f44 = a2;

    obj = func_0203b95c(*(void **)(data_ov005_02199040 + 0x14), a1, 0, 1);
    (*(void **)&self->f24) = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 3, 0);
    obj = (*(void **)&self->f24);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[0x2c / 4])(obj);

    if (self->f44 != 1) {
        func_0205f2f0((void *)func_02064aa8((*(void **)&self->f24)), 1);
    }

    if (self->f44 != 2) {
        obj = func_0203b95c(*(void **)(data_ov005_02199040 + 0x14), a1, 0, 1);
        (*(void **)&self->f28) = obj;
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(obj, 3, 0);
        obj = (*(void **)&self->f28);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x2c / 4])(obj);

        if (self->f44 != 1) {
            func_0205f2f0((void *)func_02064aa8((*(void **)&self->f28)), 1);
        }
    }

    return self;
}
