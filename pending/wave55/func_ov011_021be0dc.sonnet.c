#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Vec2;

#define VFN(o, off) ((*(void ***)(o))[(off) / 4])

extern void func_02021338(uint32_t a, int32_t b);
extern void *func_02062a30(void *owner);
extern uint32_t func_02062a54(void *o);
extern uint32_t func_020655b8(void *o);
extern uint32_t func_020655dc(void *o, uint32_t a, uint32_t b);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern uint32_t func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, int32_t b, void *c);
extern void func_0201f1a8(void *a, int32_t b, void *c);
extern void func_ov012_021d2e44(void *o, int32_t b);
extern void func_020367a8(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern uint32_t func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_020059cc(void *o);
extern uint32_t func_ov011_021be2fc(void *self, uint32_t a, uint32_t b);
extern void *func_0203b6fc(void);

extern uint32_t data_ov011_021caad8[];
extern uint32_t data_ov011_021caadc[];
extern uint32_t data_ov011_021caa00[];
extern uint32_t data_ov011_021cacd4[];
extern uint32_t data_0209de6c;
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov011_021be0dc(uint8_t *self, int32_t idx)
{
    int32_t i;
    int32_t off;
    uint32_t s58[0x58 / 4];
    uint32_t r14, r18, r1c, r20, r24, r28;
    Vec2 v44;
    Vec2 v34;
    Vec2 tmp;

    if (*(uint32_t *)(self + 0x11c) == 1) {
        uint8_t **base = (uint8_t **)(self + 0xc4); i = idx - 1;
        func_02021338(0xbc, idx);
        
        ((void (*)(void *))VFN(*(void **)(base[idx - 1] + 0x94), 0x2c))(*(void **)(base[idx - 1] + 0x94));

        v44.x = data_ov011_021caad8[2 * (*(int16_t *)(self + 0x120) - 1)] + data_ov011_021caa00[0x58 / 4];
        v44.y = data_ov011_021caad8[2 * (*(int16_t *)(self + 0x120) - 1) + 1] + data_ov011_021caa00[0x5c / 4];
        ((void (*)(void *, uint32_t, uint32_t))VFN(*(void **)(self + 0x100), 0xc))(*(void **)(self + 0x100), v44.x, v44.y);
        ((void (*)(void *))VFN(*(void **)(self + 0x100), 0x28))(*(void **)(self + 0x100));

        r14 = (uint32_t)func_02062a30(*(void **)(base[idx - 1] + 0x94));
        r18 = func_02062a54(*(void **)(*(uint8_t **)(self + 0x100) + 0x14));
        r1c = func_020655b8(*(void **)(*(uint8_t **)(self + 0x100) + 0x14));
        r20 = func_020655dc(*(void **)(*(uint8_t **)(self + 0x100) + 0x14), 3, 1);
        r24 = func_02021610(0xc2, 0);

        v34.x = data_ov011_021caad8[2 * i] + data_ov011_021caa00[0x58 / 4];
        v34.y = data_ov011_021caadc[2 * i] + data_ov011_021caa00[0x5c / 4];

        ((void (*)(void *, void *))VFN(*(void **)(self + 0x100), 0x10))(&tmp, *(void **)(self + 0x100));
        r28 = func_02062a78(*(void **)(self + 0x100), tmp.x, tmp.y, v34.x, v34.y, data_0209de6c, 0);

        func_02056bc0(self + 0x14, func_02021610(0xc3, 0));
        func_02056bc0(self + 0x14, r28);
        func_02056bc0(self + 0x14, r24);
        func_02056bc0(self + 0x14, r20);
        func_02056bc0(self + 0x14, r1c);
        func_02056bc0(self + 0x14, r18);
        func_02056bc0(self + 0x14, r14);

        func_02036750(s58);
        func_0201f1f0(data_020b93b8, *(int16_t *)(self + 0x120), s58);
        func_0201f1a8(data_020b93b8, idx, s58);
        func_ov012_021d2e44(*(void **)(self + 0x10c), idx);
        func_020367a8(s58);
    } else {
        void *p;
        uint32_t mesh = 0;
        uint32_t s4c[3];
        uint32_t pair[2];

        *(uint32_t *)(self + 0x11c) = 1;
        p = func_0205681c(0xb0);
        if (p != 0) {
            func_02005988(s4c, func_020159c8(data_020b8e44, 0x1c5));
            pair[0] = 0x80;
            pair[1] = 0x60;
            mesh = func_02032d24(p, 0x80, 0x60, s4c, 4, 0);
            func_02056bc0(self + 0x14, mesh);
            func_020059cc(s4c);
        } else {
            func_02056bc0(self + 0x14, mesh);
        }
    }

    {
        uint32_t r4v = func_ov011_021be2fc(self, data_ov011_021cacd4[0], data_ov011_021cacd4[1]);
        void *o = func_0203b6fc();
        func_02056bc0(o, r4v);
        func_02056bc0(self + 0x14, (uint32_t)o);
    }
}
