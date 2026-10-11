#include "ffc/types.h"

extern uint8_t data_ov005_02199068[];
extern void func_02061344(void *p);
extern void func_02056db0(void *p);

typedef struct VT { void *slot0; void (*slot1)(void *self); } VT;
typedef struct Inner { VT *vt; } Inner;
typedef struct Obj { VT *vt; uint8_t pad[0x7c]; void *a80; void *a84; } Obj;

void *func_ov005_021970c4(void *p) {
    Obj *o = (Obj *)p;
    Inner *x;
    o->vt = (VT *)data_ov005_02199068;
    func_02061344(o->a80);
    x = o->a84;
    if (x == 0) goto end;
    if (x == 0) goto clear;
    x->vt->slot1(x);
clear:
    o->a84 = 0;
end:
    func_02056db0(p);
    return p;
}
