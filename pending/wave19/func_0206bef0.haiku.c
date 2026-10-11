#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_0206be34(uint32_t a);
extern void func_02054114(uint32_t a);
extern uint32_t data_0213e170;

void func_0206bef0(void)
{
    uint32_t r1 = func_0205681c(0x9dc);
    if (r1 != 0) {
        r1 = func_0206be34(r1);
    }
    func_02054114(0);
    data_0213e170 = r1;
}
