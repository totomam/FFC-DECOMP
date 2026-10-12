#include "ffc/types.h"

extern uint32_t func_ov006_0219f010(uint32_t x);
extern int32_t func_ov000_0214f044(void *p);
extern void func_020871d8(uint32_t ms);
typedef struct { uint32_t pad[6]; uint32_t a, b, c; } S;
extern S data_ov006_021b8b20;
extern uint8_t data_ov006_021b8b28;

int32_t func_ov006_0219eec0(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t t;
    t = func_ov006_0219f010(a);
    data_ov006_021b8b20.a = t;
    t = func_ov006_0219f010(b);
    data_ov006_021b8b20.b = t;
    t = func_ov006_0219f010(c);
    data_ov006_021b8b20.c = t;
    if (func_ov000_0214f044(&data_ov006_021b8b28) < 0) {
        return -1;
    }
    while (*(volatile uint32_t *)0x0216bcb0 == 0) {
        func_020871d8(100);
    }
    return 0;
}
