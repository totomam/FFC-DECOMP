#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t);
extern uint32_t func_02057c28(uint32_t, uint32_t, uint32_t, uint32_t);
extern void func_02057dac(uint32_t, uint32_t);
extern uint32_t data_02139450;

void func_02028ae8(uint32_t a, uint32_t b)
{
    uint32_t r = func_0205681c(0x3c);
    if (r != 0) {
        r = func_02057c28(r, a, b, 0x10);
    }
    data_02139450 = r;
    func_02057dac(r, 1);
}
