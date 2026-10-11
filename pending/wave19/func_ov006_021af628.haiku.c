#include "ffc/types.h"

extern uint32_t *data_ov006_021bc7dc;
extern void func_ov006_021b578c(uint32_t a, uint32_t b);
extern void func_ov006_021b3b9c(uint32_t a);
extern void func_ov006_021b49fc(void *p);

void func_ov006_021af628(void)
{
    func_ov006_021b578c(0, data_ov006_021bc7dc[3]);
    func_ov006_021b3b9c(data_ov006_021bc7dc[0]);
    func_ov006_021b49fc(&data_ov006_021bc7dc);
}
