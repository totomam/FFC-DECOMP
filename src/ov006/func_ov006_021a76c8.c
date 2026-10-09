#include "ffc/types.h"

extern void func_ov006_021a37a8(void);
extern void func_ov006_021b4100(uint32_t arg);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a76e0(void);

void func_ov006_021a76c8(void)
{
    func_ov006_021a37a8();
    func_ov006_021b4100(8);
    func_ov006_021a64c8(func_ov006_021a76e0);
}
