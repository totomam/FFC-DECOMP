#include "ffc/types.h"
uint32_t func_02078ff8(uint32_t a, uint32_t b) {
    uint32_t a1 = (a & 2) >> 1, a3 = a >> 3, a0 = a & 1, a2 = (a & 4) >> 2;
    uint32_t b1 = (b & 2) >> 1, b2 = (b & 4) >> 2, b3 = b >> 3, b0 = b & 1;
    uint32_t pa = a1 + a0, pb = b1 + b0;
    uint32_t s = 0;
    s += a3 * b3;
    s += (a2 + pa * 2) * b3;
    s += (b2 + pb * 2) * a3;
    s += (a2 + pa) * (b2 + pb);
    return s;
}
