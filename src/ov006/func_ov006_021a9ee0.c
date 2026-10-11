#include "ffc/types.h"

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021a3798(void);
extern void func_ov006_021af670(void);
extern void func_ov006_021a64c8(void (*fn)(void));
extern void func_ov006_021a944c(void);

void func_ov006_021a9ee0(void)
{
    if (func_ov006_021b1430() == 0) {
        func_ov006_021a3798();
        func_ov006_021af670();
        func_ov006_021a64c8(func_ov006_021a944c);
    }
}
