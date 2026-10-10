#include "ffc/types.h"

extern uint32_t data_ov000_0216b428;

void func_ov000_02165c2c(uint32_t x)
{
    uint32_t r;
    if (x) {
        r = x & 0x7fffffff;
    } else {
        r = 1;
    }
    data_ov000_0216b428 = r;
}
