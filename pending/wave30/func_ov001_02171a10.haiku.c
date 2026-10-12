#include "ffc/types.h"

extern int32_t func_ov001_021719e0(uint32_t *s, int32_t n);

int32_t func_ov001_02171a10(uint32_t a, uint32_t *s, int32_t n, int32_t m) {
    if (a == 0) {
        return 0;
    }
    if (s == 0) {
        return 0;
    }
    if (n <= 0) {
        return 0;
    }
    if (m <= 0) {
        return 0;
    }
    s[0] = a;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    s[5] = m;
    s[6] = 0;
    s[7] = 0;
    s[8] = 0;
    if (func_ov001_021719e0(s, n) == 0) {
        return 0;
    }
    *(uint8_t *)s[1] = 0;
    return 1;
}
