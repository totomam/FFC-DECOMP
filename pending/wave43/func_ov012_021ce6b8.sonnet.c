#include "ffc/types.h"

extern void *func_020655dc(void *obj, int a, int b);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a, b; } Pair;
typedef struct { Pair e[18]; } Row;
extern Row data_ov012_021d4138[];

typedef struct { void **vt; } Obj;
typedef struct {
    uint8_t pad0[0x14];
    uint8_t node[0x2a4];
    Obj *obj;
    uint8_t pad1[0x18];
    uint32_t idx;
    uint8_t pad2[0x60];
    int8_t sel;
    uint8_t max;
} S;

void func_ov012_021ce6b8(S *p)
{
    uint8_t u;
    
    Obj *o;
    if (p->sel < 0) p->sel = 0;
    u = p->max;
    if (p->sel > u) p->sel = u;
    o = p->obj;
    ((void (*)(Obj *, Pair))o->vt[3])(o, data_ov012_021d4138[p->idx].e[p->sel]);
    if (p->sel >= p->max) {
        ((void (*)(Obj *))p->obj->vt[11])(p->obj);
        return;
    }
    if (((int (*)(Obj *))p->obj->vt[12])(p->obj) != 0)
        ((void (*)(Obj *))p->obj->vt[10])(p->obj);
    func_02056bc0(p->node, func_020655dc(p->obj, 1, 0));
}
