#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;

extern void func_0200a5dc(void *p, uint32_t x);
extern void func_02051248(void *a, void *b);
extern void func_0200a678(void *o);
extern uint32_t func_02051db4(void *a, void *b);
extern void func_020059cc(void *o);
extern void func_02021338(uint32_t x);
extern void func_0200b65c(void *a, void *b);
extern void func_02056c4c(void *a);
extern void *func_0203b95c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *a, void *b);
extern uintptr_t func_020159f8(void *p);
extern void *func_0203ba60(uint32_t a, Pair p, void *d, uint32_t e);
extern void func_02067e70(void *o, uint32_t x);
extern uint32_t func_02015a38(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203b878(void *o, uint32_t x);
extern void func_02068e18(void *o, void *p);
extern void *func_020692e8(void *o);
extern uint32_t data_ov007_021c3bdc[];
extern void *data_020b8e44;

void func_ov007_021a3d84(uint8_t *self, uint32_t a, uint32_t b)
{
    Pair pp;
    uint32_t t28[3];
    uint32_t t1c[3];
    uint32_t t10[3];
    uint32_t flag;
    uint32_t one;
    uint32_t zero;
    uint32_t dv;
    void *obj;
    uint32_t *vt;

    func_0200a5dc(t1c, b);
    func_02051248(t28, t1c);
    func_0200a678(t1c);

    if (a == *(uint32_t *)(self + 0xb8)) {
        if (func_02051db4(t28, self + 0xbc)) {
            func_020059cc(t28);
            return;
        }
    }

    if (*(uint32_t *)(self + 0xb8) == 0) {
        func_02021338(0xdd);
    }
    *(uint32_t *)(self + 0xb8) = a;
    func_0200b65c(self + 0xbc, t28);
    func_02056c4c(self + 0x48);

    switch (*(uint32_t *)(self + 0xb8)) {
    case 0:
        flag = 0;
        dv = data_ov007_021c3bdc[2];
        break;
    case 1:
        dv = data_ov007_021c3bdc[8];
        flag = 1;
        break;
    case 2:
        dv = data_ov007_021c3bdc[7];
        flag = 1;
        break;
    default:
        break;
    }

    zero = 0;
    one = 1;
    *(void **)(self + 0xb0) = func_0203b95c(dv, *(uint32_t *)(self + 0xa0), zero, one);
    ((void (*)(void *, Pair))(*(uint32_t **)(*(void **)(self + 0xb0)))[3])(*(void **)(self + 0xb0), *(Pair *)(self + 0xa8));
    ((void (*)(void *, uint32_t))(*(uint32_t **)(*(void **)(self + 0xb0)))[8])(*(void **)(self + 0xb0), 3);
    ((void (*)(void *, uint32_t))(*(uint32_t **)(*(void **)(self + 0xb0)))[15])(*(void **)(self + 0xb0), 3);
    ((void (*)(void *))(*(uint32_t **)(*(void **)(self + 0xb0)))[10])(*(void **)(self + 0xb0));

    func_02056bc0(self + 0x48, *(void **)(self + 0xb0));

    if (flag) {
        void *o2;
        pp.x = 0x30;
        pp.y = 0xc;
        o2 = (void *)func_020159f8(data_020b8e44);
        vt = *(uint32_t **)(obj = func_0203ba60(*(uint32_t *)(self + 0xa0), pp, o2, one));
        ((void (*)(void *, uint32_t))vt[8])(obj, 3);
        func_02067e70(obj, 2);
        *(void **)(self + 0xb4) = func_0203b878(obj, func_02015a38(data_020b8e44, zero, one, 0xb));

        func_0200a5dc(t10, b);
        func_02068e18(*(void **)(self + 0xb4), t10);
        func_0200a678(t10);

        ((void (*)(void *))(*(uint32_t **)(*(void **)(self + 0xb4)))[10])(*(void **)(self + 0xb4));

        func_02056bc0(self + 0x48, *(void **)(self + 0xb4));
    } else {
        *(uint32_t *)(self + 0xb4) = zero;
    }

    obj = func_020692e8(self);
    vt = *(uint32_t **)self;
    ((void (*)(void *, void *))vt[7])(self, obj);

    func_020059cc(t28);
}
