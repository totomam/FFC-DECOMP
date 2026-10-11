#include "ffc/types.h"

extern void func_ov006_021b20f0(int32_t);
extern int32_t func_0208dc18(void *, int32_t);
extern void func_ov006_021b2140(void);
extern void func_ov006_021b2b74(void);
extern void func_ov006_021b2618(void);

int32_t func_ov006_021b25ec(void)
{
    int32_t r4 = 0;
    func_ov006_021b20f0(3);
    if (func_0208dc18((void *)func_ov006_021b2618, 0) != 2) {
        func_ov006_021b2140();
        func_ov006_021b2b74();
        return r4;
    }
    return 1;
}
