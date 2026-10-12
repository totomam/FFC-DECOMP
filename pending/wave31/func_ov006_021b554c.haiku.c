#include "ffc/types.h"

extern void func_02083354(uint32_t x);
extern void func_02084a0c(uint32_t a, uint32_t b, uint32_t c);
extern void func_0208363c(void);

void func_ov006_021b554c(void)
{
    uint32_t r4;
    uint32_t r5;
    func_02083354(0x1f3);
    r4 = 1;
    func_02084a0c(0, 0x1au << 22, r4 << 18);
    func_02084a0c(0, 0x6880000, 9u << 14);
    func_0208363c();
    r5 = (r4 << 18) >> 9;
    r4 = (r4 << 18) >> 8;
    func_02084a0c(r5, 7u << 24, r4);
    func_02084a0c(0, 5u << 24, r4);
    func_02084a0c(r5, 0x7000400, r4);
    func_02084a0c(0, 0x5000400, r4);
}
