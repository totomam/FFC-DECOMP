#include "ffc/types.h"

extern uint32_t func_0203bfe0(int x);
extern uint32_t func_0203bfcc(int x);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov001_0218dde0(void *self, int x);
extern uint32_t func_0205681c(int x);
extern uint32_t func_ov012_021d274c(uint32_t a, void *b);
extern uint32_t func_0203bfb8(int x);
extern uint32_t func_0203bfa4(int x);
extern uint32_t data_ov007_021c6d54[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov007_021b6a2c(void *self0)
{
    uint8_t *self = (uint8_t *)self0;
    uint32_t a, b, c, r4;
    uint32_t *d;
    void *o;

    *(uint32_t *)(self + 0x308) = 0;
    a = func_0203bfe0(0x1e);
    b = func_0203bfcc(0x1e);
    c = func_0203b6fc();
    func_02056bc0((void *)c, (void *)b);
    func_02056bc0((void *)c, (void *)a);
    o = func_ov001_0218dde0(self, 1);
    func_02056bc0(o, (void *)c);
    r4 = func_0205681c(0x84);
    if (r4 != 0) {
        r4 = func_ov012_021d274c(r4, self + 0x308);
    }
    o = func_ov001_0218dde0(self, 1);
    func_02056bc0(o, (void *)r4);
    a = func_0203bfb8(0x1e);
    b = func_0203bfa4(0x1e);
    c = func_0203b6fc();
    func_02056bc0((void *)c, (void *)b);
    func_02056bc0((void *)c, (void *)a);
    o = func_ov001_0218dde0(self, 1);
    func_02056bc0(o, (void *)c);
    {
        Pair tmp = *(Pair *)data_ov007_021c6d54;
        *(Pair *)(self + 0xb0) = tmp;
    }
}
