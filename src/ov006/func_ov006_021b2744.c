#include "ffc/types.h"

extern uint32_t func_0208d570(void);
extern void func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b20f0(uint32_t x);
extern uint32_t func_ov006_021b2848(void (*f)(void), uint32_t x);
extern void func_ov006_021b27b4(void);

uint16_t func_ov006_021b2744(uint32_t a) {
    uint32_t r = func_0208d570();
    uint16_t n;

    if (r == (2u << 14)) {
        func_ov006_021b2140(3);
        func_ov006_021b20f0(9);
        return 3;
    }
    if (r == 0) {
        func_ov006_021b2140(0x16);
        func_ov006_021b20f0(9);
        return 0x18;
    }
    if (!((1u << (a - 1)) & r)) {
        do {
            n = (uint16_t)(a + 1);
            a = n;
            if (a > 0x10) {
                return 0x18;
            }
        } while (!((1u << (a - 1)) & r));
    }
    return (uint16_t)func_ov006_021b2848(func_ov006_021b27b4, a);
}
