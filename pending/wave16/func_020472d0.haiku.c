#include "ffc/types.h"

extern uint8_t data_020afa6c[];
extern void func_02046d20(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void *func_020472d0(void *self, uint32_t b, uint8_t c)
{
    func_02046d20(self, b, 5, 1, 1);
    *(void **)self = data_020afa6c;
    *((uint8_t *)self + 0x94) = c;
    return self;
}
