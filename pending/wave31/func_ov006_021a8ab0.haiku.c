#include "ffc/types.h"

extern int func_ov006_021b3fb8(int a);
extern int func_ov006_021a671c(void);
extern void func_ov006_021a3724(void);
extern void func_ov006_021b3fd0(int a, int b, int c, int d);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021a8b00(void);
extern uint8_t data_ov006_021bc768;

void func_ov006_021a8ab0(void)
{
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (data_ov006_021bc768 == 0) {
        if (func_ov006_021a671c() == 0) {
            return;
        }
    }
    func_ov006_021a3724();
    if (data_ov006_021bc768 == 0) {
        func_ov006_021b3fd0(3, 1, 1, 8);
    }
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021a8b00);
}
