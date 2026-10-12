#include "ffc/types.h"

extern uint32_t func_ov000_0215b4b0(void);
extern uint32_t func_ov000_02163dec(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov000_02163eb8(uint32_t mask, uint32_t b, uint32_t c) {
    uint8_t i = 0;
    uint32_t bit;
    do {
        if (i != 0) {
            bit = 1u << i;
        } else {
            bit = 1;
        }
        if (mask & bit) {
            if (i != func_ov000_0215b4b0()) {
                if (func_ov000_02163dec(i, b, c) == 0) {
                    mask &= ~bit;
                }
            }
        }
        i++;
    } while (i < 0x20);
    return mask;
}
