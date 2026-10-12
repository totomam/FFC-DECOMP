#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint32_t *p4;
    uint32_t p8;
} Obj;

extern char data_020b0688[];
extern void func_02055b88(Obj *self, uint32_t v);
extern void func_0200d5ec(void *p);
extern void func_02056844(Obj *self);

Obj *func_02055a88(Obj *self) {
    self->vt = data_020b0688;
    while (self->p8 != 0) {
        func_02055b88(self, *self->p4);
    }
    func_0200d5ec(&self->p4);
    func_02056844(self);
    return self;
}
