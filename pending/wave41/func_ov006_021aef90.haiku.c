#include "ffc/types.h"

extern int32_t func_ov006_021b3fb8(int32_t x);
extern int32_t func_ov006_021a3778(void);
extern void func_ov006_021b4488(int32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int32_t a, int32_t b);
extern void func_ov006_021a64d4(int32_t a, int32_t b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ad878(void);
extern void func_ov006_021af028(void);
extern uint8_t data_ov006_021bc7c8;

void func_ov006_021aef90(void)
{
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (data_ov006_021bc7c8 == 0) {
        if (func_ov006_021b3fb8(1) != 0) {
            return;
        }
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021b4488(0);
    if (data_ov006_021bc7c8 == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc7c8 == 0) {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8(func_ov006_021ad878);
    } else {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8(func_ov006_021af028);
    }
}
