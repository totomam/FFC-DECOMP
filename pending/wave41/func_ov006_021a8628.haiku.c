#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern int func_ov006_021a3778(void);
extern void func_ov006_021b4488(int a);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021a7768(void);
extern void func_ov006_021a8948(void);
extern uint8_t data_ov006_021bc760[];

void func_ov006_021a8628(void) {
    if (func_ov006_021b3fb8(1) != 0) return;
    if (func_ov006_021b3fb8(0) != 0) return;
    if (func_ov006_021a3778() == 0) return;
    func_ov006_021b4488(0);
    if (data_ov006_021bc760[1] == 0) {
        func_ov006_021a3b28();
        func_ov006_021b4734(1, 1);
    }
    func_ov006_021b4734(0, 0x15);
    if (data_ov006_021bc760[1] == 0) {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a7768);
    } else {
        func_ov006_021a64d4(0, 1);
        func_ov006_021a64c8(func_ov006_021a8948);
    }
}
