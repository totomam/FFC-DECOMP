#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02071f80(void *self);
extern char data_020b2518[];

typedef struct {
    void *vtbl;
    uint32_t unk4;
    void *field8;
    uint8_t flag;
} FuncObj;

void *func_02071ee8(void *p)
{
    FuncObj *self = (FuncObj *)p;
    self->vtbl = data_020b2518;
    self->flag = 1;
    self->field8 = func_0205681c(12);
    func_02071f80(self);
    return self;
}
