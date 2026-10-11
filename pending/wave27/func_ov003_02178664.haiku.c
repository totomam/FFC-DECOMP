#include "ffc/types.h"

extern void func_02054144(int x);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern uint32_t data_ov003_0217bda0;

typedef struct Inner Inner;
struct Inner {
    void **vt;
};

typedef struct Obj Obj;
struct Obj {
    uint32_t vt;
    uint8_t pad[0xb0];
    Inner *child;
};

void *func_ov003_02178664(void *p)
{
    Obj *o = (Obj *)p;
    o->vt = (uint32_t)&data_ov003_0217bda0;
    if (o->child) {
        func_02054144(0);
        if (o->child) {
            ((void (*)(Inner *))o->child->vt[1])(o->child);
        }
        o->child = 0;
    }
    func_02056db0(o);
    func_02056844(o);
    return o;
}
