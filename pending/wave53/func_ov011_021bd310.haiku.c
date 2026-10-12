#include "ffc/types.h"

typedef struct Obj Obj;

typedef struct Pair {
    uint32_t a;
    uint32_t b;
} Pair;


typedef struct VT {
    void *p0[3];
    void (*f0c)(Obj *o, Pair p);
    void *p10[4];
    void (*f20)(Obj *o, uint32_t a);
    void *p24;
    void (*f28)(Obj *o);
    void (*f2c)(Obj *o);
    void *p30[2];
    void (*f38)(Obj *o, uint32_t a, uint32_t b);
} VT;

struct Obj {
    VT *vt;
    uint8_t pad4[0x94 - 4];
    uint32_t f94;
    void *f98;
    void *f9c;
};

extern void func_02069210(Obj *object);
extern void func_02069320(Obj *object, uint32_t value);
extern void func_02069404(Obj *object, uint32_t value);
extern void *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern VT data_ov011_021cac4c[];
extern uint32_t data_ov011_021ca980[];
extern uint32_t data_ov011_021caa18[];

Obj *func_ov011_021bd310(Obj *self, uint32_t param)
{
    uint32_t *g;
    Pair *pair;

    g = data_ov011_021ca980;
    func_02069210(self);
    self->vt = (VT *)data_ov011_021cac4c;
    self->f94 = param;
    func_02069320(self, 2);
    func_02069404(self, 4);

    self->f98 = func_0203b95c(g[4], *(uint32_t *)(self->f94 + 0xb8), 2, 1);
    ((Obj *)self->f98)->vt->f38(self->f98, 2, 0);
    pair = (Pair *)data_ov011_021caa18;
    ((Obj *)self->f98)->vt->f0c(self->f98, *pair);
    ((Obj *)self->f98)->vt->f20(self->f98, 3);
    ((Obj *)self->f98)->vt->f28(self->f98);
    func_02056bc0((char *)self + 0x48, self->f98);

    self->f9c = func_0203b95c(g[4], *(uint32_t *)(self->f94 + 0xb8), 2, 1);
    ((Obj *)self->f9c)->vt->f38(self->f9c, 2, 0);
    ((Obj *)self->f9c)->vt->f0c(self->f9c, *pair);
    ((Obj *)self->f9c)->vt->f20(self->f9c, 3);
    ((Obj *)self->f9c)->vt->f2c(self->f9c);
    func_02056bc0((char *)self + 0x48, self->f9c);

    return self;
}
