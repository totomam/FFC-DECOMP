#include "ffc/types.h"

extern void func_02006ca4(int32_t a, int32_t b, int32_t c, int32_t d);

void func_02008a80(void)
{
    int32_t x = 0x35;
    x -= 0x36;
    func_02006ca4(0x66, 0x6d, 0x35, x);
}
