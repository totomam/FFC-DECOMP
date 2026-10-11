#include "ffc/types.h"

extern void func_0206aa58(void *p, uint32_t a, uint32_t b);
extern void func_020095b8(void *p, uint32_t v);
extern uint8_t data_ov003_0217b094[];

void *func_ov003_02168084(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    func_0206aa58(self, 0, a4);
    *(void **)self = data_ov003_0217b094;
    *(uint32_t *)(self + 0x38) = a1;
    *(uint32_t *)(self + 0x3c) = a2;
    func_020095b8(self + 0x40, a3);
    return self;
}
