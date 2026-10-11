#include "ffc/types.h"

extern uint32_t func_ov002_0219b1f4(uint32_t x);
extern uint32_t func_02058228(uint32_t a, uint32_t b, uint32_t c, int32_t d);

void func_ov002_0219b5f4(uint8_t *self)
{
    uint32_t v = func_ov002_0219b1f4(*(uint32_t *)(self + 0x9c));
    func_02058228(*(uint32_t *)(self + 0x98), v, 0, -1);
}
