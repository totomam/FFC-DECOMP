#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern int32_t data_020b2b74[];

typedef struct {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
} S;

void func_02089914(S *p, int32_t v) {
    int32_t r4 = v;
    uint32_t i;
    int32_t base = 0x16d;

    if (v < 0) {
        r4 = 0;
    }
    if (r4 > 0x8eac) {
        r4 = 0x8eac;
    }
    p->fc = (int32_t)(func_0209a76c(r4 + 6, 7) >> 32);

    for (i = 0; i < 0x63; i++) {
        int32_t prev = r4;
        int32_t days = base;
        if (!(i & 3)) {
            days++;
        }
        r4 -= days;
        if (r4 < 0) {
            r4 = prev;
            break;
        }
    }

    if (r4 > 0x16d) {
        r4 = 0x16d;
    }
    p->f0 = i;

    if (!(i & 3)) {
        if (r4 < 0x3c) {
            if (r4 < 0x1f) {
                p->f4 = 1;
            } else {
                p->f4 = 2;
                r4 -= 0x1f;
            }
            p->f8 = r4 + 1;
            return;
        }
        r4 -= 1;
    }

    for (i = 11; i >= 0; i--) {
        if (r4 >= data_020b2b74[i]) {
            p->f4 = i + 1;
            p->f8 = r4 - data_020b2b74[i] + 1;
            return;
        }
    }
}
