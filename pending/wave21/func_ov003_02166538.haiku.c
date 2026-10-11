#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217aa04[];

void *func_ov003_02166538(uint8_t *self, uint32_t a, uint32_t b, uint8_t c)
{
    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov003_0217aa04;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint8_t *)(self + 0x88) = c;
    return self;
}
