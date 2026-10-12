#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern uint32_t func_ov006_021a3778(void);
extern void func_ov006_021b0e68(void);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(uint32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ad878(void);
extern void func_ov006_021aed98(void);
extern void func_ov006_021aec34(void);
extern uint8_t data_ov006_021bc7cc;

void func_ov006_021af234(void) {
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (data_ov006_021bc7cc == 2) {
        if (func_ov006_021b3fb8(1) != 0) {
            return;
        }
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021b0e68();
    func_ov006_021a35d8();
    func_ov006_021b4488(0);
    if ((uint8_t)(data_ov006_021bc7cc + 0xfe) <= 1) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc7cc == 2) {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8(func_ov006_021ad878);
    } else if (data_ov006_021bc7cc == 3) {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8(func_ov006_021aed98);
    } else {
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8(func_ov006_021aec34);
    }
}
