#include "ffc/types.h"

int32_t func_ov000_0214da7c(uint8_t *a, int32_t *out, uint16_t *o1, uint16_t *o2, uint32_t *o3)
{
    uint8_t *base = *(uint8_t **)(a + 0xa0);
    uint8_t *obj = *(uint8_t **)(base + 0xc4);
    int32_t t = *(int32_t *)(base + 0xf8);
    int32_t d = *(int32_t *)(obj + 0x50) - t;
    if (d >= 0) {
        *o1 = *(uint16_t *)(obj + 0xa);
        *o2 = *(uint16_t *)(obj + 0x18);
        *o3 = *(uint32_t *)(obj + 0x1c);
        *out = d;
        if (d == 0 && *(uint8_t *)(obj + 8) != 4) {
            return 0;
        }
    } else {
        *out = -1;
        return 0;
    }
    return *(int32_t *)(obj + 0x4c) + t;
}
