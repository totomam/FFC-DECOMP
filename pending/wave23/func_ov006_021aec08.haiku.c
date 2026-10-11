#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021ae610(void);

void func_ov006_021aec08(void)
{
    int z = 0;
    if (func_ov006_021b3fb8(z) == 0) {
        func_ov006_021b4734(z, 0x14);
        func_ov006_021a64d4(z, 1);
        func_ov006_021a64c8((void *)func_ov006_021ae610);
    }
}
