#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a7f10(void);

void func_ov006_021a7edc(void)
{
    int r4 = 1;
    if (func_ov006_021b3fb8(1) == 0) {
        func_ov006_021b3fd0(3, r4, 0x3f, 0x40);
        func_ov006_021b3fd0(3, 0, 0x3f, 0x40);
        func_ov006_021a64c8((void *)func_ov006_021a7f10);
    }
}
