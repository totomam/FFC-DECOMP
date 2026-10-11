#include "ffc/types.h"

int func_ov000_02166444(uint32_t *a, uint32_t *b) {
    uint16_t *pa;
    uint16_t *pb;
    if (a[0] != b[0]) {
        return 1;
    }
    pa = (uint16_t *)a;
    pb = (uint16_t *)b;
    if (pa[2] != pb[2]) {
        return 1;
    }
    return 0;
}
