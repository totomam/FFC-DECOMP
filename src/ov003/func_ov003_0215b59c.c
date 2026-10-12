#include "ffc/types.h"

extern int func_ov003_0215b54c(uint8_t *p);
extern int func_0202b2dc(void *x);

int func_ov003_0215b59c(uint8_t *p) {
    uint8_t *q;
    uint32_t r5;
    int16_t idx;
    uint8_t *e;
    uint8_t *f;
    uint8_t *g;
    uint16_t n;

    if (func_ov003_0215b54c(p) == 0) {
        return 0;
    }
    q = *(uint8_t **)(p + 0xa8);
    r5 = *(uint32_t *)(q + 0x88);
    idx = *(int16_t *)(p + 0x35c);
    e = q + *(uint32_t *)(q + r5 + idx * 4);
    if (e == 0) {
        return 0;
    }
    f = e + *(uint32_t *)(e + 4);
    g = f + (*(uint16_t *)(p + 0x35e) << 2);
    if (g == 0) {
        return 0;
    }
    n = *(uint16_t *)g;
    if (n == 0) {
        return func_0202b2dc(*(void **)(p + 0x110));
    }
    if (*(uint16_t *)(p + 0x360) > n) {
        return 1;
    }
    return 0;
}
