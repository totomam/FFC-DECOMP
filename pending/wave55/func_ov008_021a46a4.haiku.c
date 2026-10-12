#include "ffc/types.h"

extern void func_02021338(uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov008_021a4edc(void *self, uint32_t index);
extern void func_0201c220(void *heap, uint32_t size);
extern void func_02036750(void *obj);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *heap, uint32_t v, void *obj);
extern uint32_t func_020367bc(void *obj, uint32_t index);
extern void func_02035f58(void *obj);
extern void func_0201f600(void *heap, uint32_t index, void *obj, void *o2);
extern uint32_t func_02036368(const void *obj);
extern uint8_t func_02036360(const void *obj);
extern void func_02036438(void *obj, uint32_t value);
extern uint32_t func_02036134(const void *obj);
extern void *func_02035fd0(void *obj);
extern void func_02036448(void *obj, uint32_t value);
extern void func_0201f5b8(void *heap, uint32_t index, void *obj, void *o2);
extern void func_ov008_021a4d40(void *self);
extern void func_ov008_021a4844(void *self);
extern void func_ov008_021a491c(void *self);
extern void func_ov005_02197000(void *obj);
extern void func_ov008_021a4e30(void *self);
extern void func_02056c4c(void *obj);
extern void func_ov008_021a4548(void *self);
extern void func_020367a8(void *obj);
extern void *data_020b93b8;

void func_ov008_021a46a4(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t bufC[0x60];
    uint8_t bufB[0x60];
    uint8_t bufA[0x58];
    uint32_t off = 0x128;
    uint32_t sum = 0;
    uint32_t i;
    uint32_t x;
    uint32_t z;
    uint32_t mn;
    uint8_t y;

    if (*(uint32_t *)(p + off) != 1) {
        return;
    }
    func_02021338(off - 0x12);

    i = 0;
    if (((uint32_t *)func_02052d90(*(void **)(p + 0xbc), *(uint32_t *)(p + 0xc0)))[2] > 0) {
        do {
            if (p[0x100 + i]) {
                p[0x100 + i] = 0;
                {
                    uint32_t r = func_ov008_021a4edc(p, i);
                    *(uint32_t *)(p + 0x11c) -= r;
                }
                func_0201c220(data_020b93b8, 4);
                sum += ((uint32_t *)(*(uint32_t **)(p + 0x108)))[i];
            }
            i++;
        } while (i < ((uint32_t *)func_02052d90(*(void **)(p + 0xbc), *(uint32_t *)(p + 0xc0)))[2]);
    }

    func_02036750(bufA);
    func_0201f1f0(data_020b93b8, func_0201b924(data_020b93b8), bufA);

    i = 0;
    do {
        if (func_020367bc(bufA, i)) {
            func_02035f58(bufB);
            func_0201f600(data_020b93b8, i, bufA, bufB);
            x = func_02036368(bufB) + sum;
            y = func_02036360(bufB);
            func_02035f58(bufC);
            func_02036438(bufC, y);
            z = func_02036134(bufC);
            func_02035fd0(bufC);
            mn = (x < z) ? x : z;
            func_02036448(bufB, mn);
            func_0201f5b8(data_020b93b8, i, bufA, bufB);
            func_02035fd0(bufB);
        }
        i++;
    } while (i < 5);

    p[0x124] = 0;
    func_ov008_021a4d40(p);
    func_ov008_021a4844(p);
    func_ov008_021a491c(p);
    *(uint32_t *)(p + 0x120) = 0;
    func_ov005_02197000(*(void **)(p + 0xf8));
    func_ov008_021a4e30(p);
    {
        uint8_t *obj = *(uint8_t **)(p + 0xd0);
        func_02056c4c(obj + 0x14);
        {
            void **q = (void **)(obj + 0x98);
            void *inner = *q;
            void **vt = *(void ***)inner;
            ((void (*)(void *, uint32_t, uint32_t))vt[0x38 / 4])(inner, 1, 0);
        }
    }
    func_ov008_021a4548(p);
    func_020367a8(bufA);
}
