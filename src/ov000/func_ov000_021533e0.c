#include "ffc/types.h"

extern uint32_t func_ov000_02152ae4(uint32_t x);
extern uint32_t func_ov000_02151f54(uint32_t x);

uint32_t func_ov000_021533e0(void)
{
    uint32_t r = func_ov000_02152ae4(1);
    if (func_ov000_02151f54(r + 10) == 1) {
        return 0x12;
    }
    return 0x11;
}
