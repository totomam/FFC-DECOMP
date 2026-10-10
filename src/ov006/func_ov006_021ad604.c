#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern void func_ov006_021a3bdc(int x);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021ad630(void);

void func_ov006_021ad604(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    func_ov006_021a3bdc(1);
    func_ov006_021a64c8((void *)func_ov006_021ad630);
}
