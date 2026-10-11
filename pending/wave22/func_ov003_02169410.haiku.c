#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t flag);
extern uint32_t data_ov003_0217aeb4;

void *func_ov003_02169410(void *self, uint32_t a, uint8_t b, uint32_t c, uint32_t d)
{
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(uint32_t *)(p + 0x00) = (uint32_t)&data_ov003_0217aeb4;
    *(uint32_t *)(p + 0x80) = a;
    *(uint8_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = c;
    *(uint32_t *)(p + 0x8c) = d;
    return self;
}
