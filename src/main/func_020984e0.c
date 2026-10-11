#include "ffc/types.h"

extern int32_t func_020985b0(uint8_t *s, uint8_t v);

int32_t func_020984e0(uint8_t *p)
{
    if (p[0x25]) {
        if (p[0x26]) {
            if (func_020985b0(p, p[0x24]) < 0) {
                return -1;
            }
        }
        p[0x26] = 0;
    }
    return 0;
}
