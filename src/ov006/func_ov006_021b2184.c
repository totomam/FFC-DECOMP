#include "ffc/types.h"

extern void func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b20f0(uint32_t x);
extern uint32_t func_ov006_021b21cc(void);
extern uint32_t func_ov006_021b2234(void);
extern uint32_t data_ov006_021bc800[];

void func_ov006_021b2184(uint16_t *p)
{
    uint32_t v;
    uint32_t *base;

    if (p[1] != 0) {
        func_ov006_021b2140(p[1]);
        func_ov006_021b20f0(9);
        return;
    }
    base = (uint32_t *)data_ov006_021bc800[1];
    v = *(uint32_t *)((uint8_t *)base + 0x13ac);
    if (v != 0) {
        if (func_ov006_021b21cc() == 0) {
            func_ov006_021b20f0(9);
        }
        return;
    }
    if (func_ov006_021b2234() == 0) {
        func_ov006_021b20f0(9);
    }
}
