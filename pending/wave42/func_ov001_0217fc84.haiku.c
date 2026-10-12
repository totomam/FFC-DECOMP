#include "ffc/types.h"

extern void func_ov000_0216591c(void);
extern void func_02091c34(void);
extern uint32_t func_02091c0c(void);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);

uint8_t func_ov001_0217fc84(uint8_t *p)
{
    uint32_t i;
    uint32_t r5 = 0;

    func_ov000_0216591c();
    func_02091c34();
    func_02091c0c();
    *p = (uint8_t)(func_0209a76c(0, 0x5d) + 0x21);

    for (i = 1; i < 0x20; i++) {
        uint32_t c7 = (p[i - 1] < p[0]);
        uint32_t c1 = (p[0] < 0x4f);
        uint32_t c2 = (p[0] & 1);
        uint32_t t = ((i ^ p[i - 1]) & 1) ^ r5;
        r5 = (c2 ^ t ^ c1) ^ c7;

        func_02091c0c();
        *p = (uint8_t)(func_0209a76c(0, 0x5d) + 0x21);
        if (r5 != 0) {
            if ((p[i] & 1) == 0) p[i]++;
        } else {
            if ((p[i] & 1) == 1) p[i]++;
        }
    }
    return *p;
}
