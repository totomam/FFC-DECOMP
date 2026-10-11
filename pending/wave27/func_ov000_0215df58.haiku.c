#include "ffc/types.h"

extern uint32_t func_ov000_0215b534(uint32_t x);
extern void func_ov000_0215b900(uint32_t i);

void func_ov000_0215df58(uint32_t x)
{
    uint32_t v = func_ov000_0215b534(x);
    uint32_t m = v & (v ^ x);
    if (m == 0) {
        return;
    }
    {
        uint8_t i;
        for (i = 0; i < 32; i++) {
            if (m & (1u << i)) {
                func_ov000_0215b900(i);
            }
        }
    }
}
