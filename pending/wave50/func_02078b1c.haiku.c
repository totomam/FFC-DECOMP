#include "ffc/types.h"

extern void func_02084a0c(uint32_t a, uint8_t *b, int32_t c);

typedef struct {
    uint8_t *base;
    int32_t stride1;
    int32_t count;
    uint8_t mode;
    int32_t stride0;
} S;

void func_02078b1c(S *p, uint32_t v) {
    uint32_t y;
    int32_t m;
    int32_t s0;
    int32_t s1;
    int32_t i;
    uint8_t *b;
    uint8_t mode;

    mode = p->mode;
    if (mode == 4) {
        y = v | (v << 4);
        y = y | (y << 8);
    } else {
        y = v | (v << 8);
    }
    v = y | (y << 16);
    m = (mode << 6) / 8;
    s0 = m * p->stride0;
    b = p->base;
    s1 = m * p->stride1;
    for (i = 0; i < p->count; i++) {
        func_02084a0c(v, b, s1);
        b += s0;
    }
}
