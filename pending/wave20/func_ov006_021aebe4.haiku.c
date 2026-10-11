#include "ffc/types.h"

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021b3fd0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021a64c8(void *p);
extern void func_ov006_021aec08(void);

void func_ov006_021aebe4(void)
{
    if (func_ov006_021b1430() == 0) {
        func_ov006_021b3fd0(3, 0, 0x14, 8);
        func_ov006_021a64c8((void *)func_ov006_021aec08);
    }
}
