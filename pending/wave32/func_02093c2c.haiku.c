#include "ffc/types.h"

void func_02093c2c(uint8_t *s, uint32_t n) {
    uint8_t *base = s + 5;
    uint8_t *p = base + n - 1;
    while (1) {
        if (*p < 9) {
            *p = *p + 1;
            return;
        }
        if (p == base) {
            *p = 1;
            *(int16_t *)(s + 2) += 1;
            return;
        }
        *p = 0;
        p--;
    }
}
