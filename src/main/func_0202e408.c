#include "ffc/types.h"

extern char data_020adcd0[];
extern void func_02056c9c(void *self, uint32_t zero, uint32_t b, uint32_t c);
extern void func_02087620(void *object);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_0202e570(void *self);
extern void func_0202e774(void *self, uint32_t a, uint32_t b, uint32_t c);

void *func_0202e408(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t *s5, uint16_t s6, uint32_t s7)
{
    uint8_t *p = (uint8_t *)self;
    uint8_t *q;
    uint8_t *h;
    uint8_t *n;
    uint32_t v;
    func_02056c9c(self, 0, b, c);
    *(void **)p = data_020adcd0;
    *(uint32_t *)(p + 0x80) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x88) = 0;
    *(uint32_t *)(p + 0x98) = a;
    *(uint32_t *)(p + 0x9c) = s7;
    *(uint16_t *)(p + 0xb8) = s6;
    *(uint32_t *)(p + 0xd4) = *s5;
    *(uint32_t *)(p + 0x480) = 0;
    h = p + 0x484;
    *(uint32_t *)h = 0;
    n = h + 4;
    *(uint8_t **)(n + 4) = n;
    *(uint8_t **)(h + 4) = n;
    func_02087620(p + 0x4b8);
    func_02087620(p + 0x4d0);
    q = p + 0x48;
    v = q[0x12];
    v &= ~0xffu;
    v |= 1;
    q[0x12] = (uint8_t)v;
    *(uint8_t *)(p + 0x458) = 0;
    *(uint32_t *)(p + 0x4e8) = 0;
    func_02084b2c(p + 0x459, 0, 0x20);
    func_0202e570(self);
    func_0202e774(self, b, c, 0);
    return self;
}
