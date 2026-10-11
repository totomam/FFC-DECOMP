#include "ffc/types.h"

extern void func_ov006_021b2140(uint32_t x);
extern void func_ov006_021b20f0(uint32_t x);
extern int32_t func_0208d320(void *fn);
extern void func_ov006_021b2984(void);

void func_ov006_021b29cc(uint8_t *p)
{
    uint16_t v = *(uint16_t *)(p + 2);
    if (v != 0) {
        func_ov006_021b2140(v);
        func_ov006_021b20f0(10);
        return;
    }
    {
        int32_t r = func_0208d320((void *)func_ov006_021b2984);
        if (r != 0) {
            func_ov006_021b2140(r);
            func_ov006_021b20f0(10);
            return;
        }
    }
    func_ov006_021b20f0(1);
}
