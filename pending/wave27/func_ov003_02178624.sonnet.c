#include "ffc/types.h"
typedef struct Obj Obj;
typedef struct Vt { void *f0; void (*f1)(Obj *); } Vt;
struct Obj { Vt *vt; uint8_t pad[0xb0]; Obj *sub; };
extern uint32_t data_ov003_0217bda0[];
extern void func_02054144(int x);
extern Obj *func_02056db0(Obj *o);
static inline Obj **fld(Obj *o) { return &o->sub; }
Obj *func_ov003_02178624(Obj *self)
{
    Obj *t;
    self->vt = (Vt *)data_ov003_0217bda0;
    t = *fld(self);
    if (t != 0) {
        Obj *s;
        func_02054144(0);
        s = *fld(self);
        if (s != 0) {
            if (s != 0) s->vt->f1(s);
            *fld(self) = 0;
        }
    }
    func_02056db0(self);
    return self;
}
