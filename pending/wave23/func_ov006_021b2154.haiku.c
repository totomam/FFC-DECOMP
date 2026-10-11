#include "ffc/types.h"

extern void func_ov006_021b20f0(int32_t x);
extern int32_t func_0208d918(void *fn, uint32_t arg);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2184(void);
extern uint32_t data_ov006_021bc800[];

int32_t func_ov006_021b2154(void)
{
    func_ov006_021b20f0(3);
    if (func_0208d918((void *)func_ov006_021b2184, data_ov006_021bc800[1]) != 2) {
        func_ov006_021b2140();
        func_ov006_021b20f0(9);
        return 0;
    }
    return 1;
}
