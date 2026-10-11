#include "ffc/types.h"

int func_ov006_0219c36c(uint32_t a, uint32_t b, int32_t c) {
    uint32_t k = 0x1fe;
    int32_t x, y, z, r;
    if (a > k || a < 0xe4) {
        return 0;
    }
    if (b > 0x10 || b < 8) {
        return 0;
    }
    x = (int32_t)(a + 0x26) << 2;
    k -= 0xb4;
    x = x + (int32_t)k;
    y = (int32_t)(b + 0x20);
    z = (y << 2) + 0x70;
    r = x + c * z;
    if (r < 0x15e0) {
        return 1;
    }
    return 0;
}
