#include "ffc/types.h"

uint32_t func_02086bf8(uint32_t *p) {
    uint32_t *n = (uint32_t *)*p;
    if (n != 0) {
        uint32_t *nx = (uint32_t *)n[4];
        *p = (uint32_t)nx;
        if (nx != 0) {
            nx[5] = 0;
        } else {
            p[1] = 0;
        }
    }
    return (uint32_t)n;
}
