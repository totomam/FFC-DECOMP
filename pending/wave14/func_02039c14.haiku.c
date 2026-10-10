#include "ffc/types.h"

extern void func_020396c4(void *self);
extern uint8_t data_020ae9a0[];

void *func_02039c14(void *self, uint32_t val)
{
    func_020396c4(self);
    *(uint8_t **)self = data_020ae9a0;
    *(uint32_t *)((uint8_t *)self + 0x88) = val;
    return self;
}
