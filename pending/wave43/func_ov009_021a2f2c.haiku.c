#include "ffc/types.h"

extern void func_02056c9c(void *obj, int zero);
extern void func_0202dec4(void *p);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov009_021a3094(void *obj, void *a, uint32_t b);
extern char data_ov009_021b0764[];

uint8_t *func_ov009_021a2f2c(uint8_t *self, void *a, uint32_t b, uint8_t c, uint32_t d)
{
    uint32_t flag = 0;
    void *n;

    func_02056c9c(self, 0);
    *(void **)self = data_ov009_021b0764;
    *(uint32_t *)(self + 0x80) = d;
    if (d != 0) {
        flag = 1;
    }
    *(uint8_t *)(self + 0x84) = (uint8_t)flag;
    *(uint32_t *)(self + 0x88) = 0;
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint32_t *)(self + 0x90) = 0;
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x98) = 0;
    *(uint32_t *)(self + 0x9c) = 0;
    *(uint32_t *)(self + 0xa0) = 0;
    *(uint32_t *)(self + 0xa4) = 0;
    *(uint32_t *)(self + 0xa8) = 0;
    *(uint8_t *)(self + 0xc4) = 0;
    *(uint8_t *)(self + 0xc5) = c;
    *(uint32_t *)(self + 0xc8) = 0;
    self[0x13c] = 0;
    self[0x13d] = 0;
    func_0202dec4(self + 0x168);
    n = func_0203b6f0();
    *(void **)(self + 0x98) = n;
    {
        uint32_t t = ((uint8_t *)n)[0x12];
        t &= ~0xffu;
        t |= 1;
        ((uint8_t *)n)[0x12] = (uint8_t)t;
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x98));
    func_ov009_021a3094(self, a, b);
    return self;
}
