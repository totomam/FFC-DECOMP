#include "ffc/types.h"

int32_t func_0207e810(int8_t *s, int32_t i) {
    int8_t c;
    uint8_t u;
    int32_t k;
    for (;;) {
        c = s[i];
        if (c == 0) {
            break;
        }
        u = (uint8_t)c;
        if (u == 0x2f) {
            break;
        }
        if (u == 0x5c) {
            break;
        }
        if ((uint32_t)(uint8_t)(u ^ 0x20) - 0xa1u < 0x3cu) {
            k = 1;
        } else {
            k = 0;
        }
        i = i + 1 + k;
    }
    return i;
}
