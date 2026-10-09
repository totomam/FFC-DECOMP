#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021b46e8(int a, int b);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a879c(void);

void func_ov006_021a8778(void)
{
    func_ov006_021b3fd0(2, 0, 0x15, 8);
    func_ov006_021b46e8(0, 0x15);
    func_ov006_021a64c8((void *)func_ov006_021a879c);
}
