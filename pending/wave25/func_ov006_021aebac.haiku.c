#include "ffc/types.h"

extern void func_ov006_021aebdc(void);
extern void func_ov006_021aebe0(void);
extern int32_t func_ov006_021b1420(void);
extern void func_ov006_021b0600(int32_t);
extern void func_ov006_021b13f8(void);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021aebe4(void);

void func_ov006_021aebac(void)
{
    func_ov006_021aebdc();
    func_ov006_021aebe0();
    if (func_ov006_021b1420() == 0) {
        func_ov006_021b0600(6);
        func_ov006_021b13f8();
        func_ov006_021b0600(6);
        func_ov006_021a64c8(func_ov006_021aebe4);
    }
}
