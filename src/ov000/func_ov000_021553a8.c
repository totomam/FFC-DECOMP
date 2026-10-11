#include "ffc/types.h"

extern int32_t func_ov000_02154e4c(uint32_t a);
extern uint64_t func_ov000_02154e00(uint32_t a);

uint64_t func_ov000_021553a8(uint32_t a)
{
    if (func_ov000_02154e4c(a) == 2) {
        return func_ov000_02154e00(a);
    }
    return 0;
}
