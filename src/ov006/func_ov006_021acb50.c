#include "ffc/types.h"

extern uint32_t func_ov006_021b3fb8(uint32_t);
extern void func_ov006_021a3bdc(uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021acb70(void);

void func_ov006_021acb50(void)
{
    if (func_ov006_021b3fb8(0) == 0) {
        func_ov006_021a3bdc(1);
        func_ov006_021a64c8(func_ov006_021acb70);
    }
}
