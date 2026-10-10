#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t);
extern void func_ov006_021a3bdc(int32_t);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021ada7c(void);

void func_ov006_021ada50(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    func_ov006_021a3bdc(0);
    func_ov006_021a64c8(func_ov006_021ada7c);
}
