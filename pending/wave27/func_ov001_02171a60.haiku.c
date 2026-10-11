#include "ffc/types.h"

typedef struct {
    void *f0;
    void *f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
} S;

uint32_t func_ov001_02171a60(void *a, S *b, uint8_t *c, int32_t d)
{
    if (a == 0) {
        return 0;
    }
    if (b == 0) {
        return 0;
    }
    if (c == 0) {
        return 0;
    }
    if (d <= 0) {
        return 0;
    }
    b->f0 = a;
    b->f8 = d;
    b->f4 = c;
    b->fc = 0;
    b->f10 = 0;
    b->f14 = 0;
    b->f18 = 1;
    b->f1c = 1;
    b->f20 = 0;
    *c = 0;
    return 1;
}
