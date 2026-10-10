#include "ffc/types.h"

extern void func_02035d34(void *object);
extern char data_020ae654[];

typedef struct {
    void *vtbl;
    uint32_t f4;
    uint32_t flags;
} Obj;

void *func_02035e10(void *p)
{
    Obj *o = (Obj *)p;
    func_02035d34(p);
    o->vtbl = data_020ae654;
    o->flags &= 0xfffffc00;
    return o;
}
