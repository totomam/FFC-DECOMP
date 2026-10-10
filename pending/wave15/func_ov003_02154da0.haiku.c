#include "ffc/types.h"

extern uint32_t func_0202b2bc(uint32_t x);

void func_ov003_02154da0(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x1e4);
    if (v != 0) {
        *(uint32_t *)(p + 0x1dc) = func_0202b2bc(v);
    }
}
