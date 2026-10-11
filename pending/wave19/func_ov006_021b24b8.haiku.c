#include "ffc/types.h"

extern int32_t func_0208e91c(uint32_t p);
extern void func_ov006_021b2140(void);
extern uint32_t data_ov006_021bc800[];

int func_ov006_021b24b8(void)
{
    uint32_t v = data_ov006_021bc800[1];
    if (func_0208e91c(v + 0x1e00) != 2) {
        func_ov006_021b2140();
        return 0;
    }
    return 1;
}
