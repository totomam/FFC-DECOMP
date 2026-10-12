#include "ffc/types.h"

extern uint8_t data_020b23a8[];
extern void func_02056858(void *p);

typedef struct {
    void *vt;
    uint8_t pad0[0x28 - 4];
    void *f28;
    void *f2c;
    void *f30;
    void *f34;
    int32_t f38;
    void *f3c;
    void *f40;
} Obj;

void *func_02074598(void *p)
{
    Obj *o = (Obj *)p;
    int32_t i;

    o->vt = data_020b23a8;
    if (o->f40 != 0) {
        func_02056858(o->f40);
        o->f40 = 0;
    }
    for (i = 0; i < o->f38; i++) {
        func_02056858(((void **)o->f34)[i]);
        ((void **)o->f34)[i] = 0;
    }
    func_02056858(o->f34);
    o->f34 = 0;
    if (o->f2c != 0) {
        func_02056858(o->f2c);
        o->f2c = 0;
    }
    func_02056858(o->f28);
    o->f28 = 0;
    return o;
}
