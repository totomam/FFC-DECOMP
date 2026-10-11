#include "ffc/types.h"

extern void func_02088f30(void);

void func_0204f64c(uint8_t *a, uint32_t idx, uint32_t c, uint32_t d) {
    uint8_t *flags = a + 0x28;
    if (flags[idx]) {
        func_02088f30();
    }
    flags[idx] = 1;
    {
        uint32_t *cfg = (uint32_t *)(a + 0x34);
        uint32_t v = cfg[idx];
        v &= ~7u;
        v |= c & 7u;
        v &= ~0x18u;
        v |= (d & 3u) << 3;
        v |= 0x80u;
        cfg[idx] = v;
    }
}
