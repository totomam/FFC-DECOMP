#include "ffc/types.h"

extern uint8_t *data_ov006_021bc730;

void func_ov006_021a6730(uint32_t v)
{
    *(uint32_t *)(data_ov006_021bc730 + 0x1e298) = v;
}
