#include "ffc/types.h"

extern uint32_t func_02036838(const void *object);
extern uint32_t func_020367bc(const void *object, uint32_t index);
extern uint32_t func_020369c0(const void *object, uint32_t index);

uint32_t func_ov005_02197a1c(const void *a, const void *b)
{
    uint8_t i;

    if (func_02036838(a) != func_02036838(b)) {
        return 1;
    }
    for (i = 0; i < 5; i++) {
        if (func_020367bc(a, i) == func_020367bc(b, i)) {
            if (func_020369c0(a, i) == func_020369c0(b, i)) {
                continue;
            }
        }
        return 1;
    }
    return 0;
}
