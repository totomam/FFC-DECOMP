#include "ffc/types.h"

extern void func_02069600(void *self, void *arg);

struct Obj;
struct VT {
    void (*f0)(struct Obj *);
    void (*f1)(struct Obj *);
};
struct Obj {
    struct VT *vt;
};

struct Ctx {
    uint8_t pad[0xc0];
    struct Obj *a;
    struct Obj *b;
    struct Obj *c;
};

void func_ov007_0219ed7c(struct Ctx *self)
{
    func_02069600(self, self->a);
    func_02069600(self, self->b);
    func_02069600(self, self->c);

    if (self->a) {
        if (self->a) {
            self->a->vt->f1(self->a);
        }
        self->a = 0;
    }
    if (self->b) {
        if (self->b) {
            self->b->vt->f1(self->b);
        }
        self->b = 0;
    }
    if (self->c) {
        if (self->c) {
            self->c->vt->f1(self->c);
        }
        self->c = 0;
    }
}
