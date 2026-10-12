#include "ffc/types.h"

extern uint8_t data_ov006_021bc70c;

int func_ov006_021a6158(int32_t a, uint32_t b) {
    uint8_t *base = &data_ov006_021bc70c;
    uint32_t lo, hi;

    *base = (uint8_t)a;
    *(uint32_t *)(base + 8) = b;
    if (a < 0 || a > 6) {
        return 0;
    }
    lo = (uint32_t)((int32_t)b << 28) >> 28;
    if (lo > 1) {
        return 0;
    }
    hi = b >> 4;
    if (hi & 2) {
        return 0;
    }
    if (a != 0 && (hi & 1)) {
        return 0;
    }
    if (a != 0) {
        return 1;
    }
    if (hi & 1) {
        return 1;
    }
    return 0;
}
