#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t x);
extern void func_020889f4(int32_t x);
extern void func_0208b624(void);

void func_ov006_021a741c(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    func_020889f4(1 << 23);
    func_0208b624();
}
