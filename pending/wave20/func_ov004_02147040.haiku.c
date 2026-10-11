#include "ffc/types.h"

extern void func_020694ac(void *self, void *a, int b);
extern void func_020095b8(void *self, void *a);
extern uint8_t data_ov004_02157d18[];

void *func_ov004_02147040(void *self, void *a, uint32_t b, void *c)
{
    uint8_t *p = (uint8_t *)self;
    func_020694ac(self, c, 0);
    *(void **)self = (void *)data_ov004_02157d18;
    func_020095b8(p + 0xb8, a);
    *(uint32_t *)(p + 0xc4) = b;
    return self;
}
