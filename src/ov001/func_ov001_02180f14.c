#include "ffc/types.h"

extern uint32_t func_ov000_0216591c();

typedef struct {
    uint8_t pad[0x90];
    uint32_t flag;
    uint32_t result;
} Obj;

void func_ov001_02180f14(Obj *self)
{
    if (self->flag == 0) {
        self->flag = 1;
        self->result = func_ov000_0216591c();
    }
}
