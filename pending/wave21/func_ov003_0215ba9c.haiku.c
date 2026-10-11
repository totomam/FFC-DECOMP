#include "ffc/types.h"

extern int32_t func_0209a978(int32_t a, int32_t b);
extern void func_ov003_0215abac(void *a, uint16_t b);

void func_ov003_0215ba9c(uint8_t *p, int32_t x)
{
    int32_t n = *(int32_t *)(p + 0x1c) - 1;
    int32_t v = (n - x) * *(int32_t *)(p + 0x38) + *(int32_t *)(p + 0x3c) * x;
    int32_t t = func_0209a978(v, n);
    func_ov003_0215abac(*(void **)(p + 0x34), (uint16_t)t);
}
