#include "ffc/types.h"

extern int32_t func_ov009_021a5cdc(uint32_t ctx, uint32_t *mid, uint32_t value);

void func_ov009_021a5494(uint32_t **out, uint32_t *lo, uint32_t *hi, uint32_t value, uint32_t ctx)
{
    int32_t n = hi - lo;
    while (n > 0) {
        int32_t half = n / 2;
        uint32_t *mid = lo + half;
        if (func_ov009_021a5cdc(ctx, mid, value)) {
            lo = mid + 1;
            n -= half + 1;
        } else {
            n = half;
        }
    }
    *out = lo;
}
