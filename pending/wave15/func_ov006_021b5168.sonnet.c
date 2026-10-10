#include "ffc/types.h"

extern uint32_t data_ov006_021bc848;
extern void func_ov006_021b578c(int a, uint32_t b);
extern void func_ov006_021b49fc(uint32_t *p);

void func_ov006_021b5168(void)
{
    uint8_t *p = (uint8_t *)data_ov006_021bc848;
    func_ov006_021b578c(1, *(uint32_t *)(p + 0x808));
    func_ov006_021b49fc(&data_ov006_021bc848);
}
