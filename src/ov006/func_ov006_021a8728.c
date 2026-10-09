#include "ffc/types.h"

extern uint8_t data_ov006_021b9424[];
extern void func_02082820(void);
extern void func_ov006_021a3b88(void *a, void (*b)(void));

void func_ov006_021a8728(void)
{
    uint16_t *p;

    func_ov006_021a3b88(data_ov006_021b9424, func_02082820);

    p = (uint16_t *)0x04001008;
    p[0] = (p[0] & ~3) | 3;
    p[1] = (p[1] & ~3) | 3;

    p = (uint16_t *)0x04000008;
    p[0] = (p[0] & ~3) | 3;
    p[1] = (p[1] & ~3) | 3;
    p[2] = (p[2] & ~3) | 3;
}
