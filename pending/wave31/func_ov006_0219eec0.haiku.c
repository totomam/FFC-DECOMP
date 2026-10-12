#include "ffc/types.h"

extern uint32_t func_ov006_0219f010(uint32_t x);
extern int32_t func_ov000_0214f044(void *p);
extern void func_020871d8(uint32_t ms);
extern uint32_t data_ov006_021b8b20;
extern uint8_t data_ov006_021b8b28;

int32_t func_ov006_0219eec0(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t t;
    t = func_ov006_0219f010(a);
    *(volatile uint32_t *)((uint32_t)&data_ov006_021b8b20 + 0x18) = t;
    t = func_ov006_0219f010(b);
    *(volatile uint32_t *)((uint32_t)&data_ov006_021b8b20 + 0x1c) = t;
    t = func_ov006_0219f010(c);
    *(volatile uint32_t *)((uint32_t)&data_ov006_021b8b20 + 0x20) = t;

    if (func_ov000_0214f044(&data_ov006_021b8b28) < 0) {
        return -1;
    }
    while (*(volatile uint32_t *)0x0216bcb0 == 0) {
        func_020871d8(100);
    }
    return 0;
}
