#include "ffc/types.h"

int func_02067554(uint32_t *p) {
    uint32_t *a = (uint32_t *)p[0x13];
    uint32_t *b = (uint32_t *)a[1];
    uint32_t v = b[0];
    if (((v << 22) >> 30) == 2) {
        return 1;
    }
    return 0;
}
