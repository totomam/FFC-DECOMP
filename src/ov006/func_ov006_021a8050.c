#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t a);
extern void func_ov006_021a3724(void);
extern void func_ov006_021b3fd0(int32_t a, int32_t b, int32_t c, int32_t d);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a8078(void);

void func_ov006_021a8050(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        func_ov006_021a3724();
        func_ov006_021b3fd0(3, 0, 0x15, 8);
        func_ov006_021a64c8((void *)func_ov006_021a8078);
    }
}
