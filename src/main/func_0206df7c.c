#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t a);
extern void func_0206dc44(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_0206df7c(uint32_t x, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t r = func_0205681c(0x250);
    if (r != 0) {
        func_0206dc44(r, b, c, d);
    }
}
