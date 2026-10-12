#include "ffc/types.h"

extern int func_0208e8e8(void *a, uint32_t b, void *c, uint32_t d);

int func_0208e8ac(void *p, uint16_t *q, uint32_t bit) {
    uint32_t mask = 1u << bit;
    uint32_t h1;
    uint32_t h2;
    if (p == 0) {
        return 0;
    }
    if (q == 0) {
        return 0;
    }
    h1 = q[0];
    h2 = q[1];
    if (!(h1 & mask)) {
        return 0;
    }
    if (h2 & mask) {
        return func_0208e8e8(p, h1, q + 2, bit);
    }
    return 0;
}
