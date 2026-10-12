#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217a854[];

void *func_ov003_02164724(uint8_t *self, uint32_t a, uint16_t b, uint32_t d, ...)
{
    uint32_t *ap = &d;
    func_02056c9c(self, 0);
    *(uint8_t **)self = data_ov003_0217a854;
    *(uint32_t *)(self + 0x80) = a;
    *(uint16_t *)(self + 0x84) = b;
    *(uint16_t *)(self + 0x86) = *(uint16_t *)(ap + 2);
    *(uint32_t *)(self + 0x88) = ap[3];
    *(uint32_t *)(self + 0x8c) = ap[4];
    *(uint32_t *)(self + 0x90) = d;
    *(uint32_t *)(self + 0x94) = ap[1];
    *(uint32_t *)(self + 0x98) = ap[5];
    return self;
}
