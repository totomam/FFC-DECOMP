#include "ffc/types.h"

extern uint8_t *data_ov006_021bc700;

uint8_t func_ov006_021a54a8(void)
{
    return *(uint8_t *)(data_ov006_021bc700 + 0x60);
}
