#include "ffc/types.h"

extern void func_ov006_021b20f0(uint32_t x);
extern void func_ov006_021b2140(uint32_t x);

void func_ov006_021b2654(void *p)
{
    uint8_t *b = (uint8_t *)p;
    if (*(uint16_t *)(b + 2) != 0) {
        func_ov006_021b20f0(9);
        func_ov006_021b2140(*(uint16_t *)(b + 2));
    } else {
        func_ov006_021b20f0(1);
    }
}
