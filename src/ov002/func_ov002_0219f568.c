#include "ffc/types.h"

struct Obj;
typedef void (*VFn)(struct Obj *);
struct Vt { VFn f[16]; };
struct Obj { struct Vt *vt; };

void func_ov002_0219f568(uint8_t *self, int flag) {
    if (flag) {
        struct Obj *o = *(struct Obj **)(self + 0x13c);
        o->vt->f[10](o);
    } else {
        struct Obj *o = *(struct Obj **)(self + 0x13c);
        o->vt->f[11](o);
    }
}
