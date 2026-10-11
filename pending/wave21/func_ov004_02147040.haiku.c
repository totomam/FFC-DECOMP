#include "ffc/types.h"

extern void func_020694ac(void *self, uint32_t a, uint32_t b);
extern void func_020095b8(void *p, uint32_t a);
extern uint8_t data_ov004_02157d18[];

void *func_ov004_02147040(void *self, uint32_t p1, uint32_t p2, uint32_t p3)
{
    func_020694ac(self, p3, 0);
    *(uint8_t **)self = data_ov004_02157d18;
    func_020095b8((uint8_t *)self + 0xb8, p1);
    *(uint32_t *)((uint8_t *)self + 0xc4) = p2;
    return self;
}
