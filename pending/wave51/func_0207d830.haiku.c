#include "ffc/types.h"

extern uint32_t func_02087ed0(void);

uint32_t func_0207d830(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    uint32_t ret = 0;
    uint32_t r7 = 0;
    uint32_t ok = 0;

    if (a <= 3 && d != 0 && (b & 0x1f) == 0) {
        uint32_t t = 1;
        if (b + d > 0x1ff8000 && b < 0x2000000) {
            t = ret;
        }
        if (t) {
            ok = 1;
        }
    }

    if (ok) {
        uint32_t r6 = 1;
        uint32_t x = func_02087ed0();
        if (b + d > x) {
            uint32_t y = func_02087ed0();
            if (b < y + 0x4000) {
                r6 = 0;
            }
        }
        if (r6) {
            r7 = 1;
        }
    }

    if (r7) {
        if (((c | d) & 0x1ff) == 0) {
            ret = 1;
        }
    }

    return ret;
}
