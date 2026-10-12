/* cflags: -nothumb */
#include "ffc/types.h"

uint64_t func_0209ac1c(uint32_t lo, uint32_t hi) {
    int32_t e;
    uint32_t ip, h, l;

    if (!(hi & 0x80000000)) {
        e = 0x43e - (int32_t)(hi >> 20);
        if (e >= 0) {
            if (e < 64) {
                ip = (hi << 11) | 0x80000000u | (lo >> 21);
                if (e > 32) {
                    h = 0;
                    l = ip >> (e - 32);
                } else {
                    h = ip >> e;
                    l = ((lo << 11) >> e) | (ip << (32 - e));
                }
                return ((uint64_t)h << 32) | l;
            }
            return 0;
        }
    } else if (!((((uint64_t)hi << 32) | lo) > 0xFFF0000000000000ULL)) {
        return 0;
    }
    return ~(uint64_t)0;
}
