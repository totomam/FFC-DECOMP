#include "ffc/types.h"

uint8_t func_ov001_02184290(uint32_t c) {
    if (c < 0x1a) {
        return c + 0x41;
    }
    if (c < 0x34) {
        return c + 0x47;
    }
    if (c < 0x3e) {
        return c - 4;
    }
    if (c == 0x3e) {
        return 0x2b;
    }
    if (c == 0x3f) {
        return 0x2f;
    }
    return 0;
}
