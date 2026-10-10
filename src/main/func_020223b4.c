#include "ffc/types.h"

typedef struct {
    void *vtbl;
    uint32_t pad[2];
    uint32_t f3;
} Obj;

extern void func_02056858(uint32_t v);
extern void func_02056844(void *p);
extern uint8_t data_020ad6f4;

Obj *func_020223b4(Obj *self) {
    self->vtbl = &data_020ad6f4;
    func_02056858(self->f3);
    func_02056844(self);
    return self;
}
