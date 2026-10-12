#include "ffc/types.h"

extern void func_ov006_021b03ac(void);
extern void func_ov006_021b0644(void);
extern void func_ov006_021b0600(uint32_t);
extern void func_ov006_021a6730(uint32_t);
extern void func_ov006_021a66e0(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021a7cf8(void);
extern uint8_t data_ov006_021bc754;

void func_ov006_021a7d7c(int32_t a) {
    uint32_t r;
    if (a == 2) {
        func_ov006_021b03ac();
        data_ov006_021bc754 = 1;
        func_ov006_021b0644();
        r = 0x10;
    } else {
        if (a == 3) {
            data_ov006_021bc754 = 2;
        } else {
            data_ov006_021bc754 = 0;
        }
        func_ov006_021b0644();
        r = 0x12;
    }
    func_ov006_021b0600(r);
    func_ov006_021a6730(0);
    func_ov006_021a66e0();
    func_ov006_021a64c8(func_ov006_021a7cf8);
}
