#include "ffc/types.h"

extern void func_0207c914(uint8_t *p, uint32_t v);

void func_02079a9c(uint8_t **pp, uint32_t r1) {
    if (*(int32_t *)pp != 0) {
        uint8_t *p = *pp;
        if (p[0x2c] != 2) {
            func_0207c914(p + 0x1c, r1 << 8);
        }
    }
}
