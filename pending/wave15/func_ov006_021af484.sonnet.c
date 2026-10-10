#include "ffc/types.h"

extern uint32_t *data_ov006_021bc7d0[];
extern void func_ov006_021b578c(int a, uint32_t b);
extern void func_ov006_021b49fc(uint32_t **p);

void func_ov006_021af484(void)
{
    func_ov006_021b578c(1, **data_ov006_021bc7d0);
    func_ov006_021b49fc(data_ov006_021bc7d0);
}
