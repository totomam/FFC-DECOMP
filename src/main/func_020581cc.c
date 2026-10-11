#include "ffc/types.h"

uint32_t func_020581cc(uint32_t *a, uint32_t *b) {
    uint32_t x = a[1];
    uint32_t y = b[1];
    if (x <= y) {
        if (y < x + a[2]) {
            return 0;
        }
    }
    return 1;
}
