#include "ffc/types.h"

extern void *data_020afac0;
extern void func_02056c4c(void *p);
extern void func_02056db0(void *p);

typedef struct {
    void *vtbl;
    uint8_t pad[0x14 - 4];
} Obj;

void *func_02046f9c(void *a) {
    Obj *self = (Obj *)a;
    self->vtbl = &data_020afac0;
    func_02056c4c((uint8_t *)self + 0x14);
    func_02056db0(self);
    return self;
}
