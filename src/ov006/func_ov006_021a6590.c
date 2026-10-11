#include "ffc/types.h"

extern void *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3ed4(uint32_t a, void *b, uint32_t c);
extern uint32_t *data_ov006_021bc72c;

void func_ov006_021a6590(void)
{
    data_ov006_021bc72c = func_ov006_021b49e4(100, 4);
    data_ov006_021bc72c[0x60 / 4] = func_ov006_021b3ed4(8, data_ov006_021bc72c, 12);
}
