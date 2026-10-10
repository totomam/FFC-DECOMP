#include "ffc/types.h"

extern uint32_t func_020893e0(uint32_t a, void (*f)(void), uint32_t b);
extern void func_020897e4(void);
extern void func_020897f0(void);
extern uint8_t data_02141948[];

uint32_t func_0208942c(uint32_t a)
{
    uint32_t r = func_020893e0(a, func_020897e4, 0);
    *(uint32_t *)(data_02141948 + 0x24) = r;
    if (r == 0) {
        func_020897f0();
    }
    return *(uint32_t *)(data_02141948 + 0x24);
}
