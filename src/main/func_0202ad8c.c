#include "ffc/types.h"

extern uint8_t data_020ad9c4[];
extern void func_0202ade8(void);
extern void func_0202addc(void);
extern void func_0209cf5c(void *base, uint32_t a, uint32_t b, void *c, void *d);
extern void func_0202aeec(void *self);

uint8_t *func_0202ad8c(uint8_t *p0, uint32_t p1)
{
    uint8_t *self = p0;
    uint32_t *w = (uint32_t *)(self + 0xc);
    *w &= ~0xffu;
    *(uint8_t **)self = data_020ad9c4;
    func_0209cf5c(self + 0xbc, 0xe, 0xc, (void *)func_0202addc, (void *)func_0202ade8);
    {
        uint32_t *q = (uint32_t *)(self + 0x164);
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        *(uint32_t *)(self + 0x194) = 0;
    }
    *(uint32_t *)(self + 0x30) = p1;
    func_0202aeec(self);
    return self;
}
