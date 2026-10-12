#include "ffc/types.h"

void func_02060a64(uint8_t *p, uint32_t unused, uint32_t *a, uint32_t *b, uint32_t n) {
    uint32_t i;
    for (i = 0; i < n; i++) {
        uint8_t mb = (uint8_t)(1u << b[i]);
        uint8_t ma = (uint8_t)(1u << a[i]);
        uint8_t f = p[8];
        uint32_t t1 = (f & ma) ? mb : 0;
        uint32_t t0 = (f & mb) ? ma : 0;
        p[8] = (uint8_t)(t0 | (f & ~(mb | ma)) | t1);
    }
}
