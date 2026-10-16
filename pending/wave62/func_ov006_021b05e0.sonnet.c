#include "ffc/types.h"
extern uint8_t data_ov006_021bc7e8[];
extern void func_ov006_021b5774(int a, int b);
extern void func_ov006_021b49fc(void *p);
void func_ov006_021b05e0(void)
{
    func_ov006_021b5774(0, *(int *)(*(uint8_t **)data_ov006_021bc7e8 + 0xa8));
    func_ov006_021b49fc(data_ov006_021bc7e8);
}
