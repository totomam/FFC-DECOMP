#include "ffc/types.h"

extern void func_02062848(void *object);
extern uint8_t data_020b1600[];

typedef struct {
    void *vtbl;
    uint32_t pad[4];
    uint32_t f14;
    uint32_t f18;
} Obj;

void *func_02062954(void *p)
{
    Obj *o = (Obj *)p;
    func_02062848(p);
    o->vtbl = data_020b1600;
    o->f14 = 0;
    o->f18 = 0;
    return p;
}
