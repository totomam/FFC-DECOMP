#include "ffc/types.h"

extern void func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b2b74(void);
extern uint32_t func_ov006_021b2538(uint32_t x);
extern void (*data_ov006_021bc800)(uint32_t, void *);
extern uint8_t data_ov006_021b9ed4[];

void func_ov006_021b2500(void *p)
{
    uint16_t v = *(uint16_t *)((uint8_t *)p + 2);
    if (v != 0) {
        func_ov006_021b2140(v);
        func_ov006_021b2b74();
        return;
    }
    if (func_ov006_021b2538(v) == 0) {
        void (*f)(uint32_t, void *) = data_ov006_021bc800;
        if (f != 0) {
            f(0x08000000, data_ov006_021b9ed4);
        }
        func_ov006_021b2b74();
    }
}
