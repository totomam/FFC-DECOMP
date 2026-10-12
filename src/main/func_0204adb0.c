#include "ffc/types.h"

int func_0204adb0(uint8_t *p, int32_t c) {
    if (c == 0x20) {
        *p = '+';
        return 1;
    }
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        *p = (uint8_t)c;
        return 1;
    }
    {
        int32_t hi = (c >> 4) & 0xf;
        int32_t lo = c & 0xf;
        *p = '%';
        if (hi < 10) {
            p[1] = (uint8_t)(hi + 0x30);
        } else {
            p[1] = (uint8_t)(hi + 0x37);
        }
        if (lo < 10) {
            p[2] = (uint8_t)(lo + 0x30);
        } else {
            p[2] = (uint8_t)(lo + 0x37);
        }
    }
    return 3;
}
