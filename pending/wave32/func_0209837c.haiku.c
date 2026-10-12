#include "ffc/types.h"

extern int32_t func_02098518(uint8_t *p, uint8_t v);

uint8_t func_0209837c(uint8_t *p) {
    if (p[0x26]) {
        return p[0x24];
    }
    {
        int32_t r = func_02098518(p, p[0x25]);
        if (p[0x25] != 0 && r != -1) {
            p[0x24] = (uint8_t)r;
            p[0x26] = 1;
            p[0x27] = p[0x26];
        }
    }
}
