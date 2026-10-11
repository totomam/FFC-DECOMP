#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(uint32_t x);

void func_ov000_02153de8(uint32_t a)
{
    uint8_t *base;
    uint32_t n;
    uint16_t lim;
    uint16_t v;

    base = func_ov000_02152ae4(0x10);
    n = a;
    lim = *(uint16_t *)(base + 0x14ce);
    if (n > lim) {
        n = lim;
    }
    v = *(uint16_t *)(base + 0x14c6);
    *(uint16_t *)(base + 0x14c6) = v | (1u << (n - 1));
}
