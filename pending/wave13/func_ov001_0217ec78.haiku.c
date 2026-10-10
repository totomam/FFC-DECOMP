#include "ffc/types.h"

extern void func_020928f0(uint8_t *dst, uint32_t a, uint32_t n);

void func_ov001_0217ec78(uint8_t *dst, uint32_t a, uint32_t n)
{
    func_020928f0(dst, a, n);
    *(dst + n - 1) = 0;
}
