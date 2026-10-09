#include "ffc/types.h"

extern void func_ov006_021a7f4c(void);
extern void func_ov006_021a3bfc(uint32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a7f88(void);

void func_ov006_021a7f34(void)
{
    func_ov006_021a7f4c();
    func_ov006_021a3bfc(26);
    func_ov006_021a64c8(func_ov006_021a7f88);
}
