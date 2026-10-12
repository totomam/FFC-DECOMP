#include "ffc/types.h"

#define W(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define B(p, off) (*(uint8_t *)((uint8_t *)(p) + (off)))
#define H(p, off) (*(uint16_t *)((uint8_t *)(p) + (off)))

extern uint8_t *func_0207ba54(void *self, uint32_t a, uint32_t b);
extern void func_0207c708(void *p, uint32_t a);
extern void func_0207bac8(void *p);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint64_t func_0209a6d4(uint64_t first, uint64_t second);
extern void func_0207c908(void *p);
extern void func_0207c914(void *p, uint32_t a, uint32_t b);
extern int func_0207bde4(void *p, uint32_t a, void *b);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern int func_0207a0f0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                         uint32_t e, void *f, void *g);
extern void func_0207be0c(void *p);
extern void func_0207a290(void *p, uint32_t a, uint32_t b);
extern void func_0207bfa8(void);

int func_0207baf0(void *self, uint8_t *a1, uint32_t a2, uint32_t a3,
                  uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                  uint32_t s4, uint32_t s5)
{
    uint8_t *b;
    uint8_t *ap = a1;
    volatile uint32_t f10;
    int r6;
    uint32_t v;
    int ok;

    b = func_0207ba54(self, a2, a3);
    if (b == 0) {
        return 0;
    }
    func_0207c708(b, W(ap, 0));
    if (((int (*)(void *, uint32_t))W(b, 0x16c))(b, W(ap, 0)) == 0) {
        func_0207bac8(b);
        return 0;
    }
    W(b, 0x168) = (uint32_t)func_0209a6d4(
        func_0209a71c((uint64_t)H(b, 0xcc), (uint64_t)s1), 1000);
    if (W(b, 0x168) != 0 && B(b, 0xc8) == 2) {
        W(b, 0x118) |= 0x10;
    } else {
        W(b, 0x118) &= ~0x10;
    }
    W(b, 0x11c) = 4;
    v = W(b, 0x118);
    v &= ~0x20;
    W(b, 0x118) = v;
    v &= ~2;
    W(b, 0x118) = v;
    W(b, 0x120) = 0;
    v = W(b, 0x118);
    v &= ~4;
    W(b, 0x118) = v;
    v &= ~8;
    W(b, 0x118) = v;
    W(b, 0x124) = 0;
    W(b, 0x13c) = s2;
    W(b, 0x140) = s3;
    W(b, 0x144) = s4;
    W(b, 0x148) = s5;
    W(b, 0x14c) = s0;
    W(b, 0x164) = 0;
    W(b, 0x15c) = B(ap, 4);
    W(b, 0x160) = 0x7f;
    func_0207c908(b + 0xf0);
    func_0207c914(b + 0xf0, 0x7f << 8, 1);
    if (B(b, 0xc8) == 0) {
        f10 = 0;
    } else if (B(b, 0xc8) == 1 || B(b, 0xc8) == 2) {
        f10 = 1;
    }
    r6 = B(b, 0xca);
    if (ap[7] & 1) {
        r6 = 2;
    }
    if (r6 > B(b, 0x12c)) {
        r6 = B(b, 0x12c);
    }
    v = W(b, 0x118);
    v &= ~0x40;
    W(b, 0x118) = v | ((r6 == 1) ? 0x40 : 0);
    if (func_0207bde4(b, r6, b + 0x12e) == 0) {
        ((void (*)(void *))W(b, 0x170))(b);
        func_0207bac8(b);
        return 0;
    }
    ok = func_0207a0f0(b, f10, W(b, 0x134),
                       func_0209a978(W(b, 0x138) * r6, B(b, 0x12c)),
                       H(b, 0xce), 4, (void *)func_0207bfa8, b);
    if (ok == 0) {
        func_0207be0c(b);
        ((void (*)(void *))W(b, 0x170))(b);
        func_0207bac8(b);
        return 0;
    }
    if (r6 == 2) {
        func_0207a290(b, 0, 0);
        func_0207a290(b, 1, 0x7f);
    }
    return 1;
}
