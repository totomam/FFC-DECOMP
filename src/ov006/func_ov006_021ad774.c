#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern void func_ov006_021a3724(void);
extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021ad7ac(void);

void func_ov006_021ad774(void)
{
    int r4 = 1;
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    func_ov006_021a3724();
    func_ov006_021b3fd0(3, r4, r4, 8);
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021ad7ac);
}
