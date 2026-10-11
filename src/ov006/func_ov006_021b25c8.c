#include "ffc/types.h"

extern uint32_t func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b2b88(uint32_t x);
extern uint32_t func_ov006_021b25ec(uint32_t x);
extern void func_ov006_021b20f0(uint32_t x);

void func_ov006_021b25c8(uint8_t *p)
{
    uint16_t v = *(uint16_t *)(p + 2);
    if (v != 0) {
        func_ov006_021b2b88(func_ov006_021b2140(v));
        return;
    }
    if (func_ov006_021b25ec(v) == 0) {
        func_ov006_021b20f0(9);
    }
}
