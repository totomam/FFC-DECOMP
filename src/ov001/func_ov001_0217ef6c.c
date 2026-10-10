#include "ffc/types.h"

extern void func_ov001_0217ec78(uint32_t a, uint32_t b, uint32_t c);

void func_ov001_0217ef6c(uint32_t *p, uint32_t b)
{
    func_ov001_0217ec78(*p, b, 1 << 8);
}
