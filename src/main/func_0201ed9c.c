#include "ffc/types.h"

extern void func_0201d230(void *a, uint32_t b, uint32_t c);

void func_0201ed9c(void *self, uint32_t n)
{
    uint32_t base;
    if (n <= 1) {
        n = 1;
    }
    n = n - 1;
    base = *(uint32_t *)((uint8_t *)self + 0x78);
    func_0201d230(self, base + ((n << 3) * 0x18), 8);
}
