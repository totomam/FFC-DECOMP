#include "ffc/types.h"

#define FLD(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define FLDW(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define VC(o, idx) (((void **)*(void **)(o))[idx])

extern void func_02056c9c(void *o, uint32_t x);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02056dd4(void *o);
extern void *func_0205ffac(void *o, uint32_t i, uint32_t j);
extern uint32_t func_ov002_02198bec(uint32_t a);
extern uint32_t func_ov002_02198bf4(uint32_t a);
extern void *func_0203ba60(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02067e70(void *o, uint32_t x);
extern void *func_0203b878(void *o, uint32_t x);
extern void func_02056bc0(void *o, void *n);
extern void *func_02067490(void *o);
extern void func_0205f318(void *o, uint32_t x);
extern void func_0205f3a8(void *o, uint32_t x, uint32_t y);
extern void func_0205f380(void *o, uint32_t x);

extern uint8_t data_ov002_021d6c14[];
extern void *data_ov002_021d6bdc[];
extern int32_t data_ov002_021d6bec[];
extern int32_t data_ov002_021d7964[];

typedef struct { uint32_t c; uint32_t d; } S2;

void *func_ov002_021bd608(uint8_t *self, uint32_t a, uint32_t b, S2 s)
{
    uint32_t i;
    void *obj;
    void *q;
    void *r7;
    uint32_t n;
    uint32_t k;
    uint32_t x;

    func_02056c9c(self, 0);
    *(void **)self = data_ov002_021d6c14;
    *(uint32_t *)(self + 0x80) = 0;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = 0;
    *(uint32_t *)(self + 0xac) = 0;
    *(uint32_t *)(self + 0xb0) = 0;
    self[0xd4] = 0;
    self[0xd5] = 0;
    for (i = 0; i < 4; i++) {
        *(uint32_t *)(self + 0xb4 + i * 4) = 0;
        *(uint32_t *)(self + 0xc4 + i * 4) = 0;
        *(uint32_t *)(self + 0x9c + i * 4) = 0;
    }
    *(void **)(self + 0x80) = func_0203b95c(data_ov002_021d6bdc[1], b, 2, 1);
    obj = *(void **)(self + 0x80);
    ((void (*)(void *, uint32_t, uint32_t))VC(obj, 3))(obj, s.c, s.d);
    obj = *(void **)(self + 0x80);
    ((void (*)(void *, uint32_t))VC(obj, 8))(obj, 2);
    obj = *(void **)(self + 0x80);
    ((void (*)(void *, uint32_t))VC(obj, 15))(obj, 1);
    obj = *(void **)(self + 0x80);
    ((void (*)(void *))VC(obj, 11))(obj);

    q = FLD(func_02056dd4(self), 0x18);
    q = FLD(q, 0x18);
    q = func_0205ffac(q, 1, 1);
    *(void **)(self + 0x88) = q;
    *(void **)(self + 0xac) = FLD(q, 4);

    n = func_ov002_02198bec(a);
    k = 0x80;
    for (i = 0; i < 4; i++) {
        x = func_ov002_02198bf4(a);
        r7 = func_0203ba60(*(uint32_t *)(self + 0x84), 0x20, 0x10, x, 1);
        func_02067e70(r7, 0);
        *(void **)(self + 0x8c + i * 4) = func_0203b878(r7, n);
        {
            int32_t t0 = data_ov002_021d6bec[2 * i];
            int32_t t1 = data_ov002_021d6bec[2 * i + 1];
            obj = *(void **)(self + 0x8c + i * 4);
            ((void (*)(void *, uint32_t, uint32_t))VC(obj, 3))(obj, s.c + t0, s.d + t1);
        }
        obj = *(void **)(self + 0x8c + i * 4);
        ((void (*)(void *, uint32_t))VC(obj, 8))(obj, 2);
        func_02056bc0(self + 0x48, *(void **)(self + 0x8c + i * 4));
        *(void **)(self + 0x9c + i * 4) = func_02067490(r7);
        func_0205f318(*(void **)(self + 0x9c + i * 4), 1);
        func_0205f3a8(*(void **)(self + 0x9c + i * 4), 0, 0);
        func_0205f380(*(void **)(self + 0x9c + i * 4), FLDW(FLD(self, 0x88), 0x10));
        data_ov002_021d7964[3] = 0x800;
        data_ov002_021d7964[0] = 0x800;
        data_ov002_021d7964[2] = 0;
        data_ov002_021d7964[1] = 0;
        q = *(void **)(self + 0xac);
        *(uint16_t *)((uint8_t *)q + 6) = (uint16_t)k;
        *(uint16_t *)((uint8_t *)q + 0xe) = (uint16_t)(data_ov002_021d7964[1] >> 4);
        *(uint16_t *)((uint8_t *)q + 0x16) = (uint16_t)(data_ov002_021d7964[2] >> 4);
        *(uint16_t *)((uint8_t *)q + 0x1e) = (uint16_t)(data_ov002_021d7964[3] >> 4);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x80));
    return self;
}
