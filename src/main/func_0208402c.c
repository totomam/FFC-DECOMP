#include "ffc/types.h"

void func_0208402c(const uint8_t *tbl, uint8_t *st, const uint8_t *d, uint32_t n) {
    uint8_t acc = *st;
    uint32_t i = 0;
    while (i < n) {
        uint8_t x = *d++;
        i++;
        acc = tbl[(uint8_t)(x ^ acc)];
    }
    *st = acc;
}
