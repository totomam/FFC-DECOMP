#include "ffc/types.h"

extern int func_02043864(void *a, void *p, uint32_t v, uint32_t w,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3);

int func_020438e0(void *self, void *param) {
    uint8_t *a = (uint8_t *)self;
    uint32_t *b = (uint32_t *)param;
    uint32_t *p;
    uint32_t t;
    uint32_t *ptr;
    uint32_t v;
    uint32_t w;
    uint32_t *d;

    if (*(void **)(a + 0x8c) != 0 && b[1] > 1) {
        p = *(uint32_t **)(a + 0xc0);
        t = p[0];
        if (t - 3 <= 1) {
            if (t == 3) {
                ptr = p + 2;
                v = p[1];
            } else {
                ptr = p + 5;
                v = p[4];
            }
            d = (uint32_t *)((uint8_t *)b + b[2]);
            w = *(uint32_t *)((uint8_t *)b + b[2]);
            if (func_02043864(a, ptr, v, w, d[1], d[2], d[3], d[4]) != 0) {
                return 1;
            }
        }
    }

    if (*(void **)(a + 0x8c) != 0 && b[1] <= 1) {
        p = *(uint32_t **)(a + 0xc0);
        t = p[0];
        if (t == 2) {
            if (p[1] == *(uint32_t *)((uint8_t *)b + b[2])) {
                return 1;
            }
        }
        if (t == 4) {
            if (p[1] == *(uint32_t *)((uint8_t *)b + b[2])) {
                return 1;
            }
        }
    }
    return 0;
}
