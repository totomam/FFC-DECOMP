#include "ffc/types.h"

extern void func_02089e14(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_02089df4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    func_02089e14(7, a | (e << 24), b, c, d);
}
