#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c67b8[];

void *func_ov007_021b3fbc(void *self, uint32_t a, uint32_t b)
{
    func_020694ac(self, 0, 0);
    *(void **)self = data_ov007_021c67b8;
    *(uint32_t *)((uint8_t *)self + 0xd0) = a;
    *(uint32_t *)((uint8_t *)self + 0xd4) = b;
    return self;
}
