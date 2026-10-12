#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern int func_ov006_021a671c(void);
extern void func_ov006_021a3f7c(void);
extern void func_ov006_021a35d8(void);
extern void func_ov006_021b4488(int x);
extern void func_ov006_021b4734(int x, int y);
extern void func_ov006_021a64d4(int x, int y);
extern void func_ov006_021a64c8(void (*f)(void));
extern uint8_t data_ov006_021bc754;
extern void func_ov006_021a8448(void);
extern void func_ov006_021a82f8(void);
extern void func_ov006_021a7dc8(void);

void func_ov006_021a7d14(void) {
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (func_ov006_021a671c() == 0) {
        return;
    }
    func_ov006_021a3f7c();
    func_ov006_021a35d8();
    func_ov006_021b4488(0);
    func_ov006_021b4734(0, 0x15);
    func_ov006_021a64d4(0, 1);
    if (data_ov006_021bc754 == 0) {
        func_ov006_021a64c8(func_ov006_021a8448);
    } else if (data_ov006_021bc754 == 2) {
        func_ov006_021a64c8(func_ov006_021a82f8);
    } else {
        func_ov006_021a64c8(func_ov006_021a7dc8);
    }
}
