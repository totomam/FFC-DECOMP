#include "ffc/types.h"

extern uint32_t data_02143580[];

void func_0208cdd8(uint32_t idx, uint32_t val)
{
    uint32_t *p = (uint32_t *)((uint8_t *)data_02143580[1] + 0x18);
    p[idx] = val;
}
