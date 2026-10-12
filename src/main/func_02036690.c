#include "ffc/types.h"

extern uint32_t func_02035ff4(void *object);
extern void *func_02036370(void *object, uint32_t idx);
extern uint8_t func_02035dac(const void *object);

uint32_t func_02036690(void *a0)
{
    uint32_t a, b, c;
    if (func_02035ff4(a0) != 0) goto one;
    a = func_02035dac(func_02036370(a0, 3));
    b = func_02035dac(func_02036370(a0, 1));
    c = func_02035dac(func_02036370(a0, 2));
    if (a + (b + c) != 0) {
one:
        return 1;
    }
    return 0;
}
