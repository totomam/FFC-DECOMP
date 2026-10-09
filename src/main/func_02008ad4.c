#include "ffc/types.h"

extern void func_02006ca4(int32_t a, int32_t b, int32_t c, int32_t d);

void func_02008ad4(void)
{
    int32_t x = 0x3a;
    x -= 0x3b;
    func_02006ca4(0x66, 0x72, 0x3a, x);
}
