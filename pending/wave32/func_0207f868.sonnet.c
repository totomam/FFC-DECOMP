#include "ffc/types.h"
typedef struct { int32_t f0, f4, f8, fc; } Rng;
typedef struct { int32_t f0; Rng *rng; } Holder;
int32_t func_0207f868(int32_t u __attribute__((unused)), Holder *h, int32_t *q, int32_t mode)
{
    Rng *r = h->rng;
    int32_t v = *q;
    switch (mode) {
    case 0: mode = r->f4; break;
    case 1: mode = r->fc; break;
    case 2: mode = r->f8; break;
    default: mode = r->fc; break;
    }
    v += mode;
    if (v < r->f4 || v > r->f8) return 6;
    r->fc = v;
    *q = v;
    return 0;
}
