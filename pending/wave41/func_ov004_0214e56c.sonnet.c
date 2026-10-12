#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct Obj { void **vt; } Obj;
typedef Vec2 (*Fn6)(Obj *self);
typedef void (*FnV)(Obj *self, Vec2 v);

void func_ov004_0214e56c(uint8_t *self, Vec2 a, ...) {
    Vec2 t, v, n, m;
    Obj *o;

    t = ((Fn6)(*(Obj **)(self + 0x8c))->vt[6])(*(Obj **)(self + 0x8c));

    v.x = -(t.x - 256) / 2 + a.x;
    v.y = -(t.y - 192) / 2 + a.y;
    o = *(Obj **)(self + 0x8c);
    ((FnV)o->vt[3])(o, v);

    n.x = -a.x;
    n.y = -a.y;
    o = *(Obj **)(self + 0xe0);
    *(Vec2 *)((uint8_t *)o + 0x34) = n;

    m = n;
    o = *(Obj **)(self + 0x94);
    if (o != 0) {
        ((FnV)o->vt[3])(o, a);
    }

    o = *(Obj **)(self + 0x90);
    ((FnV)o->vt[3])(o, a);
}
