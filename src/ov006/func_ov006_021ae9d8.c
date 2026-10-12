#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern int func_ov006_021b0cbc(void);
extern void func_ov006_021b4488(int a);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a6508(int a, int *b);
extern void func_ov006_021a64fc(int a, int b);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021ab254(void);
extern void func_ov006_021a6c54(void);

void func_ov006_021ae9d8(void)
{
    int s;
    int one = 1;
    int zero = 0;
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    if (func_ov006_021b0cbc() == 0) {
        return;
    }
    func_ov006_021b4488(zero);
    func_ov006_021a3b28();
    func_ov006_021b4734(one, one);
    func_ov006_021b4734(zero, 0x15);
    func_ov006_021a64d4(2, one);
    func_ov006_021a6508(zero, &s);
    if (s == 0) {
        func_ov006_021a64fc(zero, zero);
        func_ov006_021a64c8(func_ov006_021ab254);
    } else {
        func_ov006_021a64c8(func_ov006_021a6c54);
    }
}
