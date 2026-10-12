#include "ffc/types.h"

extern int32_t func_020367bc(uint8_t *p, int32_t i);

void func_02036a44(uint8_t *p, int32_t v)
{
    uint8_t *base;
    uint32_t i;
    uint32_t off;
    for (i = 0, base = p + 0x34; i < 5; i++) {
        off = i * 4;
        if (p[off + 0x34] != 0) {
            if (func_020367bc(p, i) == v) {
                base[off] = 0;
                base[off + 1] = 0;
                base[off + 2] = 0;
                base[off + 3] = 0;
            }
        }
    }
}
