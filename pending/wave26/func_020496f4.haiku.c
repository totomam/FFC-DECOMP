#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02056c9c(void *p, uint32_t v);
extern uint32_t data_020aff04[];
extern Pair data_020a6630;
extern Pair data_020aff14;

typedef struct { uint32_t vt; uint32_t pad[31]; uint32_t x; uint32_t y; uint32_t z; uint32_t w; } Obj;

void *func_020496f4(Obj *self) {
    uint32_t a, b;
    func_02056c9c(self, 0);
    self->vt = (uint32_t)data_020aff04;
    a = data_020a6630.a;
    b = data_020a6630.b;
    self->x = a;
    self->y = b;
    self->z = 0;
    self->w = 0;
    a = data_020aff14.a;
    b = data_020aff14.b;
    self->x = a;
    self->y = b;
    return self;
}
