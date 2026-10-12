#include "ffc/types.h"

extern void func_02015e8c(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint8_t b12;
    uint8_t pad[3];
} Local;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t arr[3];
    uint32_t f14;
    uint8_t b18;
    uint32_t f1c;
    uint8_t b20;
    uint32_t f24;
    uint8_t b28;
    uint8_t b29;
    uint32_t f2c;
    uint32_t f30;
    uint8_t b34;
    uint32_t f38;
} Obj;

void *func_ov002_021c8530(Obj *obj)
{
    Local l;
    Local *lp;
    uint32_t *a;
    uint32_t i;

    i = 0;
    obj->f4 = 1;
    obj->f0 = i;
    a = (uint32_t *)((uint8_t *)obj + 8);
    for (; i < 3; i++) {
        a[i] = 0;
    }
    obj->f14 = 3;
    obj->f1c = 1;
    obj->b20 = 0;
    obj->b28 = 0;
    obj->b29 = 0;
    obj->b18 = 0;
    obj->f24 = 0;
    obj->f2c = 0;

    lp = &l;
    func_02015e8c(lp, data_020b8e44);
    obj->f30 = *((uint8_t *)func_02052d90((void *)lp->w1, lp->w2) + 0xf);

    if (lp->w1 != 0) {
        if (lp->b12 != 0) {
            func_02052d3c(lp->w1, lp->w2);
        }
        func_02052c04(lp->w1);
    }
    func_02053290(lp);

    obj->b34 = 0;
    obj->f38 = 3;
    return obj;
}
