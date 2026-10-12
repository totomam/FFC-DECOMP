#include "ffc/types.h"

extern void func_0208481c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_020848b8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_01ff8f28(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_020858dc(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_0208481c(a, 0xFFFFFFFFu, c, d);
    func_020848b8(a, b, d, 0x01000000u);
    if (d != 0) {
        volatile uint32_t *dma = (volatile uint32_t *)0x40000b0;
        while (dma[a * 3 + 2] & 0x80000000u) {
        }
        func_01ff8f28(a, b, c, 0xaf000001u, 0);
    }
}
