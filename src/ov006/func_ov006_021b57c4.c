#include "ffc/types.h"

extern uint8_t *data_ov006_021bc884;

void func_ov006_021b57c4(uint32_t idx, uint8_t val)
{
    uint8_t *p = data_ov006_021bc884 + (idx << 6);
    p += 0x38;
    *p = val;
}
