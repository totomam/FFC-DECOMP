#include "ffc/types.h"

int func_ov000_021495ac(uint8_t *p)
{
    uint8_t c = *p;
    if (c == 0x7f) {
        return 0;
    }
    if (c < 1) {
        return 0;
    }
    if (c > 0xdf) {
        return 0;
    }
    return 1;
}
