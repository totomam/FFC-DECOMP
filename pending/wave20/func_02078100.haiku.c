#include "ffc/types.h"

extern void func_02078030(uint32_t p, uint32_t n, int32_t m);
extern void func_02078070(uint32_t p, uint32_t n, int32_t m);

void func_02078100(uint32_t p, uint32_t n, int32_t m)
{
    uint32_t base = p + 0x24;
    if (n == 0) {
        n = 1;
    }
    n = (n + 3) & ~3u;
    if (m >= 0) {
        func_02078030(base, n, m);
        return;
    }
    func_02078070(base, n, -m);
}
