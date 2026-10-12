#include "ffc/types.h"

int32_t func_ov000_021662cc(const char *s, int32_t n) {
    int32_t count = 0;
    if (s == 0) {
        return 0;
    }
    while (*s != 0 && n > 0) {
        uint8_t c = (uint8_t)*s;
        if ((c & 0xe0) == 0xc0 && n >= 2 && (((uint8_t)s[1]) & 0xc0) == 0x80) {
            s += 2;
            n -= 2;
        } else if ((c & 0xf0) == 0xe0 && n >= 3 && (((uint8_t)s[1]) & 0xc0) == 0x80 && (((uint8_t)s[2]) & 0xc0) == 0x80) {
            s += 3;
            n -= 3;
        } else {
            s += 1;
            n -= 1;
        }
        count++;
    }
    return count;
}
