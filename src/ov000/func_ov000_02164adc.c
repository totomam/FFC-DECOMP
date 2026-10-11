#include "ffc/types.h"

extern uint32_t func_ov000_021583a8(void);
extern void func_ov000_0215820c(void);

uint32_t func_ov000_02164adc(void)
{
    uint32_t r = func_ov000_021583a8();
    if (r - 3 <= 2) {
        func_ov000_0215820c();
    }
    return r;
}
