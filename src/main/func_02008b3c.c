#include "ffc/types.h"

extern void func_02006ca4(int32_t a, int32_t b, int32_t c, int32_t d);

void func_02008b3c(void)
{
    int32_t x = 0x3b;
    x -= 0x3c;
    func_02006ca4(0x66, 0x72, 0x3b, x);
}
