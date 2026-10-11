#include "ffc/types.h"

extern void func_ov006_021b392c(uint32_t x);
extern void func_ov006_021b3ef8(uint32_t x);
extern void func_ov006_021b49fc(void *p);
extern uint8_t *data_ov006_021bc820;

void func_ov006_021b420c(void)
{
    int i;
    for (i = 0; i < 2; i++) {
        func_ov006_021b392c(*(uint32_t *)(data_ov006_021bc820 + 0x674 + i * 4));
    }
    func_ov006_021b3ef8(*(uint32_t *)(data_ov006_021bc820 + 0x670));
    func_ov006_021b49fc(&data_ov006_021bc820);
}
