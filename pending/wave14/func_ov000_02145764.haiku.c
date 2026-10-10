#include "ffc/types.h"

extern uint32_t func_ov000_02145734(uint32_t a);
extern uint8_t data_ov000_0216bc60[];

uint32_t func_ov000_02145764(uint32_t a) {
    uint32_t r4 = a;
    if (func_ov000_02145734(a) == 0) {
        r4 = *(uint32_t *)(data_ov000_0216bc60 + 0x2c);
    }
    return r4;
}
