#include "ffc/types.h"

extern int func_02075a88(void *p);
extern int func_ov000_02153288(void);

typedef struct Obj {
    void **vt;
} Obj;

void func_02071c00(void *self)
{
    uint8_t *p = (uint8_t *)self;
    Obj *o;
    int r;

    if (func_02075a88(*(void **)(p + 0x84))) {
        o = *(Obj **)(p + 0x80);
        ((void (*)(void *))o->vt[0x28 / 4])(o);
    } else {
        o = *(Obj **)(p + 0x80);
        ((void (*)(void *))o->vt[0x2c / 4])(o);
    }
    o = *(Obj **)(p + 0x80);
    r = ((int (*)(void *))o->vt[0x30 / 4])(o);
    if (r == 0) {
        int x = func_ov000_02153288();
        o = *(Obj **)(p + 0x80);
        ((void (*)(void *, int, int))o->vt[0x38 / 4])(o, x + 2, 0);
    }
}
