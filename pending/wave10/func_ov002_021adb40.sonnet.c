#include "ffc/types.h"

extern void func_02056bf4(void *p);

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vt;
} Obj;

typedef struct Self {
    uint8_t head[0x48];
    uint8_t sub[0x158];
    Obj *obj;
} Self;

void func_ov002_021adb40(Self *s) {
    uint8_t *p = s->sub;
    Obj *o = s->obj;
    if (o != 0) {
        func_02056bf4(p);
        o = s->obj;
        if (o != 0) {
            if (o != 0) {
                o->vt[1](o);
            }
            s->obj = 0;
        }
    }
}
