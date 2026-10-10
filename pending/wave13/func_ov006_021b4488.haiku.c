#include "ffc/types.h"

extern uint8_t *data_ov006_021bc820;
extern void *func_ov006_021b4444(uint8_t *p);

void *func_ov006_021b4488(uint32_t idx)
{
    return func_ov006_021b4444(data_ov006_021bc820 + 0x610 + idx * 0x30);
}
