#include "ffc/types.h"

extern uint32_t func_02089450(uint32_t a, uint32_t b, void (*f)(void), uint32_t c);
extern void func_020897e4(void);
extern void func_020897f0(void);
extern uint8_t data_02141948[];

uint32_t func_020894a0(uint32_t a, uint32_t b)
{
    uint32_t r = func_02089450(a, b, func_020897e4, 0);
    *(uint32_t *)(data_02141948 + 0x24) = r;
    if (r == 0) {
        func_020897f0();
    }
    return *(uint32_t *)(data_02141948 + 0x24);
}
