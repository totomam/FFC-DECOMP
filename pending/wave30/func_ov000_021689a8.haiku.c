#include "ffc/types.h"

void *func_ov000_021689a8(const void *key, uint8_t *base, int32_t n, int32_t size, int32_t (*cmp)(const void *, const void *), int32_t *found)
{
    int32_t lo = 0;
    int32_t hi = n - 1;
    int32_t mid;
    int32_t c;

    *found = 0;
    while (lo <= hi) {
        mid = (lo + hi) >> 1;
        c = cmp(base + mid * size, key);
        if (c == 0) {
            *found = 1;
        }
        if (c < 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return base + lo * size;
}
