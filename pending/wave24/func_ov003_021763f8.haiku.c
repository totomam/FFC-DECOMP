#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t arg);
extern uint8_t data_ov003_0217bae8[];

uint8_t *func_ov003_021763f8(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    func_02056c9c(self, 0);
    *(uint8_t **)self = data_ov003_0217bae8;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = c;
    *(uint32_t *)(self + 0x8c) = d * 2;
    *(uint32_t *)(self + 0x90) = e;
    return self;
}
