#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern uint32_t func_ov006_021a3778(void);
extern void func_ov006_021b4488(uint32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a7768(void);
extern void func_ov006_021a7f34(void);
extern uint8_t data_ov006_021bc758;

void func_ov006_021a8278(void)
{
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (data_ov006_021bc758 == 0) {
        if (func_ov006_021b3fb8(1) != 0) {
            return;
        }
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021b4488(0);
    if (data_ov006_021bc758 == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc758 == 0) {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a7768);
    } else {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a7f34);
    }
}
