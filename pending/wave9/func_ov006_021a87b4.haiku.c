#include "ffc/types.h"

extern int32_t func_ov006_021b1420(void);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a87d0(void);

void func_ov006_021a87b4(void)
{
    if (func_ov006_021b1420() != -2) {
        func_ov006_021a64c8((void *)func_ov006_021a87d0);
    }
}
