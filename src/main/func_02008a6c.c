#include "ffc/types.h"

extern void func_02006ca4(int32_t a, int32_t b, int32_t c, int32_t d);

void func_02008a6c(void)
{
    int32_t x = 0x32;
    x -= 0x33;
    func_02006ca4(0x66, 0x6b, 0x32, x);
}
