#include "ffc/types.h"

extern int32_t func_ov000_0214c5f0(uint16_t *src, int32_t limit);
extern void func_02084b2c(void *dst, int32_t val, uint32_t size);

void func_ov000_0214c848(uint16_t *dst, uint16_t *src, uint32_t mult, int32_t limit) {
    int32_t n = func_ov000_0214c5f0(src, limit);
    uint32_t carry = 0;
    int32_t i = 0;
    while (i < n) {
        uint32_t t = mult * src[i] + carry;
        dst[i] = (uint16_t)t;
        carry = t >> 16;
        i++;
    }
    if (i < limit) {
        int32_t j = i;
        i++;
        dst[j] = (uint16_t)carry;
    }
    func_02084b2c(&dst[i], 0, (limit - i) * 2);
}
