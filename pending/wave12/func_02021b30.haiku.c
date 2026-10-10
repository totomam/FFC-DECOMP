#include "ffc/types.h"

extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);

void func_02021b30(uint8_t *p) {
    uint32_t n = *(uint32_t *)(p + 0xb4);
    uint32_t m = *(uint32_t *)(p + 0xb8);
    func_02084b2c(m, 0, (n + 7) >> 3);
}
