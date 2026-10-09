#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a6a28(void);

void func_ov006_021a6a00(void)
{
    func_ov006_021b3fd0(3, 1, 0x3f, 0x14);
    func_ov006_021b3fd0(3, 0, 0x3f, 0x14);
    func_ov006_021a64c8(func_ov006_021a6a28);
}
