#include "ffc/types.h"

extern int32_t func_02089218(uint32_t a, uint32_t b, uint32_t c);

int func_02086374(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    int r4 = 0;
    if (func_02089218(4, 0x02002500 | (uint8_t)(a >> 16), 0) < 0) {
        return r4;
    }
    if (func_02089218(4, (4 << 14) | (uint16_t)a, r4) < 0) {
        return r4;
    }
    if (func_02089218(4, (4 << 15) | b, r4) < 0) {
        return r4;
    }
    if (func_02089218(4, (3 << 16) | (c >> 16), r4) < 0) {
        return r4;
    }
    if (func_02089218(4, (0x41 << 18) | (uint16_t)c, r4) >= 0) {
        r4 = 1;
    }
    return r4;
}
