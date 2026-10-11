#include "ffc/types.h"

extern void func_ov006_021b0644(int x);
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a6730(int x);
extern void func_ov006_021a64c8(void *f);
extern void func_ov006_021a8a88(void);
extern uint8_t data_ov006_021bc768;

void func_ov006_021a8bac(int p)
{
    func_ov006_021b0644(p);
    if (p == 0) {
        data_ov006_021bc768 = 1;
        func_ov006_021b0600(0x10);
    } else {
        data_ov006_021bc768 = 2;
        func_ov006_021b0600(0x12);
    }
    func_ov006_021a6730(0);
    func_ov006_021a64c8((void *)func_ov006_021a8a88);
}
