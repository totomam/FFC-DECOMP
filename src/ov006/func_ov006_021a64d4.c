#include "ffc/types.h"

extern uint8_t data_ov006_021bc70c[];

void func_ov006_021a64d4(uint32_t a, uint32_t b)
{
    *(uint32_t *)(data_ov006_021bc70c + 0x10) = a;
    *(uint32_t *)(data_ov006_021bc70c + 0x14) = b;
}
