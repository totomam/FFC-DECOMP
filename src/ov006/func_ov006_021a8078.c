#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern int func_ov006_021a3778(void);
extern void func_ov006_021b4488(int a);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void *fn);
extern void func_ov006_021a8948(void);

void func_ov006_021a8078(void)
{
    int r4 = 0;
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021b4488(r4);
    func_ov006_021b4734(r4, 0x15);
    func_ov006_021a64d4(r4, 1);
    func_ov006_021a64c8(func_ov006_021a8948);
}
