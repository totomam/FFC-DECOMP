#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_02014428(uint32_t x);
extern uint32_t data_020b8df0;

void func_0201440c(void)
{
    uint32_t r = func_0205681c(0x10);
    if (r != 0) {
        r = func_02014428(r);
    }
    *(uint32_t *)((uint8_t *)&data_020b8df0 + 0x54) = r;
}
