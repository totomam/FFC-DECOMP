#include "ffc/types.h"

extern void func_ov006_021b20f0(int32_t);
extern void func_ov006_021b2140(void);
extern int32_t func_0208d87c(void *, void *, int32_t);
extern uint8_t data_ov006_021bc800[];
extern void func_ov006_021b29cc(void);

int32_t func_ov006_021b2998(void)
{
    func_ov006_021b20f0(3);
    if (func_0208d87c(*(uint8_t **)(data_ov006_021bc800 + 4) + 0x80, (void *)func_ov006_021b29cc, 2) != 2) {
        func_ov006_021b2140();
        func_ov006_021b20f0(10);
        return 0;
    }
    return 1;
}
