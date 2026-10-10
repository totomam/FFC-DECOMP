#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern uint8_t data_020a6154[];

uint32_t func_ov001_02186f98(const int8_t *s, uint32_t seed) {
    uint32_t h = 0;
    int c = *s;
    while (c != 0) {
        if (c >= 0 && c < 0x80) {
            c = data_020a6154[c];
        }
        h = h * 0x9ccf9319;
        h = h + c;
        s++;
        c = *s;
    }
    return (uint32_t)(func_0209a978(h, seed) >> 32);
}
