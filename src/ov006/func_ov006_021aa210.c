#include "ffc/types.h"

extern void func_ov006_021b4100(uint32_t arg);
extern void func_ov006_021aa224(void);
extern void func_ov006_021a64c8(void (*fn)(void));

void func_ov006_021aa210(void)
{
    func_ov006_021b4100(8);
    func_ov006_021a64c8(func_ov006_021aa224);
}
