#include "ffc/types.h"

uint32_t func_02051458(uint32_t x) {
    uint32_t h;
    if (x <= 0x7f) return x;
    if (x <= 0x7ff) {
        return 0xc080 | ((x & 0x3f) | ((x & 0x7c0) << 2));
    }
    h = (x & 0xf000) << 4;
    return 0xe08080 | (h | ((x & 0x3f) | ((x & 0xfc0) << 2)));
}
