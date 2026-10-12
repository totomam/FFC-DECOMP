#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern int func_ov006_021a3778(void);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(int x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a6930(void);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ae0c4(void);
extern void func_ov006_021ad074(void);
extern uint8_t data_ov006_021bc79c;

void func_ov006_021acf2c(void)
{
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (data_ov006_021bc79c == 0) {
        if (func_ov006_021b3fb8(1) != 0) {
            return;
        }
    }
    if (func_ov006_021a3778() == 0) {
        return;
    }
    func_ov006_021a35d8();
    func_ov006_021b4488(0);
    if (data_ov006_021bc79c == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021a6930();
    if (data_ov006_021bc79c == 0) {
        func_ov006_021a64d4(2, 1);
        func_ov006_021a64c8(func_ov006_021ae0c4);
    } else {
        func_ov006_021a64d4(0, 0);
        func_ov006_021a64c8(func_ov006_021ad074);
    }
}
