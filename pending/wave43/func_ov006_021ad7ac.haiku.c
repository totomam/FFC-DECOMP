#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern uint32_t func_ov006_021a3778(void);
extern uint32_t func_ov006_021afadc(void);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(uint32_t x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(uint32_t x, uint32_t y);
extern void func_ov006_021afa00(void);
extern void *func_ov006_021afd28(void);
extern void func_ov006_021b002c(uint8_t x);
extern void func_ov006_021a64d4(uint32_t x, uint32_t y);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a64fc(uint32_t x, uint32_t y);
extern uint8_t data_ov006_021bc7a8;
extern void func_ov006_021ae0c4(void);
extern void func_ov006_021a9134(void);

void func_ov006_021ad7ac(void)
{
    uint32_t r4;
    uint32_t r5;

    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    while (func_ov006_021afadc() == 0) {
    }
    func_ov006_021a35d8();
    func_ov006_021b4488(0);
    func_ov006_021a3b28();
    r4 = 1;
    r5 = 0;
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc7a8 != 1) {
        func_ov006_021afa00();
        func_ov006_021b002c(*((uint8_t *)func_ov006_021afd28() + 0xf4));
        func_ov006_021a64d4(2, r4);
        func_ov006_021a64c8(func_ov006_021ae0c4);
    } else {
        func_ov006_021a64d4(r5, r4);
        func_ov006_021a64fc(r5, r5);
        func_ov006_021a64c8(func_ov006_021a9134);
    }
}
