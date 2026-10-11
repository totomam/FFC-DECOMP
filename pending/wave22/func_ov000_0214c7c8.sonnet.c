#include "ffc/types.h"

void func_ov000_0214c7c8(uint16_t *p, uint32_t carry, int idx, int n) {
    while (1) {
        carry += p[idx];
        p[idx] = (uint16_t)carry;
        idx++;
        carry >>= 16;
        if (carry == 0) break;
        if (idx >= n) break;
    }
}
