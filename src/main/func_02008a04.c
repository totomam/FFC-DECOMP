#include "ffc/types.h"

extern void func_02006ca4(int32_t a, int32_t b, int32_t c, int32_t d);

void func_02008a04(void)
{
    int32_t x = 0x2c;
    x -= 0x2d;
    func_02006ca4(0x66, 0x6b, 0x2c, x);
}
