#include "ffc/types.h"

typedef struct {
    void *vtbl;
    uint32_t pad[5];
    uint32_t f18;
} Obj;

extern void func_020553e8(uint32_t v);
extern void func_02056844(void *p);
extern uint8_t data_020b0698;

Obj *func_02055c7c(Obj *self) {
    self->vtbl = &data_020b0698;
    func_020553e8(self->f18);
    func_02056844(self);
    return self;
}
