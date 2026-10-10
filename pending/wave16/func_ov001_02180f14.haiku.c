#include "ffc/types.h"

extern void *func_ov000_0216591c(void *p);

typedef struct {
    uint8_t pad[0x90];
    void *flag;
    void *result;
} Obj;

void func_ov001_02180f14(Obj *self)
{
    if (self->flag) {
        return;
    }
    self->flag = self;
    self->result = func_ov000_0216591c(self);
}
