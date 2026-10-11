#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t x);

void func_ov000_02153de8(uint32_t a)
{
    uint8_t *p = (uint8_t *)func_ov000_02152ae4(0x10);
    uint16_t m = *(uint16_t *)(p + 0x14ce);
    uint16_t cur;
    if (a > m) {
        a = m;
    }
    cur = *(uint16_t *)(p + 0x14c6);
    *(uint16_t *)(p + 0x14c6) = cur | (1 << (a - 1));
}
