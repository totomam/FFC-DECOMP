#include "ffc/types.h"

extern uint32_t func_ov000_0215b6a0(uint32_t i);
extern uint32_t func_ov000_0215b4b0(void);
extern uint32_t func_ov000_02163efc(uint32_t a, uint32_t b, uint32_t i);
extern uint32_t func_ov000_02164544(uint32_t a, uint32_t b);

uint32_t func_ov000_02163f68(uint32_t p, uint32_t a, uint32_t b)
{
    uint32_t mask = 0;
    uint8_t i;
    uint32_t r7;
    uint32_t t;

    for (i = 0; i < 32; i++) {
        if (func_ov000_0215b6a0(i)) {
            mask |= 1u << i;
        }
    }

    r7 = (p & mask) & ~(1u << func_ov000_0215b4b0());
    t = (p & ~mask) & ~(1u << func_ov000_0215b4b0());

    for (i = 0; i < 32; i++) {
        if (r7 & (1u << i)) {
            if (func_ov000_02163efc(a, b, i) == 0) {
                p &= ~(1u << i);
            }
        }
    }

    if (t != 0) {
        if (func_ov000_02164544(a, b) == 0) {
            p &= ~t;
        }
    }

    return p;
}
