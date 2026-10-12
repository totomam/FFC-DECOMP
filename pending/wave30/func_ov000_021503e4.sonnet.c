#include "ffc/types.h"

extern void func_02084e04(void *a, void *b, uint32_t c);

uint32_t func_ov000_021503e4(int mode, uint8_t *a1, void *a2, uint32_t c, void *p5, uint32_t e)
{
    uint32_t r5 = c + e;
    uint8_t *p;

    if (mode == 1) {
        p = a1;
    } else if (mode == 2) {
        uint32_t v = (uint16_t)r5;
        *(uint16_t *)(a1 + 0xc) = (uint16_t)(((v & 0xff00u) >> 8) | ((v & 0xffu) << 8));
        p = a1 + 0xe;
        r5 += 0xe;
    } else {
        p = a1;
    }

    func_02084e04(a2, p, c);
    if (p5 != 0 && e != 0) {
        func_02084e04(p5, p + c, e);
    }
    return r5;
}
