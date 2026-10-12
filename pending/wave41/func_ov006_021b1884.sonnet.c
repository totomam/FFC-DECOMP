#include "ffc/types.h"

typedef struct S { void *a[8]; } S;
extern void func_ov006_021b3b9c(void *p);
extern void func_ov006_021b42d8(void *p);
extern void func_ov006_021b5774(int a, void *p);
extern void func_ov006_021b49fc(void *p);
extern S *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b89f6[];

void func_ov006_021b1884(void *p) {
    int i;
    *(volatile uint32_t *)0x04000000 &= 0xffff1fff;
    func_ov006_021b3b9c(data_ov006_021bc7f8->a[0]);
    func_ov006_021b3b9c(data_ov006_021bc7f8->a[1]);
    for (i = 0; i < data_ov006_021b89f6[((uint8_t *)data_ov006_021bc7f8)[0x1c]]; i++) {
        if (data_ov006_021bc7f8->a[2 + i] != 0)
            func_ov006_021b3b9c(data_ov006_021bc7f8->a[2 + i]);
    }
    func_ov006_021b42d8(data_ov006_021bc7f8->a[4]);
    func_ov006_021b5774(1, p);
    func_ov006_021b49fc(&data_ov006_021bc7f8);
}
