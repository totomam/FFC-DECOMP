#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7fc;
extern void func_ov006_021b20c8(uint8_t *p);

void func_ov006_021b18f4(uint8_t *p)
{
    data_ov006_021bc7fc = p;
    func_ov006_021b20c8(p + 0x1b160);
    *(uint32_t *)(data_ov006_021bc7fc + 0x1b140) = 0;
    *(uint32_t *)(data_ov006_021bc7fc + 0x1b144) = 0;
}
