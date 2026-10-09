#include "ffc/types.h"

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021a64c8(void *);
extern void func_ov006_021ab53c(void);

void func_ov006_021ac8ec(void)
{
    if (func_ov006_021b1430() == 0) {
        func_ov006_021a64c8(func_ov006_021ab53c);
    }
}
