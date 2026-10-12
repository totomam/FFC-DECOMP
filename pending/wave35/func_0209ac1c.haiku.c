/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_0209ac1c(uint32_t lo, uint32_t hi) {
    int32_t e;
    uint32_t ip;
    uint32_t r3;

    if (hi & 0x80000000) {
        if (hi > 0xFFF00000u || (hi == 0xFFF00000u && lo != 0)) {
            return ~(uint64_t)0;
        }
        return 0;
    }
    e = 0x43e - (int32_t)(hi >> 20);
    if (e < 0) {
        return ~(uint64_t)0;
    }
    if (e >= 64) {
        return 0;
    }
    ip = (hi << 11) | 0x80000000u | (lo >> 21);
    if (e > 32) {
        return (uint64_t)(ip >> (e - 32));
    }
    r3 = lo << 11;
    return ((uint64_t)(ip >> e) << 32) | ((r3 >> e) | (ip << (32 - e)));
}
