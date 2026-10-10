#include "ffc/types.h"

extern void func_02006968(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02008328(uint32_t x);

void func_02007c68(uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_02006968(a, b, c, d);
    if (d != 0) {
        func_02008328(0x31);
    }
}
