#include "ffc/types.h"

typedef struct VT { void *m[20]; } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct Sub { uint8_t pad[0x12]; uint8_t f; uint8_t pad2[0x21]; } Sub;
typedef struct Big {
    void *vt;
    uint8_t pad[0x10];
    Sub s1;
    Sub s2;
    uint8_t pad3[0x80-0x7c];
    Obj *objs[2];
} Big;

extern void func_02056c9c(void *object, uint32_t v);
extern Obj *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void *data_ov003_02179cec[];
extern void *data_ov003_02179cc4[];

Big *func_ov003_02151334(Big *a, uint32_t b, uint32_t c)
{
    int i;
    Sub *p1;
    Sub *p2;
    func_02056c9c(a, 0);
    p1 = (Sub *)((uint8_t *)a + 0x14);
    p2 = (Sub *)((uint8_t *)a + 0x48);
    a->vt = data_ov003_02179cec;
    p1->f = (p1->f & ~0xff) | 1;
    p2->f = (p2->f & ~0xff) | 1;
    for (i = 0; i < 2; i++) {
        Obj *o;
        a->objs[i] = func_0203b95c(data_ov003_02179cc4[1], c, 0, 1);
        ((void (*)(Obj *))a->objs[i]->vt->m[10])(a->objs[i]);
        ((void (*)(Obj *, int))a->objs[i]->vt->m[8])(a->objs[i], 2);
        ((void (*)(Obj *, int))a->objs[i]->vt->m[15])(a->objs[i], i);
        ((void (*)(Obj *, int, int))a->objs[i]->vt->m[14])(a->objs[i], i == 0 ? b : 4, 0);
        func_02056bc0(p2, a->objs[i]);
    }
    func_0205f2f0((void *)func_02064aa8(a->objs[1]), 1);
    return a;
}
