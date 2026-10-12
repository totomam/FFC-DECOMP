#include "ffc/types.h"

extern void func_02021338(uint32_t code);
extern void func_0200a5dc(void *dst, uint32_t src);
extern void func_02051248(void *dst, void *src);
extern void func_0200b65c(void *dst, void *src);
extern void *func_020059cc(void *object);
extern void *func_0200a678(void *object);
extern void func_02056c4c(void *object);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uintptr_t func_020159f8(uintptr_t x);
extern void *func_0203ba60(void *a, uint32_t b, uint32_t c, uintptr_t d, uint32_t e);
extern void func_02067e70(void *object, uint32_t x);
extern uint32_t func_02015a38(uintptr_t a, void *b, uint32_t c, uint32_t d);
extern void *func_0203b878(void *a, uint32_t b);
extern void func_02068e18(void *a, void *b);
extern void *func_020692e8(void *object);
extern uint8_t data_ov007_021c5c84[];
extern uintptr_t data_020b8e44;

void func_ov007_021b1784(uint8_t *p, void *a, uint32_t b)
{
    void *v;
    uint32_t flag;
    void *obj;
    uint32_t pr[2] = {0x30, 0xc};
    uint32_t s1[3];
    uint32_t s2[3];
    uint32_t s3[3];

    if (a == *(void **)(p + 0xb8)) {
        return;
    }
    if (*(void **)(p + 0xb8) == 0) {
        func_02021338(0xdd);
    }
    *(void **)(p + 0xb8) = a;

    func_0200a5dc(s1, b);
    func_02051248(s2, s1);
    func_0200b65c(p + 0xbc, s2);
    func_020059cc(s2);
    func_0200a678(s1);
    func_02056c4c(p + 0x48);

    switch (*(uint32_t *)(p + 0xb8)) {
    case 0:
        v = ((void **)data_ov007_021c5c84)[7];
        flag = 0;
        break;
    case 1:
        v = ((void **)data_ov007_021c5c84)[5];
        flag = 1;
        break;
    case 2:
        v = ((void **)data_ov007_021c5c84)[6];
        flag = 1;
        break;
    case 3:
        v = ((void **)data_ov007_021c5c84)[8];
        flag = 1;
        break;
    }

    obj = func_0203b95c(v, *(void **)(p + 0xa0), 0, 1);
    *(void **)(p + 0xb0) = obj;
    ((void (*)(void *, void *, void *))(*(void ***)obj)[3])(obj, *(void **)(p + 0xa8), *(void **)(p + 0xac));
    ((void (*)(void *, uint32_t))(*(void ***)*(void **)(p + 0xb0))[8])(*(void **)(p + 0xb0), 3);
    ((void (*)(void *, uint32_t))(*(void ***)*(void **)(p + 0xb0))[15])(*(void **)(p + 0xb0), 3);
    ((void (*)(void *))(*(void ***)*(void **)(p + 0xb0))[10])(*(void **)(p + 0xb0));
    func_02056bc0(p + 0x48, *(void **)(p + 0xb0));

    if (flag != 0) {
        uintptr_t t;
        t = func_020159f8(data_020b8e44);
        obj = func_0203ba60(*(void **)(p + 0xa0), pr[0], pr[1], t, 1);
        ((void (*)(void *, uint32_t))(*(void ***)obj)[8])(obj, 3);
        func_02067e70(obj, 2);
        {
            uint32_t r = func_02015a38(data_020b8e44, v, 1, 0xb);
            *(void **)(p + 0xb4) = func_0203b878(obj, r);
        }
        func_0200a5dc(s3, b);
        func_02068e18(*(void **)(p + 0xb4), s3);
        func_0200a678(s3);
        ((void (*)(void *))(*(void ***)*(void **)(p + 0xb4))[10])(*(void **)(p + 0xb4));
        func_02056bc0(p + 0x48, *(void **)(p + 0xb4));
    } else {
        *(void **)(p + 0xb4) = 0;
    }

    {
        void *r = func_020692e8(p);
        ((void (*)(void *, void *))(*(void ***)p)[7])(p, r);
    }
}
