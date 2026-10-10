#include "ffc/types.h"

extern uint32_t func_02036994(const void *object);
extern uint32_t func_020369c0(const void *object, uint32_t index);
extern uint8_t func_02036820(const void *object, uint32_t index);
extern void func_0201f304(void *a, uint32_t b, uint32_t c);
extern void func_0201f3bc(void *a, uint32_t b, uint32_t c);

void func_0201f5b8(void *a, uint32_t index, const void *object, uint32_t c)
{
    if (func_02036994(object) != 0) {
        if (func_020369c0(object, index) == 0) {
            func_0201f304(a, func_02036820(object, index), c);
        } else {
            func_0201f3bc(a, func_02036820(object, index), c);
        }
    }
}
