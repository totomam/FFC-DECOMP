/* cflags: -lang c++ */
#include "ffc/types.h"

#define OFF(T, p, o) (*(T *)((uint8_t *)(p) + (o)))

extern "C" uint32_t func_0205b3e8(uint32_t a);
extern "C" uint32_t func_0208475c(int a);
extern "C" uint32_t func_02081f9c(uint32_t *p);
extern "C" void func_02023088(void *p);
extern "C" void func_020230f0(void *p);
extern "C" void func_020231d4(void *p);
extern "C" void func_0208763c(void *p);
extern "C" uint32_t func_02023e8c(void *a, uint32_t b);
extern "C" void func_02023f40(void *a, uint32_t b);
extern "C" void func_02087678(void *p);
extern "C" uint32_t data_020b2948;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t *c;
    volatile uint8_t f;
    uint32_t sp14;
} Frame;

struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); };
extern "C" void func_020233b8(void *self, uint8_t arg1, uint32_t arg2) {
    uint8_t *s = (uint8_t *)self;
    Frame fr;
    uint8_t saved;
    int idx;
    uint8_t *node;
    uint8_t *head;
    volatile uint32_t *d;

    saved = arg1;

    if (OFF(uint8_t, s, 0x164) == 0) {
        return;
    }
    if (func_0205b3e8(OFF(uint32_t, s, 0x8c)) == 0) {
        if (func_0208475c(data_020b2948) != 0) {
            return;
        }
    }

    OFF(uint32_t, s, 0x20c) += 1;

    idx = (int)data_020b2948;
    if (data_020b2948 > 3) {
        idx = -1;
    }
    if (func_0208475c(idx) != 0) {
        return;
    }

    while (*(volatile uint32_t *)0x4000600 & 0x08000000) {
    }
    *(volatile uint32_t *)0x4000600 = *(volatile uint32_t *)0x4000600 | 0x8000;

    *(volatile uint16_t *)0x4000060 = *(volatile uint16_t *)0x4000060 | (uint16_t)(0x4000060 >> 13);
    *(volatile uint16_t *)0x4000060 = *(volatile uint16_t *)0x4000060 | (uint16_t)(0x4000060 >> 14);

    do {
    } while (func_02081f9c(&fr.sp14) != 0);

    d = (volatile uint32_t *)0x4000440;
    d[0] = 3;
    d[5] = 0;
    d[0] = 2;
    d[2] = fr.sp14;
    d[0x19] = 0x1f3080;
    d[0x1a] = 0;
    d[0x1b] = 0;

    func_02023088(self);
    func_020230f0(self);
    func_020231d4(self);

    d[0x30] = 0;
    d[0x31] = 0;

    fr.c = s + 0x220;
    fr.f = 1;
    if (fr.f) {
        func_0208763c(fr.c);
    }

    head = s + 0x50;
    node = OFF(uint8_t *, s, 0x54);
    while (node != head) {
        if (func_02023e8c(*(void **)(node + 8), arg2)) {
            if (OFF(int, s, 0x14) == 1) {
                func_02023f40(*(void **)(node + 8), 0);
            } else {
                func_02023f40(*(void **)(node + 8), 0x3f);
            }
            {
                void *obj = *(void **)(node + 8);
                uint32_t *vt = *(uint32_t **)obj;
                ((void (*)(void *, uint32_t))vt[8])(obj, OFF(uint32_t, s, 0x58));
            }
        }
        node = *(uint8_t **)(node + 4);
    }

    if (fr.f) {
        func_02087678(fr.c);
    }

    {
        ((Obj *)self)->v3();
    }

    if (saved) {
        uint32_t v = OFF(uint32_t, s, 0x14) | (OFF(uint32_t, s, 0x18) << 1);
        *(volatile uint32_t *)0x4000540 = v;
        OFF(uint32_t, s, 0x210) = OFF(uint32_t, s, 0x20c);
    }
}
