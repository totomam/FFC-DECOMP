#include "ffc/types.h"

extern uint32_t func_0204de50(uint32_t a);
extern uint32_t func_0204de80(uint32_t a);
extern uint32_t func_0204dc80(uint32_t a, uint32_t b);

int32_t func_0204dac0(uint32_t a, uint32_t b)
{
    uint32_t r = func_0204dc80(func_0204de80(func_0204de50(a)), a);
    if (r == 0) {
        return -1;
    }
    *(uint32_t *)(r + 0xd0) = b;
    return 0;
}
