#include "ffc/types.h"

extern uint32_t func_02077b90(uint32_t a, uint32_t b);
extern uint8_t data_0213e204[];

uint32_t func_02077bd0(uint32_t p) {
    uint32_t r4 = (uint32_t)data_0213e204;
    uint32_t r0 = func_02077b90(r4, p);
    if (r0 != 0) {
        r4 = r0 + 0xc;
    }
    return r4;
}
