#include "ffc/types.h"

extern uint32_t func_ov006_021b4ca4(uint32_t arg);
extern void func_ov006_021a3754(uint32_t arg);
extern uint32_t func_ov006_021ad1d4(void);

void func_ov006_021ad348(void)
{
    if (func_ov006_021b4ca4(2)) {
        func_ov006_021a3754(0);
        return;
    }
    if (func_ov006_021ad1d4()) {
        func_ov006_021a3754(0);
    }
}
