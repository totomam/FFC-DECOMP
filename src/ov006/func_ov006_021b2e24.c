#include "ffc/types.h"

extern void func_ov006_021b2dc8(void);
extern void func_ov006_021b2938(void);
extern uint8_t *data_ov006_021bc808;

int func_ov006_021b2e24(void)
{
    uint8_t s = data_ov006_021bc808[0xa90];
    if (s == 1 || s == 0x1a || s == 0x1d) {
        func_ov006_021b2dc8();
        func_ov006_021b2938();
        data_ov006_021bc808[0xa90] = 2;
        return 1;
    }
    return 0;
}
