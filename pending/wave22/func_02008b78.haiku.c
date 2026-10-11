#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t x);
extern uint32_t data_020aace8[];

void *func_02008b78(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, 0);
    uint32_t e = d;
    *(uint32_t *)self = (uint32_t)data_020aace8;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0x8c) = e;
    return self;
}
