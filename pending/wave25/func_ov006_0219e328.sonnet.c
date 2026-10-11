#include "ffc/types.h"

uint32_t func_ov006_0219e328(uint8_t *p, int32_t n) {
    int32_t off = n - 1;
    uint32_t h = 0;
    uint8_t *q = p + off;
    int32_t i = h;
    for (; i < n; i++) {
        h = (h << 8) + *q--;
    }
    return h;
}
