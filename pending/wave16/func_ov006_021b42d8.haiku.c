#include "ffc/types.h"

extern void func_ov006_021b53d0(uint32_t);
extern void func_ov006_021b3f0c(uint32_t, void *);
extern uint8_t *data_ov006_021bc820;

void func_ov006_021b42d8(uint8_t *p)
{
    func_ov006_021b53d0(*(uint32_t *)(p + 0x28));
    func_ov006_021b3f0c(*(uint32_t *)((uint8_t *)data_ov006_021bc820 + 0x670), p);
}
