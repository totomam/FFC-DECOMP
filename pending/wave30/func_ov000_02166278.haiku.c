#include "ffc/types.h"

int func_ov000_02166278(uint32_t c, uint8_t *out)
{
    if (c <= 0x7f) {
        out[0] = c;
        return 1;
    }
    if (c <= 0x7ff) {
        out[0] = 0xc0 | ((int32_t)c >> 6);
        out[1] = 0x80 | (c & 0x3f);
        return 2;
    }
    out[0] = 0xe0 | ((int32_t)c >> 12);
    out[1] = 0x80 | (((int32_t)c >> 6) & 0x3f);
    out[2] = 0x80 | (c & 0x3f);
    return 3;
}
