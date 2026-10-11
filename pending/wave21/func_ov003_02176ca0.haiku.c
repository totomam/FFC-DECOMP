#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern uint32_t data_ov003_0217bbe8[];

typedef struct Obj {
    void *vt;
    char pad[0x7c];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Obj;

Obj *func_ov003_02176ca0(Obj *self, uint32_t p) {
    func_02056c9c(self, 0);
    self->vt = data_ov003_0217bbe8;
    self->a = p;
    self->b = 0;
    self->c = 0;
    self->d = 0;
    return self;
}
