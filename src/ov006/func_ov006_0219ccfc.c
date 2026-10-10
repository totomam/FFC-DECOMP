#include "ffc/types.h"

extern uint32_t data_ov006_021ba1c8[];
extern uint32_t func_02084b2c(void *p, uint32_t zero, uint32_t size);

uint32_t func_ov006_0219ccfc(void *p)
{
    data_ov006_021ba1c8[1] = (uint32_t)p;
    return func_02084b2c(p, 0, 0x87 << 2);
}
