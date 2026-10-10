#include "ffc/types.h"

typedef struct {
    void *vtbl;
    uint32_t pad[3];
    uint32_t f10;
} Obj;

extern void func_02056858(uint32_t v);
extern void func_02070a28(void *p);
extern uint8_t data_020b21e4;

Obj *func_02070ad0(Obj *self) {
    self->vtbl = &data_020b21e4;
    func_02056858(self->f10);
    func_02070a28(self);
    return self;
}
