#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(uint32_t x);

int func_ov000_0215049c(uint32_t x) {
    uint8_t m = func_ov000_0214fa54(x)[0x12df];
    if (m == 1 || m != 2) {
        if (x >= 0x1c) return 3;
        if (x >= 0x16) return 2;
        if (x >= 0x10) return 1;
        return 0;
    } else {
        if (x >= 0x16) return 3;
        if (x >= 0x11) return 2;
        if (x >= 0xc) return 1;
        return 0;
    }
}
