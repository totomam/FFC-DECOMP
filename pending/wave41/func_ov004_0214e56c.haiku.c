#include "ffc/types.h"

typedef struct { int32_t x; int32_t y; } Vec2;
typedef struct Obj { void **vt; } Obj;
typedef void (*Fn6)(Vec2 *out, Obj *self);
typedef void (*FnV)(Obj *self, Vec2 v);

void func_ov004_0214e56c(uint8_t *self, Vec2 a, ...) {
    Vec2 t, v, n;
    Obj *o;

    o = *(Obj **)(self + 0x8c);
    ((Fn6)o->vt[6])(&t, o);

    v.x = (256 - t.x) / 2 + a.x;
    v.y = (192 - t.y) / 2 + a.y;

    o = *(Obj **)(self + 0x8c);
    ((FnV)o->vt[3])(o, v);

    n.x = -a.x;
    n.y = -a.y;
    o = *(Obj **)(self + 0xe0);
    *(Vec2 *)((uint8_t *)o + 0x34) = n;

    o = *(Obj **)(self + 0x94);
    if (o != 0) {
        ((FnV)o->vt[3])(o, a);
    }

    o = *(Obj **)(self + 0x90);
    ((FnV)o->vt[3])(o, a);
}
