#include "ffc/types.h"
extern void func_ov006_021b578c(int a, int b);
extern void func_ov006_021b49fc(void *p);
extern uint8_t *data_ov006_021bc848;
void func_ov006_021b5168(void)
{
    func_ov006_021b578c(1, *(int *)(data_ov006_021bc848 + 0x808));
    func_ov006_021b49fc(&data_ov006_021bc848);
}
