#include "ffc/types.h"

extern uint8_t *data_020b8e44;

void func_ov007_021b0d38(uint8_t *self)
{
    data_020b8e44[4] = 0xff;
    {
        uint32_t *p = *(uint32_t **)(self + 0x90);
        *p = 1;
    }
    {
        uint32_t v = *(uint32_t *)(self + 0xc);
        v &= ~0xffu;
        v |= 2;
        *(uint32_t *)(self + 0xc) = v;
    }
}
