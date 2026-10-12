#include "ffc/types.h"

extern void func_ov005_02195db0(void *obj, int32_t mode);
typedef struct { int32_t v[4]; } Quad;
extern void func_020628ac(void *obj, Quad a);
extern void func_02056c4c(void *p);
extern int32_t func_ov005_02195e2c(void *obj, Quad a, Quad b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);


void func_ov010_021bd7c8(uint8_t *self, void *node)
{
    Quad acc;
    Quad tmp;
    volatile struct { int32_t x, y; } pt;
    uint32_t i;
    void *obj;
    void **vt;
    int32_t *tbl = (int32_t *)0x021993ac;

    if (node == 0) {
        obj = *(void **)(self + 0xf4);
        vt = *(void ***)obj;
        ((void (*)(void *))vt[0x2c / 4])(obj);
        return;
    }
    vt = *(void ***)node;
    ((void (*)(void *, void *))vt[0x10 / 4])(&acc, node);
    func_ov005_02195db0(*(void **)(self + 0xf4), 1);
    for (i = 0; i < 4; i++) {
        if ((uint32_t)node == *(uint32_t *)(self + 0xc4 + i * 4)) {
            int32_t x = ((int32_t*)((uint8_t*)tbl + i*8))[0];
            int32_t y = ((int32_t*)((uint8_t*)tbl + i*8))[1];
            acc.v[2] += x - acc.v[0];
            acc.v[3] += y - acc.v[1];
            acc.v[0] = x;
            acc.v[1] = y;
            pt.y = acc.v[1];
            pt.x = acc.v[0];
            func_ov005_02195db0(*(void **)(self + 0xf4), 2);
        }
    }
    if (((int32_t (*)(void *))(*(void ***)*(void **)(self + 0xf4))[0x30 / 4])(*(void **)(self + 0xf4))) {
        func_020628ac(*(void **)(self + 0xf4), acc);
    } else {
        func_02056c4c(*(void **)(self + 0xec));
        ((void (*)(void *, void *))(*(void ***)*(void **)(self + 0xf4))[0x1c / 4])(&tmp, *(void **)(self + 0xf4));
        {
            int32_t r = func_ov005_02195e2c(*(void **)(self + 0xf4), tmp, acc, 10, -5);
            func_02056bc0(*(void **)(self + 0xec), (void *)r);
        }
    }
    ((void (*)(void *))(*(void ***)*(void **)(self + 0xf4))[0x28 / 4])(*(void **)(self + 0xf4));
    ((void (*)(void *, void *))(*(void ***)self)[0x38 / 4])(self, node);
}
