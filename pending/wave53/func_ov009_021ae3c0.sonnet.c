#include "ffc/types.h"

#define O (*(void **)((char *)self + 0x144))
#define VT(p) (*(void ***)(p))

typedef struct { uint32_t f[4]; } V4;

extern void func_ov005_02195db0(void *obj, int32_t v);
extern void func_020628ac(void *obj, V4 v);
extern void func_02056c4c(void *p);
extern void *func_ov005_02195e2c(void *obj, V4 w, V4 v, int32_t a, int32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov009_021b0c80[];

void func_ov009_021ae3c0(void *self, void *node)
{
    V4 v;
    V4 w;
    V4 d;
    uint32_t b, a;
    uint8_t i;

    if (node == 0) {
        
        ((void (*)(void *))VT(O)[11])(O);
        return;
    }

    ((void (*)(V4 *, void *))VT(node)[4])(&v, node);
    
    func_ov005_02195db0(O, 1);
    a = data_ov009_021b0c80[6];
    *(volatile uint32_t *)&d.f[0] = a;
    b = data_ov009_021b0c80[7];
    *(volatile uint32_t *)&d.f[1] = b;

    for (i = 0; i < 4; i++) {
        if (node == *(void **)((char *)self + 0xc4 + i * 4)) {
            *(volatile uint32_t *)&d.f[2] = a;
            v.f[0] += a;
            *(volatile uint32_t *)&d.f[3] = b;
            v.f[1] += b;
            v.f[2] += a;
            v.f[3] += b;
        }
    }

    if (((uint32_t (*)(void *))VT(O)[12])(O)) {
        func_020628ac(O, v);
    } else {
        func_02056c4c(*(void **)((char *)self + 0x140));
        ((void (*)(V4 *, void *))VT(O)[7])(&w, O);
        func_02056bc0(*(void **)((char *)self + 0x140), func_ov005_02195e2c(O, w, v, 10, -5));
    }

    ((void (*)(void *))VT(O)[10])(O);
}
