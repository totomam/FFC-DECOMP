#include "ffc/types.h"
extern void func_02084e04(void *a, void *b, uint32_t c);
static inline uint16_t bs(uint16_t v)
{
    return (uint16_t)(((v & 0xff00) >> 8) | ((v << 24) >> 16));
}
uint32_t func_ov000_021503e4(int a, uint8_t *b, void *c, uint32_t d, void *e, uint32_t f)
{
    uint32_t n = d + f;
    uint8_t *p;
    if (a == 2) {
        *(uint16_t *)(b + 0xc) = bs((uint16_t)n);
        p = b + 0xe;
        n += 0xe;
    } else {
        p = b;
    }
    func_02084e04(c, p, d);
    if (e != 0 && f != 0)
        func_02084e04(e, p + d, f);
    return n;
}
