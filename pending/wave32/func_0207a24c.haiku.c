#include "ffc/types.h"

extern int32_t func_0208a404(uint32_t x);
extern void func_02089d10(uint32_t mask, uint32_t lo, int32_t hi);
extern uint32_t data_0213eb74[];

void func_0207a24c(uint8_t *a, uint32_t b)
{
    int32_t i = 0;
    *(uint32_t *)(a + 0x44) = b;
    while (i < *(int32_t *)(a + 0x50)) {
        uint32_t k = a[0x54 + i];
        int32_t v = func_0208a404(*(uint32_t *)(a + 0x44) + data_0213eb74[k * 2 + 1]);
        func_02089d10(1u << k, (uint8_t)v, v >> 8);
        i++;
    }
}
