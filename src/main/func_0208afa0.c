#include "ffc/types.h"

extern uint32_t func_0208aed0(uint32_t a, void (*f)(void), uint32_t b);
extern void func_0208b1a8(void);
extern void func_0208b1b4(void);
extern uint8_t data_02143520[];

uint32_t func_0208afa0(uint32_t a)
{
    uint32_t r = func_0208aed0(a, func_0208b1a8, 0);
    *(uint32_t *)(data_02143520 + 0x10) = r;
    if (r == 0) {
        func_0208b1b4();
    }
    return *(uint32_t *)(data_02143520 + 0x10);
}
