#include "ffc/types.h"

extern int32_t func_ov006_021a3744(void);
extern void func_ov006_021b0600(int32_t x);
extern void func_ov006_021ae5dc(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021ae400(void);
extern uint8_t data_ov006_021bc7b4[];

void func_ov006_021ae3c8(void)
{
    switch (func_ov006_021a3744()) {
    case 0:
        func_ov006_021b0600(7);
        break;
    case 1:
        func_ov006_021b0600(6);
        func_ov006_021ae5dc();
        data_ov006_021bc7b4[2] = 1;
        break;
    default:
        return;
    }
    func_ov006_021a64c8((void *)func_ov006_021ae400);
}
