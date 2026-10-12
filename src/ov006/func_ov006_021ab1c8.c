#include "ffc/types.h"

extern int func_ov006_021b3fb8(int x);
extern int func_ov006_021a3778(void);
extern void func_ov006_021b4488(int x);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(int a, int b);
extern void func_ov006_021a6508(int a, int *out);
extern void func_ov006_021a64d4(int a, int b);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a64fc(int a, int b);
extern void func_ov006_021ac904(int x);
extern void func_ov006_021ad878(void);
extern void func_ov006_021ab254(void);

void func_ov006_021ab1c8(void)
{
    int one = 1;
    int zero = 0;
    int local;

    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    if (!func_ov006_021a3778()) {
        return;
    }
    func_ov006_021b4488(zero);
    func_ov006_021a3b28();
    func_ov006_021b4734(one, one);
    func_ov006_021b4734(zero, 0x15);
    func_ov006_021a6508(zero, &local);
    if (local != 0) {
        func_ov006_021a64d4(2, one);
        func_ov006_021a64c8(func_ov006_021ad878);
    } else {
        func_ov006_021a64d4(2, zero);
        func_ov006_021a64fc(zero, zero);
        func_ov006_021ac904(zero);
        func_ov006_021a64c8(func_ov006_021ab254);
    }
}
