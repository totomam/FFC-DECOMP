#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t x);
extern void func_ov006_021b4488(int32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int32_t a, int32_t b);
extern void func_ov006_021a64d4(int32_t a, int32_t b);
extern void func_ov006_021a64fc(int32_t a, int32_t b);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aea94(void);

void func_ov006_021a90c4(void)
{
    if (func_ov006_021b3fb8(1) == 0) {
        if (func_ov006_021b3fb8(0) == 0) {
            func_ov006_021b4488(0);
            func_ov006_021a3b28();
            func_ov006_021b4734(1, 1);
            func_ov006_021b4734(0, 0x15);
            func_ov006_021a64d4(0, 0);
            func_ov006_021a64fc(0, 1);
            func_ov006_021a64c8(func_ov006_021aea94);
        }
    }
}
