#include "ffc/types.h"

extern int32_t func_02098518(uint8_t *p, int32_t a);

int32_t func_020983c8(uint8_t *p) {
    if (p[0x26]) {
        p[0x26] = 0;
        return p[0x24];
    }
    int32_t r = func_02098518(p, 1);
    if (p[0x25] && r != -1) {
        p[0x24] = (uint8_t)r;
        p[0x27] = 1;
    }
    return r;
}
