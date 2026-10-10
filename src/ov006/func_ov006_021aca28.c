#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aca50(void);

void func_ov006_021aca28(void)
{
    func_ov006_021b3fd0(3, 1, 1, 8);
    func_ov006_021b3fd0(3, 0, 0x14, 8);
    func_ov006_021a64c8(func_ov006_021aca50);
}
