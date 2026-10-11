#include "ffc/types.h"

uint32_t *func_02086b94(uint32_t *p) {
    uint32_t *r2 = (uint32_t *)*p;
    if (r2 != 0) {
        uint32_t *r1 = (uint32_t *)r2[0x80 / 4];
        *p = (uint32_t)r1;
        if (r1 != 0) {
            r1[0x7c / 4] = 0;
        } else {
            p[1] = 0;
            r2[0x78 / 4] = 0;
        }
    }
    return r2;
}
