#include "ffc/types.h"

extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ae7f8(void);

void func_ov006_021ae7dc(void)
{
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021ae7f8);
}
