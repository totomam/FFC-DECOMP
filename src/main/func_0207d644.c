#include "ffc/types.h"

extern void func_0207d47c(uint32_t a, uint32_t b);

void func_0207d644(void)
{
    volatile uint32_t *dma = (volatile uint32_t *)0x40001a4;
    uint32_t v;

    func_0207d47c(0xb5, 0);
    v = *(uint32_t *)0x2fffae0;
    v = (v & 0xf8ffffff) | (0xaU << 28);
    *dma = v & (0xf8ffffffU << 13);
    while (*dma & (0x80000000U)) {
    }
}
