#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t x);
extern void func_ov006_021b4488(int32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int32_t a, int32_t b);
extern void func_ov006_021a64d4(int32_t a, int32_t b);
extern void func_ov006_021a64fc(int32_t a, int32_t b);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021aea94(void);

void func_ov006_021aed28(void)
{
    int32_t one = 1;
    int32_t zero = 0;
    if (func_ov006_021b3fb8(one) == 0) {
        if (func_ov006_021b3fb8(zero) == 0) {
            func_ov006_021b4488(zero);
            func_ov006_021a3b28();
            func_ov006_021b4734(one, one);
            func_ov006_021b4734(zero, 0x15);
            func_ov006_021a64d4(zero, zero);
            func_ov006_021a64fc(zero, 2);
            func_ov006_021a64c8(func_ov006_021aea94);
        }
    }
}
