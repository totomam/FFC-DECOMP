#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a8a88(void);

void func_ov006_021a8a68(void)
{
    if (func_ov006_021a3744() == 0) {
        func_ov006_021b0644();
        func_ov006_021b0600(7);
        func_ov006_021a64c8(func_ov006_021a8a88);
    }
}
