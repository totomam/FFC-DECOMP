#include "ffc/types.h"

void func_ov000_0214c7c8(uint16_t *p, uint32_t carry, int idx, int n) {
    do {
        uint16_t v = p[idx];
        carry += v;
        p[idx] = (uint16_t)carry;
        carry >>= 16;
        idx++;
    } while (carry != 0 && idx < n);
}
