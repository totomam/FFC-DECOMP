#include "ffc/types.h"

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021b3fd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a885c(void);
extern uint8_t data_ov006_021bc764[];

void func_ov006_021a8820(void)
{
    if (func_ov006_021b1430() != 0) {
        return;
    }
    if (data_ov006_021bc764[1] == 0) {
        func_ov006_021b3fd0(3, 1, 1, 8);
    }
    func_ov006_021b3fd0(3, 0, 0x15, 8);
    func_ov006_021a64c8(func_ov006_021a885c);
}
