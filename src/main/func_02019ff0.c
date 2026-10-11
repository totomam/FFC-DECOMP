#include "ffc/types.h"

uint8_t func_02019ff0(uint8_t *p, uint32_t n) {
    if (n >= 1 && n <= 3) {
        uint8_t *q = p + (n - 1);
        return q[13];
    }
    return 0;
}
