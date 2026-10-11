#include "ffc/types.h"

extern uint32_t func_020370bc(uint32_t x);
extern void func_0200b994(void *p, uint32_t v);

typedef struct {
    uint32_t pad[2];
    void *obj;
} FuncObj;

void func_02035100(FuncObj *self, uint32_t arg)
{
    if (self->obj != 0) {
        uint32_t v = func_020370bc(arg);
        func_0200b994(self->obj, v);
    }
}
