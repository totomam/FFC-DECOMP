#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    void *vt;
    uint8_t pad[0xb0];
    Obj *sub;
};

typedef struct Vt {
    void *f0;
    void (*f1)(Obj *);
} Vt;

extern uint32_t data_ov003_0217bda0[];
extern void func_02054144(int x);
extern Obj *func_02056db0(Obj *o);

Obj *func_ov003_02178624(Obj *self)
{
    Obj *s;
    self->vt = data_ov003_0217bda0;
    if (self->sub == 0) {
        goto end;
    }
    func_02054144(0);
    s = self->sub;
    if (s == 0) {
        goto end;
    }
    if (s != 0) {
        Vt *v = (Vt *)s->vt;
        v->f1(s);
    }
    self->sub = 0;
end:
    func_02056db0(self);
    return self;
}
