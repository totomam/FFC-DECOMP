#include "ffc/types.h"
typedef struct { int32_t *first; int32_t *last; } Range;
extern int32_t func_ov009_021a5cdc(int32_t y, int32_t x, int32_t *mid);
void func_ov009_021a54ec(int32_t **out, Range rg, int32_t x, int32_t y) {
    Range *p = &rg;
    volatile int32_t **pf = (volatile int32_t **)&p->first;
    int32_t *f = rg.first;
    int32_t n = rg.last - f;
    while (n > 0) {
        int32_t half = n / 2;
        int32_t *mid = f + half;
        if (func_ov009_021a5cdc(y, x, mid) == 0) {
            f = mid + 1;
            *pf = (volatile int32_t *)f;
            n -= half + 1;
        } else {
            n = half;
        }
    }
    *out = rg.first;
}
