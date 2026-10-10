#include "ffc/types.h"

uint32_t func_02086210(const uint8_t *a, const uint8_t *b, uint32_t n) {
    uint32_t i;
    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}
