#include "ffc/types.h"

extern int func_ov006_021a671c(void);
extern void func_ov006_021b4488(int x);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void (*fn)(void));
extern uint8_t data_ov006_021bc764[];
extern void func_ov006_021a8448(void);
extern void func_ov006_021a7768(void);
extern void func_ov006_021a7c20(void);

void func_ov006_021a889c(void)
{
    if (data_ov006_021bc764[0] != 0 || data_ov006_021bc764[1] == 0) {
        if (func_ov006_021a671c() == 0) {
            return;
        }
    }
    func_ov006_021b4488(0);
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc764[1] == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021a64d4(0, 1);
    if (data_ov006_021bc764[0] != 0) {
        func_ov006_021a64c8(func_ov006_021a8448);
        return;
    }
    if (data_ov006_021bc764[1] == 0) {
        func_ov006_021b4734(1, 1);
        func_ov006_021a64c8(func_ov006_021a7768);
        return;
    }
    func_ov006_021a64c8(func_ov006_021a7c20);
}
