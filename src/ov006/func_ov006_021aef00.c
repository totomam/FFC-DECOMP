#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021b0600(int32_t arg);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021aef34(void);
extern uint8_t data_ov006_021bc7c8;

void func_ov006_021aef00(void)
{
    switch (func_ov006_021a3744()) {
    case 0:
        func_ov006_021b0600(7);
        break;
    case 1:
        func_ov006_021b0600(6);
        data_ov006_021bc7c8 = 1;
        break;
    default:
        return;
    }
    func_ov006_021a64c8(func_ov006_021aef34);
}
