#include "ffc/types.h"

extern uint32_t *data_ov006_021bc6f0;
extern void func_ov006_021b3b9c(uint32_t v);

void func_ov006_021a3df0(void)
{
    int i;
    for (i = 0; i < 4; i++) {
        if (data_ov006_021bc6f0[i]) {
            func_ov006_021b3b9c(data_ov006_021bc6f0[i]);
            data_ov006_021bc6f0[i] = 0;
        }
    }
}
