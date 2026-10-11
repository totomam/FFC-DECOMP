#include "ffc/types.h"

extern int func_ov006_021b26a8(void);
extern void func_ov006_021b2c3c(void);
extern uint8_t *data_ov006_021bc808;

int func_ov006_021b3458(void)
{
    if (func_ov006_021b26a8() == 1) {
        func_ov006_021b2c3c();
        data_ov006_021bc808[0xa90] = 1;
        return 1;
    }
    return 0;
}
