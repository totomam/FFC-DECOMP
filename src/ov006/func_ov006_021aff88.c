#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov006_021bc7e4[];
extern uint8_t data_ov006_021b9930[];

void func_ov006_021aff88(void *object)
{
    uint8_t *p = *(uint8_t **)data_ov006_021bc7e4 + 0x4c4;
    func_02086ad4(object, (uint32_t)data_ov006_021b9930, p[0], p[1], p[2], p[3]);
}
