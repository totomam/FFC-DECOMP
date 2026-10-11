#include "ffc/types.h"

extern void func_ov006_021a4cac(int32_t arg);
extern void func_ov006_021b0600(int32_t arg);
extern uint8_t *data_ov006_021bc6fc;

void func_ov006_021a47f0(void)
{
    uint8_t *p = data_ov006_021bc6fc;
    func_ov006_021a4cac(p[0x11d] != 1);
    func_ov006_021b0600(1);
}
