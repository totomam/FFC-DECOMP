#include "ffc/types.h"

extern void *data_ov006_021bc6a8;
extern void func_ov006_021b5770(uint32_t a, void (*b)(void));
extern void func_ov006_021a3978(void);

void func_ov006_021a3724(void)
{
    ((uint8_t *)data_ov006_021bc6a8)[0x19] = 1;
    func_ov006_021b5770(*(uint32_t *)((uint8_t *)data_ov006_021bc6a8 + 0xc), func_ov006_021a3978);
}
