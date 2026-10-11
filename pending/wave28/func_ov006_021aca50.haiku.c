#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t a);
extern void func_ov006_021a3b28(void);
extern void func_ov006_021b4734(uint32_t a, uint32_t b);
extern void func_ov006_021a64d4(uint32_t a, uint32_t b);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021ad878(void);

void func_ov006_021aca50(void)
{
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    if (func_ov006_021b3fb8(0) != 0) {
        return;
    }
    func_ov006_021a3b28();
    func_ov006_021b4734(1, 1);
    func_ov006_021b4734(0, 0x14);
    func_ov006_021a64d4(2, 1);
    func_ov006_021a64c8((void *)func_ov006_021ad878);
}
