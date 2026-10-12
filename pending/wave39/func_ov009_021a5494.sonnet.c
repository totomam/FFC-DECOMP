#include "ffc/types.h"
extern int32_t func_ov009_021a5cdc(uint32_t ctx, uint32_t *mid, uint32_t value);

void func_ov009_021a5494(uint32_t **out, uint32_t * volatile lo, uint32_t * volatile hi, uint32_t value, uint32_t ctx)
{
    uint32_t *l = lo;
    int32_t n = hi - l;
    while (n > 0) {
        int32_t half = n / 2;
        uint32_t *mid = l + half;
        if (func_ov009_021a5cdc(ctx, mid, value)) {
            l = mid + 1;
            lo = l;
            n -= half + 1;
        } else {
            n = half;
        }
    }
    *out = lo;
}
