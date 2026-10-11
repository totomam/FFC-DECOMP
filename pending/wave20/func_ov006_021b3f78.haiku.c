#include "ffc/types.h"

extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_02081b5c(uint32_t addr, uint32_t val, uint32_t size);
extern uint32_t data_ov006_021bc81c;

void func_ov006_021b3f78(void)
{
    data_ov006_021bc81c = func_ov006_021b49e4(0x18, 4);
    func_02081b5c(0x4000050, 0x3f, 0x10);
    func_02081b5c(0x4001050, 0x3f, 0x10);
}
