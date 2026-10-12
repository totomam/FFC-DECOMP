#include "ffc/types.h"

uint32_t func_02078ff8(uint32_t a, uint32_t b) {
    uint32_t a1 = (a & 2) >> 1;
    uint32_t a0 = a & 1;
    uint32_t A = a >> 3;
    uint32_t a2 = (a & 4) >> 2;
    uint32_t sa = a1 + a0;
    uint32_t b1 = (b & 2) >> 1;
    uint32_t b0 = b & 1;
    uint32_t B = b >> 3;
    uint32_t b2 = (b & 4) >> 2;
    uint32_t sb = b1 + b0;
    uint32_t r = 0;
    r = r + A * B;
    r = r + B * (a2 + 2 * sa);
    r = r + A * (b2 + 2 * sb);
    return r + (sa + a2) * (sb + b2);
}
