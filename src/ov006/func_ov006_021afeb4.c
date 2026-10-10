#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_ov006_021b04fc(void *a, uint8_t *b);

void func_ov006_021afeb4(void *a)
{
    func_ov006_021b04fc(a, data_ov006_021bc7e4 + 0x4f0);
}
