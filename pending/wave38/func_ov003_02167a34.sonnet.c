#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t v);
extern uint8_t data_ov003_0217ac8c[];

uint8_t *func_ov003_02167a34(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t g, uint8_t h, uint32_t f, uint8_t i, uint8_t j)
{
    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov003_0217ac8c;
    *(uint32_t *)(self + 0x80) = a;
    *(uint32_t *)(self + 0x84) = b;
    *(uint32_t *)(self + 0x88) = c;
    *(uint32_t *)(self + 0x8c) = d;
    *(uint32_t *)(self + 0x90) = e;
    *(uint32_t *)(self + 0x94) = 0;
    *(uint32_t *)(self + 0x98) = f;
    self[0x9d] = h;
    self[0x9e] = g;
    self[0x9f] = i;
    self[0xa0] = j;
    return self;
}
