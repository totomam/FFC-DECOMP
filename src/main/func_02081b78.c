#include "ffc/types.h"

void func_02081b78(uint16_t *p, int32_t v)
{
    uint16_t f = *p;
    if (v < 0) {
        if ((f & 0xc0) == 0x80) {
            f = (f & ~0xc0) | 0xc0;
            *p = f;
        }
        p[2] = -v;
    } else {
        if ((f & 0xc0) == 0xc0) {
            f = (f & ~0xc0) | 0x80;
            *p = f;
        }
        p[2] = v;
    }
}
