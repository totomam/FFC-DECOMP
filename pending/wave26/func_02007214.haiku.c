#include "ffc/types.h"

void func_02007214(uint8_t *p, int32_t r1, int32_t r2)
{
    if (r1 > 0 && r1 < 0x12 && r2 > 1 && r2 < 0x12) {
        uint32_t v = *(uint32_t *)(p + 0x20 + r1 * 20);
        *(uint32_t *)(p + r2 * 20 + 0x20) = v;
        *(int32_t *)(p + r2 * 20 + 0x24) = r1;
        *(int32_t *)(p + v * 20 + 0x24) = r2;
        *(int32_t *)(p + 0x20 + r1 * 20) = r2;
    }
}
