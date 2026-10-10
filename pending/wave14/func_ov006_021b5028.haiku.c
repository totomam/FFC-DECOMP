#include "ffc/types.h"

extern void func_ov006_021b56a8(uint32_t x);
extern uint8_t data_02fe0000;

void func_ov006_021b5028(void)
{
    uint32_t v = 1;
    func_ov006_021b56a8(v);
    *(uint32_t *)((uint32_t)&data_02fe0000 + 0x3ff8) |= v;
}
