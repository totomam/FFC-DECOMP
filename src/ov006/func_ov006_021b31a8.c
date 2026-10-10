#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_ov006_021b191c(uint32_t a, uint16_t b);

void func_ov006_021b31a8(void)
{
    uint8_t *p = data_ov006_021bc808;
    func_ov006_021b191c(*(uint32_t *)(p + 0xac8), *(uint16_t *)(p + 0x648));
}
