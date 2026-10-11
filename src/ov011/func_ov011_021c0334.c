#include "ffc/types.h"

extern void func_ov009_0219a358(void *p);
extern void func_ov011_021c037c(uint8_t *a, uint8_t x, uint32_t idx);
extern void func_ov009_0219a014(void *p);

void func_ov011_021c0334(uint8_t *a, uint32_t b)
{
    uint8_t *p = *(uint8_t **)(a + 0x174);
    p[0xa4] = 0xf;
    func_ov009_0219a358(*(void **)(a + 0xd8 + b * 4));
    {
        uint8_t x = (uint8_t)(a[0x279] + a[0x27d] * 10 - 5);
        func_ov011_021c037c(a, x, b);
    }
    func_ov009_0219a014(*(void **)(a + 0x170));
}
