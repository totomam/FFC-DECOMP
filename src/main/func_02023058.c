#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t size);
extern void func_02022868(uint32_t r, uint32_t a, uint32_t b);

void func_02023058(uint32_t a, uint32_t b)
{
    uint32_t r = func_0205681c(0x1c);
    if (r != 0) {
        func_02022868(r, a, b);
    }
}
