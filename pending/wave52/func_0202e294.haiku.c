#include "ffc/types.h"

extern void func_02056c9c(void *obj, int x);
extern void func_02035be0(void *object);
extern void func_02087620(void *object);
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_0202e570(void *object);
extern uint8_t data_020adcd0[];

void *func_0202e294(void *self, uint32_t a, uint16_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    uint32_t *x;
    uint32_t *y;
    int v;

    func_02056c9c(self, 0);
    *(void **)p = data_020adcd0;
    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x98) = a;
    *(uint32_t *)(p + 0x9c) = c;
    *(uint16_t *)(p + 0xb8) = b;
    func_02035be0(p + 0xd4);

    *(uint32_t *)(p + 0x480) = 0;
    x = (uint32_t *)(p + 0x484);
    x[0] = 0;
    y = x + 1;
    y[1] = (uint32_t)y;
    x[1] = (uint32_t)y;

    func_02087620(p + 0x4b8);
    func_02087620(p + 0x4d0);

    q = p + 0x48;
    v = q[0x12];
    v = (v & ~0xff) | 1;
    q[0x12] = (uint8_t)v;
    p[0x458] = 0;
    *(uint32_t *)(p + 0x4e8) = 0;
    func_02084b2c(p + 0x459, 0, 0x20);
    func_02084b2c(p + 0x490, 0, 0x28);

    func_0202e570(self);
    return self;
}
