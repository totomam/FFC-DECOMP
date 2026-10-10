#include "ffc/types.h"

extern int func_ov006_021b3fb8(int);
extern void func_ov006_021a5488(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021aaab0(void);

void func_ov006_021aaa8c(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        func_ov006_021a5488();
        func_ov006_021b0600(0x15);
        func_ov006_021a64c8(func_ov006_021aaab0);
    }
}
