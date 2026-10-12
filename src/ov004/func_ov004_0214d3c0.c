#include "ffc/types.h"

extern int32_t func_ov004_021534f4(void *p);
extern int32_t func_ov004_0215313c(void *p);
extern int32_t func_ov004_02153114(void *p);
extern int32_t func_ov004_0214f76c(int32_t x);
extern int32_t func_ov004_02153514(void *p);
extern int32_t func_ov004_0214f740(int32_t a, int32_t b);
extern int32_t func_020655dc(void *p, int32_t a, int32_t b);
extern int32_t func_020655b8(void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov004_02153568(void *p, int32_t x);

typedef struct {
    uint8_t pad[0x94];
    void *f94;
    void *f98;
    void *f9c;
} Obj;

void func_ov004_0214d3c0(void *self)
{
    Obj *o = (Obj *)self;
    void *q;
    int32_t r7, r6, r1, r4;

    if (func_ov004_021534f4(o->f94) == 0) {
        return;
    }
    if (func_ov004_0215313c(o->f94) != 0) {
        return;
    }
    if (func_ov004_0214f76c(func_ov004_02153114(o->f94)) != 0) {
        return;
    }
    r4 = func_ov004_02153114(o->f94);
    r1 = func_ov004_02153514(o->f94);
    if (func_ov004_0214f740(r4, r1) == 0) {
        r6 = func_020655dc(o->f9c, 4, 0);
        r7 = func_020655b8(o->f9c);
        q = o->f9c;
        r1 = 5;
    } else {
        r6 = func_020655dc(o->f9c, 3, 0);
        r7 = func_020655b8(o->f9c);
        q = o->f9c;
        r1 = 6;
    }
    r1 = func_020655dc(q, r1, 0);
    {
    void *p = o->f98;
    func_02056bc0(p, (void *)r1);
    func_02056bc0(p, (void *)r7);
    func_02056bc0(p, (void *)r6);
    }
    func_ov004_02153568(o->f94, 6);
}
