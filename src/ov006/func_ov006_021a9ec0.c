#include "ffc/types.h"
extern int func_ov006_021b1420(void);
extern void func_ov006_021b0600(int a);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021a9ee0(void);
void func_ov006_021a9ec0(void)
{
    if (func_ov006_021b1420() != 0) return;
    func_ov006_021b0600(6);
    func_ov006_021b13f8();
    func_ov006_021a64c8((void *)func_ov006_021a9ee0);
}
