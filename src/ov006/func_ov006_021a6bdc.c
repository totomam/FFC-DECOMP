#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a6c04(void);

void func_ov006_021a6bdc(void)
{
    func_ov006_021b3fd0(2, 1, 0x2, 0x14);
    func_ov006_021b3fd0(2, 0, 0x2, 0x14);
    func_ov006_021a64c8(func_ov006_021a6c04);
}
