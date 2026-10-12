#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t n);
extern uint32_t func_02093bb4(const uint16_t *text);
extern void *func_02056830(uint32_t n);
extern void func_02093bc8(void *dst, const uint16_t *src);
extern uint32_t func_02092864(const uint8_t *text);
extern void func_02092878(void *dst, const uint8_t *src);
extern uint32_t data_020b25e0[];
extern uint16_t data_020b26a0[];
extern uint8_t data_020b26a8[];
extern uint32_t data_020b26b0[];

void *func_0207520c(void *self, uint32_t a, const uint16_t *b, uint32_t c, const uint8_t *d)
{
    uint8_t *s = (uint8_t *)self;
    void *p;

    func_02056c9c(self, 0);
    *(uint32_t **)s = data_020b25e0;
    *(uint32_t *)(s + 0x88) = a;
    if (b == 0) {
        b = data_020b26a0;
    }
    p = func_02056830((func_02093bb4(b) + 1) << 1);
    *(void **)(s + 0x8c) = p;
    func_02093bc8(p, b);
    if (c != 0) {
        *(uint32_t *)(s + 0x90) = c;
    } else {
        *(uint32_t *)(s + 0x90) = 0x2a48;
    }
    if (d == 0) {
        d = data_020b26a8;
    }
    p = func_02056830(func_02092864(d) + 1);
    *(void **)(s + 0x94) = p;
    func_02092878(p, d);
    *(uint32_t *)(s + 0x80) = data_020b26b0[0];
    *(uint32_t *)(s + 0x84) = data_020b26b0[1];
    return self;
}
