#include "ffc/types.h"

extern void func_ov006_021a7de0(void);
extern void func_ov006_021a3bfc(uint32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a7e1c(void);

void func_ov006_021a7dc8(void)
{
    func_ov006_021a7de0();
    func_ov006_021a3bfc(31);
    func_ov006_021a64c8(func_ov006_021a7e1c);
}
