#include "ffc/types.h"

#define VT(p) (*(void ***)(p))

typedef struct { uint32_t f[4]; } V4;
typedef struct { V4 v; int32_t a; int32_t b; } T6;

extern void func_ov005_02195db0(void *obj, int32_t v);
extern void func_020628ac(void *obj, V4 v);
extern void func_02056c4c(void *p);
extern void *func_ov005_02195e2c(void *obj, V4 w, T6 t);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov009_021b0c80[];

void func_ov009_021ae3c0(void *self, void *node)
{
    V4 w;
    V4 v;
    V4 d;

    void *o;
    uint32_t i;
    void *r;

    if (node == 0) {
        o = *(void **)((char *)self + 0x144);
        ((void (*)(void *))VT(o)[11])(o);
        return;
    }

    ((void (*)(V4 *, void *))VT(node)[4])(&v, node);
    o = *(void **)((char *)self + 0x144);
    func_ov005_02195db0(o, 1);
    d.f[0] = data_ov009_021b0c80[6];
    d.f[1] = data_ov009_021b0c80[7];
    d.f[2] = d.f[0];
    d.f[3] = d.f[1];

    for (i = 0; i < 4; i++) {
        if (node == *(void **)((char *)self + 0xc4 + i * 4)) {
            v.f[0] += d.f[0];
            v.f[1] += d.f[1];
            v.f[2] += d.f[0];
            v.f[3] += d.f[1];
        }
    }

    if (((uint32_t (*)(void *))VT(o)[12])(o)) {
        func_020628ac(o, v);
    } else {
        func_02056c4c(*(void **)((char *)self + 0x140));
        ((void (*)(V4 *, void *))VT(o)[7])(&w, o);



        r = func_ov005_02195e2c(o, w, (T6){v, 10, -5});
        func_02056bc0(*(void **)((char *)self + 0x140), r);
    }

    ((void (*)(void *))VT(o)[10])(o);
}
