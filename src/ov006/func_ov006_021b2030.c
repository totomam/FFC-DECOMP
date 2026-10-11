#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7fc;

uint8_t *func_ov006_021b2030(int32_t i)
{
    uint8_t *p = data_ov006_021bc7fc;
    if (!(*(uint16_t *)(p + 2) & (1 << i))) {
        return 0;
    }
    return p + 0xe + (i - 1) * 0x1e;
}
