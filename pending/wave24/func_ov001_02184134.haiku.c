#include "ffc/types.h"

int func_ov001_02184134(uint8_t *p, int32_t v) {
    int32_t n = *(int32_t *)(p + 256);
    if (n >= 0xfe) {
        return 0;
    }
    if (v < 1 || v > 0xfe) {
        return 0;
    }
    *(int32_t *)(p + 256) = n + 1;
    p[n] = (uint8_t)v;
    return 1;
}
