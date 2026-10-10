#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t a);
extern void func_ov006_021b3fd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021a64c8(void (*f)(void));
extern void func_ov006_021a6f24(void);

void func_ov006_021a6ef0(void) {
    uint32_t r4 = 1;
    if (func_ov006_021b3fb8(1) != 0) {
        return;
    }
    func_ov006_021b3fd0(3, r4, r4, 8);
    func_ov006_021b3fd0(3, 0, 0x16, 8);
    func_ov006_021a64c8(func_ov006_021a6f24);
}
