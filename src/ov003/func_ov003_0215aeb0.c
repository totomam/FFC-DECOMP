#include "ffc/types.h"

extern uint8_t *func_ov003_02155b40(uint8_t *self);

void func_ov003_0215aeb0(uint8_t *self)
{
    uint16_t v = *(uint16_t *)(func_ov003_02155b40(self) + 0x10);
    *(uint16_t *)(self + 0xb2) = v;
    *(uint16_t *)(self + 0xb2) = *(uint16_t *)(self + 0xb2) | 1;
}
