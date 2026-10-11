#include "ffc/types.h"

extern uint8_t data_ov002_021d4fd0[];
extern void func_02059538(void *p, uint32_t x);
extern void func_02062868(void *p);
extern void func_02056844(void *p);

typedef struct {
    uint32_t vtbl;
    uint8_t pad[0x18];
    void *ptr;
    uint32_t val;
} Obj;

Obj *func_ov002_0219d074(Obj *self)
{
    self->vtbl = (uint32_t)data_ov002_021d4fd0;
    if (self->ptr != 0) {
        func_02059538(self->ptr, self->val);
    }
    func_02062868(self);
    func_02056844(self);
    return self;
}
