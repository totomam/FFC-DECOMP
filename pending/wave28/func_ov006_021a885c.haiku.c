#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t x);
extern void func_ov006_021a6744(void);
extern void func_ov006_021a66e0(void);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a889c(void);
extern uint8_t data_ov006_021bc764[];

void func_ov006_021a885c(void)
{
    if (func_ov006_021b3fb8(1)) {
        return;
    }
    if (func_ov006_021b3fb8(0)) {
        return;
    }
    if (data_ov006_021bc764[0] == 0 && data_ov006_021bc764[1] == 1) {
        func_ov006_021a6744();
    } else {
        func_ov006_021a66e0();
    }
    func_ov006_021a64c8(func_ov006_021a889c);
}
