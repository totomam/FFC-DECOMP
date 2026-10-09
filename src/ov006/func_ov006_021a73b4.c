#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a73d0(void);

void func_ov006_021a73b4(void)
{
    if (func_ov006_021a3744() == 0) {
        func_ov006_021b0600(6);
        func_ov006_021a64c8(func_ov006_021a73d0);
    }
}
