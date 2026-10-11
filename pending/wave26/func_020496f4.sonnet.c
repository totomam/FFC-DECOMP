#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_020aff04[];
extern Pair data_020a6630;
extern Pair data_020aff14;

typedef struct { uint32_t vt; uint32_t pad[31]; Pair p; Pair q; } Obj;

void *func_020496f4(Obj *self) {
    func_02056c9c(self, 0);
    self->vt = (uint32_t)data_020aff04;
    self->p = data_020a6630;
    self->q.a = 0;
    self->q.b = 0;
    self->p = data_020aff14;
    return self;
}
