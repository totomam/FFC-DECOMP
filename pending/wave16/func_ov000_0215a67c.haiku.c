#include "ffc/types.h"

extern int32_t func_ov000_02155fa0(void);
extern void func_ov000_02155f1c(void);
extern uint32_t data_ov000_02170060;

void func_ov000_0215a67c(void)
{
    if (func_ov000_02155fa0() == 0) {
        func_ov000_02155f1c();
    }
    data_ov000_02170060 = 0;
}
