#include "ffc/types.h"

int32_t func_ov014_02148a00(uint8_t *p, int8_t *needle, uint32_t start, uint32_t n) {
    int8_t *s;
    uint32_t len;
    int8_t *pos;
    uint32_t i;

    if (p[0] & 1) {
        len = *(uint32_t *)(p + 4);
        s = *(int8_t **)(p + 8);
    } else {
        s = (int8_t *)(p + 1);
        len = (p[0] >> 1) & 0x7f;
    }
    if (len == 0) {
        return -1;
    }
    if (n == 0) {
        return -1;
    }
    len = len - 1;
    if (start > len) {
        start = len;
    }
    pos = s + start + 1;
    if (pos <= s) {
        return -1;
    }
    do {
        pos = pos - 1;
        for (i = 0; i < n; i++) {
            if (pos[i] == needle[0]) {
                return (int32_t)(pos - s);
            }
        }
    } while (pos > s);
    return -1;
}
