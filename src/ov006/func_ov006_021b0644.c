#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e8;
extern int32_t func_020798c0(uint8_t *p, int32_t v);

int32_t func_ov006_021b0644(void)
{
    return func_020798c0(data_ov006_021bc7e8 + 0xa0, 0);
}
