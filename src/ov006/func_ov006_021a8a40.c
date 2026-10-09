#include "ffc/types.h"

extern uint32_t func_ov006_021b4ca4(uint32_t arg);
extern void func_ov006_021a3754(uint32_t arg);
extern uint32_t func_ov006_021a892c(void);

void func_ov006_021a8a40(void)
{
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021a3754(0);
        return;
    }
    if (func_ov006_021a892c()) {
        func_ov006_021a3754(0);
    }
}
