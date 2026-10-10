#include "ffc/types.h"

extern int func_ov006_021a3744(void);
extern void func_ov006_021b0600(int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021ab178(void);

void func_ov006_021ab15c(void)
{
    if (func_ov006_021a3744() == 0) {
        func_ov006_021b0600(6);
        func_ov006_021a64c8(func_ov006_021ab178);
    }
}
