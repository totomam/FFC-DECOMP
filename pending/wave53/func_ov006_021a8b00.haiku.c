#include "ffc/types.h"

extern int func_ov006_021b3fb8(int);
extern int func_ov006_021a3778(void);
extern int func_ov006_021a671c(void);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(int);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int, int);
extern void func_ov006_021a64d4(int, int);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a7768(void);
extern void func_ov006_021a8448(void);
extern void func_ov006_021a86a4(void);
extern uint8_t data_ov006_021bc768;

void func_ov006_021a8b00(void)
{
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (data_ov006_021bc768 == 0) {
        if (func_ov006_021b3fb8(1) != 0) {
            return;
        }
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    if (data_ov006_021bc768 == 0) {
        if (func_ov006_021a671c() == 0) {
            return;
        }
    }
    func_ov006_021a35d8();
    func_ov006_021b4488(0);
    if (data_ov006_021bc768 == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc768 == 0) {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a7768);
    } else if (data_ov006_021bc768 == 2) {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a8448);
    } else {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a86a4);
    }
}
