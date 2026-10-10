#include "ffc/types.h"

extern void func_02062848(void *object);
extern uint8_t data_ov002_021d4fd0[];

typedef struct {
    void *vtbl;
    uint32_t f04[4];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} Obj;

void *func_ov002_0219cf90(void *self, uint32_t arg)
{
    Obj *o = (Obj *)self;
    func_02062848(self);
    o->f24 = arg;
    o->vtbl = data_ov002_021d4fd0;
    o->f14 = 0;
    o->f18 = 0;
    o->f1c = 0;
    o->f20 = 0;
    return self;
}
