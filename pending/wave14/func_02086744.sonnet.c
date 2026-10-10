/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" uint8_t data_02fe0000[];
struct Num { int v; Num(int x) : v(x) {} };
inline int sub(const Num &a, int b) { return b - a.v; }
extern "C" void func_02086744(void)
{
    uint32_t b = (uint32_t)data_02fe0000;
    uint32_t i = 0x3f7c;
    *(uint32_t *)(b + i) = 0xfddb597d;
    i += 4;
    uint32_t q = b + i;
    *(uint32_t *)sub(0x800, q) = 0x7bf9dd5b;
}
