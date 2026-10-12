#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);

void func_ov003_02155adc(uint8_t *p) {
    int n;
    func_02084b2c(p + 0xac, 0, 0x24);
    *(uint16_t *)(p + 0xbe) = 1;
    *(uint16_t *)(p + 0xc0) = 0;
    *(uint32_t *)(p + 0x104) = 0;
    *(uint32_t *)(p + 0x348) = 0;
    *(uint32_t *)(p + 0x34c) = 0;
    *(uint16_t *)(p + 0x30c) = 0;
    *(uint16_t *)(p + 0x30e) = 0;
    n = 0x28;
    func_02084b2c(p + 0xd0, 0, n);
    n -= 0x29;
    *(int16_t *)(p + 0x3ba) = n;
    *(uint8_t *)(p + 0x3b8) = 0;
    *(int8_t *)(p + 0x3b9) = n;
    *(uint16_t *)(p + 0x314) = 0;
}
