#include "ffc/types.h"

extern void func_ov006_021b2140(uint16_t v);
extern void func_ov006_021b20f0(uint16_t v);

void func_ov006_021b2618(uint8_t *p)
{
    uint16_t v = *(uint16_t *)(p + 2);
    if (v != 0) {
        func_ov006_021b2140(v);
    } else {
        func_ov006_021b20f0(1);
    }
}
