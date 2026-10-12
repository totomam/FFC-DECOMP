#include "ffc/types.h"

extern void func_02056c9c(uint8_t *p, uint32_t x);
extern void func_02054910(uint8_t *p, uint32_t a, uint32_t b);
extern void func_02054498(uint8_t *p);
extern void func_ov004_02152cd4(uint8_t *p);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_02057c28(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02055054(uint32_t x);
extern uint32_t data_ov004_02159bec;
extern uint32_t data_ov004_02159c10;
extern uint32_t data_ov004_02159c24;
extern uint8_t data_ov004_0215a1c8[];
extern uint32_t data_0213e098;
extern uint32_t data_ov004_02159c34[];

struct pair { uint32_t a; uint32_t b; };

#define W(o) (*(uint32_t *)(p + (o)))

uint8_t *func_ov004_02152d74(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3,
                             uint32_t a4, uint32_t a5, uint32_t a6, uint32_t *a7,
                             uint32_t a8, uint32_t a9, uint32_t a10, uint32_t a11)
{
    uint32_t flag;
    uint32_t t;
    struct pair *pp;
    uint32_t x0, x1;

    func_02056c9c(p, 0);
    flag = 1;
    func_02054910(p + 0x80, 0, flag);
    func_02054498(p + 0x8c);

    W(0x00) = (uint32_t)&data_ov004_02159bec;
    W(0x80) = (uint32_t)&data_ov004_02159c10;
    W(0x8c) = (uint32_t)&data_ov004_02159c24;
    W(0x9c) = a1;
    W(0xa0) = a2;
    W(0xa8) = a3;
    W(0xac) = a4;
    W(0xb0) = a5;
    W(0xe4) = 0;
    W(0xe8) = 0;
    W(0xf0) = 0;

    W(0x210) = 0;
    p[0x220] = 0;
    W(0x230) = 0;
    W(0x238) = a6;
    p[0x258] = 0;
    func_ov004_02152cd4(p + 0x25c);

    W(0x28c) = a8;
    W(0x290) = 0;
    W(0x298) = a9;
    W(0x2a0) = 0;
    W(0x2a4) = 0;
    W(0x2a8) = 0x32;
    W(0x2ac) = a10;
    W(0x380) = a11;

    if (a8 == 0) {
        flag = 0;
    }
    p[0x384] = (uint8_t)flag;

    if (a7 != 0) {
        W(0x25c) = a7[0];
        W(0x260) = a7[1];
        W(0x264) = a7[2];
        W(0x268) = a7[3];
        W(0x26c) = a7[4];
        W(0x270) = a7[5];
        W(0x274) = a7[6];
        W(0x278) = a7[7];
        W(0x27c) = a7[8];
        W(0x280) = a7[9];
        W(0x284) = a7[10];
        W(0x288) = a7[11];
    }

    t = func_0205681c(0x3c);
    if (t != 0) {
        t = func_02057c28(t, data_ov004_0215a1c8, 0x7d000, 0x10);
    }
    W(0x2a0) = t;
    W(0x2a4) = func_02055054(data_0213e098);
    pp = (struct pair *)data_ov004_02159c34;
    x1 = pp->a;
    x0 = pp->b;
    W(0x94) = x1;
    W(0x98) = x0;
    return p;
}
