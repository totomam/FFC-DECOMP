#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint16_t h4;
    uint16_t p6;
    uint16_t h8;
    uint16_t p10;
    uint32_t w12;
} S16;

typedef struct {
    uint32_t a;
    uint32_t b;
} V2;

extern uint32_t func_ov003_0215b0e8(void *obj, uint32_t zero);
extern void func_02056c4c(void *x);
extern void *func_0205681c(uint32_t size);
extern uint32_t *func_ov003_02155b40(void *obj);
extern void func_020572d0(void *n, V2 v, uint32_t a, uint32_t b);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern void func_02056bc0(void *a, void *b);
extern uint8_t data_ov003_0217a048[];

void func_ov003_0215aed0(uint8_t *self, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t s0, uint32_t s4, uint32_t s8, uint32_t s12)
{
    uint32_t flag = 0;
    uint32_t t;
    uint8_t *nb;
    uint32_t *q;
    uint32_t sc;
    uint32_t *pp1 = &p1;
    uint32_t *pp2 = &p2;
    uint8_t *sb = (uint8_t *)&s0;

    t = func_ov003_0215b0e8(self, 0) & 0xffff;
    if ((uint16_t)(*(uint16_t *)(sb + 4) + 0xffff) <= 1) {
        t = 0;
    }
    if (*(uint16_t *)(self + 0x310) != 0) {
        flag = 1;
        *(uint16_t *)(self + 0x310) = 0;
        t = *(uint16_t *)(self + 0x312);
    }
    if (*(uint32_t *)(self + 0x110) == 0) {
        t = 0;
    }
    func_02056c4c(*(void **)(self + 0xfc));
    nb = func_0205681c(0x70);
    if (nb != 0) {
        V2 v;
        q = func_ov003_02155b40(self);
        v.a = q[2];
        v.b = q[3];
        func_020572d0(nb, v, *pp1, *pp2);

        *(void **)nb = data_ov003_0217a048;
        *(void **)(nb + 0x4c) = self;
        nb[0x50] = (uint8_t)flag;
        nb[0x51] = 0;
        *(uint16_t *)(nb + 0x52) = *(uint16_t *)(sb + 4);
        *(uint16_t *)(nb + 0x54) = (uint16_t)t;
        *(uint16_t *)(nb + 0x56) = *(uint16_t *)(sb + 8);
        *(uint16_t *)(nb + 0x58) = 0;
        *(uint32_t *)(nb + 0x5c) = s12;
        *(uint32_t *)(nb + 0x60) = 0;
        sc = p3 << 12;
        *(uint32_t *)(nb + 0x64) = 0;

        q = func_ov003_02155b40(self);
        {
            uint32_t x1 = *pp2 - q[3];
            uint32_t y1 = *pp1 - q[2];
            uint32_t r6 = func_02081210(x1, sc);
            uint32_t r0v = func_02081210(y1, sc);
            *(uint32_t *)(nb + 0x68) = r0v;
            *(uint32_t *)(nb + 0x6c) = r6;
        }
        *(uint32_t *)(nb + 0x24) = p3 << 1;
        if (nb[0x15]) {
            if ((p3 << 1) != 0) {
                *(uint32_t *)(nb + 0x1c) = p3 << 5;
            } else {
                *(uint32_t *)(nb + 0x1c) = 1;
            }
        }
        *(uint32_t *)(nb + 0x30) = s0;
        *(uint32_t *)(nb + 0x1c) = 2 << 12;
    }
    func_02056bc0(*(void **)(self + 0xfc), nb);
}
