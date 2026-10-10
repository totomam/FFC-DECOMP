#include "ffc/types.h"

extern uint8_t *data_ov006_021bc700;

void func_ov006_021a54d8(uint8_t v)
{
    uint8_t *p = data_ov006_021bc700 + 0x68;
    *p = v;
}
