#include "ffc/types.h"

extern void func_ov000_0216591c(void);
extern void func_02091c34(void);
extern uint32_t func_02091c0c(void);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

uint8_t *func_ov001_0217fc84(uint8_t *p)
{
    uint32_t i;
    uint32_t r5;
    uint32_t h;

    func_ov000_0216591c();
    func_02091c34();
    h = func_0209a76c(func_02091c0c(), 0x5d) >> 32;
    *p = h + 0x21;
    r5 = 0;

    for (i = 1; i < 0x20; i++) {
        uint8_t *q = p + i;
        uint32_t a = q[-1];
        uint32_t b = *p;
        uint32_t c7 = (a < b);
        uint32_t c1 = (b < 0x4f);
        uint32_t c2 = (b & 1);
        uint32_t t = ((i ^ a) & 1) ^ r5;
        r5 = (c2 ^ t ^ c1) ^ c7;

        h = func_0209a76c(func_02091c0c(), 0x5d) >> 32;
        *q = h + 0x21;
        if (r5 != 0) {
            if ((*q & 1) == 0) (*q)++;
        } else {
            if ((*q & 1) == 1) (*q)++;
        }
    }
    return p;
}
