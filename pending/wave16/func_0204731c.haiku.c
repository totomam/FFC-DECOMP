#include "ffc/types.h"

extern void func_02046d20(void *a, void *b, int c, int d, int e);
extern uint8_t data_020afa50[];

void *func_0204731c(void *self, void *a1, uint32_t v)
{
    func_02046d20(self, a1, 5, 1, 1);
    *(uint8_t **)self = data_020afa50;
    *(uint32_t *)((uint8_t *)self + 0x94) = v;
    return self;
}
