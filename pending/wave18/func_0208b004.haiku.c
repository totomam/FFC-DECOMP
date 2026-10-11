#include "ffc/types.h"

extern uint32_t func_0208afc4(void (*f)(void), uint32_t b);
extern void func_0208b1b4(void);
extern void func_0208b1a8(void);
extern uint8_t data_02143520[];

uint32_t func_0208b004(void)
{
    uint32_t r = func_0208afc4(func_0208b1a8, 0);
    *(uint32_t *)(data_02143520 + 0x10) = r;
    if (r == 0) {
        func_0208b1b4();
    }
    return *(uint32_t *)(data_02143520 + 0x10);
}
