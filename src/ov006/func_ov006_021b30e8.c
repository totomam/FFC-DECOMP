#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;

void func_ov006_021b30e8(uint8_t *a, uint8_t *b)
{
    *a = data_ov006_021bc808[0xa90];
    *b = (data_ov006_021bc808[0xa90] != data_ov006_021bc808[0xa91]);
    data_ov006_021bc808[0xa91] = data_ov006_021bc808[0xa90];
}
