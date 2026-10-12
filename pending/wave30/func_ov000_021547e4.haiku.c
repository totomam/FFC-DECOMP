#include "ffc/types.h"

int func_ov000_021547e4(uint32_t c)
{
    uint32_t t;
    if (c >= 0x41 && c <= 0x5a) {
        return c - 0x41;
    }
    if (c >= 0x61 && c <= 0x7a) {
        t = c - 0x61;
        return (int)t + 26;
    }
    if (c >= 0x30 && c <= 0x39) {
        t = c - 0x30;
        return (int)t + 52;
    }
    if (c == 0x2b) {
        return 62;
    }
    if (c == 0x2f) {
        return 63;
    }
    if (c == 0x3d) {
        return 0;
    }
    return -1;
}
