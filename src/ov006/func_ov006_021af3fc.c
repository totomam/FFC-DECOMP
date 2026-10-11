#include "ffc/types.h"

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021b0600(uint32_t x);
extern void func_ov006_021a3798(void);
extern void func_ov006_021b0ef4(void (*fn)(void));
extern uint8_t data_ov006_021bc7cc;
extern void func_ov006_021af1d4(void);
extern void func_ov006_021af2d8(void);
extern void func_ov006_021af16c(void);

void func_ov006_021af3fc(void)
{
    if (func_ov006_021b1430() != 0) {
        return;
    }
    if (data_ov006_021bc7cc == 1) {
        func_ov006_021a64c8(func_ov006_021af1d4);
        return;
    }
    func_ov006_021b0600(0xb);
    func_ov006_021a3798();
    data_ov006_021bc7cc = 0;
    func_ov006_021b0ef4(func_ov006_021af2d8);
    func_ov006_021a64c8(func_ov006_021af16c);
}
