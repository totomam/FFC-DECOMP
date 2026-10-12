#include "ffc/types.h"

extern uint32_t func_ov003_0214dab0(uint32_t a, uint32_t b);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0202d4cc(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0202d85c(void *p, void *r, uint32_t z);
extern void func_0202d6bc(void *p, void *q);
extern void func_0202d65c(void *p, void *q);
extern void func_0202d75c(void *p);
extern void func_0202d794(void *p);
extern void func_0202d808(void *p, uint32_t x);
extern uint32_t func_0202d71c(void *p);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov003_02179a88[];
extern uint32_t data_ov003_02179a80[];

typedef struct { uint32_t a; uint32_t b; } Pair;

#define F32(off) (*(uint32_t *)(self + (off)))

void func_ov003_0214f29c(void *self0)
{
    uint8_t *self = (uint8_t *)self0;
    uint32_t buf[17];
    uint32_t v;
    void *p;

    uint32_t *pcc = (uint32_t *)(self + 0xcc);
    *(uint8_t *)(self + 0xb4) = 1;
    v = func_ov003_0214dab0(F32(0x88), *pcc);
    func_02086ad4(buf, (uint32_t)data_ov003_02179a88, v);
    p = func_0205681c(0x210);
    if (p != 0) {
        p = (void *)func_0202d4cc(p, F32(0x8c), 0x7fff, 0, 0);
    }
    F32(0xbc) = (uint32_t)p;
    func_0202d85c(p, buf, 0);
    F32(0x9c) = F32(0x90);
    F32(0xa4) = F32(0x94);
    F32(0xa0) = F32(0x98);
    func_0202d6bc((void *)F32(0xbc), self + 0x9c);
    F32(0xb0) = 0;
    F32(0xac) = 0;
    F32(0xa8) = 0;
    func_0202d65c((void *)F32(0xbc), self + 0xa8);
    func_0202d75c((void *)F32(0xbc));
    func_0202d794((void *)F32(0xbc));
    func_0202d808((void *)F32(0xbc), 1);
    F32(0xc4) = func_0202d71c((void *)F32(0xbc));
    func_02056bc0(self + 0x48, (void *)F32(0xbc));
    F32(0xb8) = F32(0xc4) + 0x3c;
    *(Pair *)(self + 0x80) = *(Pair *)data_ov003_02179a80;
}
