#include "ffc/types.h"

typedef struct {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
} Rng;

typedef struct {
    int32_t f0;
    Rng *rng;
} Holder;

int32_t func_0207f868(int32_t unused, Holder *h, int32_t *q, int32_t mode)
{
    Rng *r = h->rng;
    int32_t v = *q;

    if (mode == 0) {
        v += r->f4;
    } else if (mode == 2) {
        v += r->f8;
    } else {
        v += r->fc;
    }
    if (v < r->f4) {
        return 6;
    }
    if (v > r->f8) {
        return 6;
    }
    r->fc = v;
    *q = v;
    return 0;
}
