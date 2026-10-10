#include "ffc/types.h"

extern void func_0202d574(uint32_t x);

void func_ov003_0214befc(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x408);
    if (v != 0) {
        func_0202d574(v);
    }
}
