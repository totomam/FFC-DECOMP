#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_02035be0(void *object);
extern void func_02087620(void *object);
extern void func_02084b2c(void *p, int c, int n);
extern void func_0202e570(void *object);
extern void func_0202e6d0(void *object, int a, int b);
extern uint8_t data_020adcd0[];

void *func_0202e348(void *obj, int a1, int a2, int a3, int a4, int a5)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *f;
    uint32_t *q;
    uint32_t *n;
    int v;

    func_02056c9c(p, 0);
    *(void **)p = (void *)data_020adcd0;
    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x8c) = 0;
    *(uint32_t *)(p + 0x98) = a2;
    *(uint32_t *)(p + 0x9c) = a4;
    *(uint16_t *)(p + 0xb8) = (uint16_t)a3;
    func_02035be0(p + 0xd4);

    *(uint32_t *)(p + 0x480) = a5;
    q = (uint32_t *)(p + 0x484);
    *q = 0;
    n = q + 1;
    n[1] = (uint32_t)n;
    q[1] = (uint32_t)n;
    func_02087620(p + 0x4b8);
    func_02087620(p + 0x4d0);

    f = p + 0x48;
    v = f[0x12];
    v &= ~0xff;
    v |= 1;
    f[0x12] = (uint8_t)v;

    p[0x458] = 0;
    *(uint32_t *)(p + 0x4e8) = 0;
    func_02084b2c(p + 0x459, 0, 0x20);
    func_02084b2c(p + 0x490, 0, 0x28);

    func_0202e570(p);
    func_0202e6d0(p, a1, 0);
    return p;
}
