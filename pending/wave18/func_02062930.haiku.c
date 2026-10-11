#include "ffc/types.h"

extern void func_02062848(void *object);
extern uint8_t data_020b1600[];

typedef struct {
    void *vt;
    uint32_t pad[4];
    uint32_t f14;
    uint32_t f18;
} Obj;

void *func_02062930(Obj *o, ...)
{
    Obj *p = o;
    func_02062848(p);
    p->vt = data_020b1600;
    p->f14 = ((uint32_t *)&o)[1];
    p->f18 = ((uint32_t *)&o)[2];
    return p;
}
