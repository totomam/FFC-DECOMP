#include "ffc/types.h"

extern uint32_t data_020b0c94[];
extern void func_02056844(void *p);

typedef struct Sub {
    void (**vt)(void *);
} Sub;

typedef struct Obj {
    void *vt;
    uint8_t pad[0x20];
    Sub *sub;
} Obj;

void *func_02057674(void *self)
{
    Obj *o = (Obj *)self;
    o->vt = data_020b0c94;
    Sub *s = o->sub;
    if (s != 0) {
        s->vt[1](s);
    }
    func_02056844(o);
    return o;
}
