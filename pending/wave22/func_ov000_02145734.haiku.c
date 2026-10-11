#include "ffc/types.h"

extern uint32_t data_ov000_0216bc60[];

uint32_t func_ov000_02145734(uint32_t a) {
    uint32_t r = 1;
    if (a != 0xFFFFFFFFu && a != 0x7f000001u) {
        uint32_t *p = data_ov000_0216bc60;
        uint32_t m = p[4];
        if ((a & m) != (p[0x14] & m)) {
            r = 0;
        }
    }
    return r;
}
