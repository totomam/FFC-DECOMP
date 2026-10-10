#include "ffc/types.h"

extern uint32_t func_ov006_021b518c(void);
extern void func_ov006_021b3e20(void *a, uint32_t b, uint32_t c);

uint32_t func_ov006_021b3e6c(void *a, uint32_t b)
{
    uint32_t r;
    r = func_ov006_021b518c();
    func_ov006_021b3e20(a, b, r);
    return r;
}
