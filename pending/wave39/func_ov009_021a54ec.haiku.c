#include "ffc/types.h"

typedef struct {
    int32_t *first;
    int32_t *last;
} Range;

extern int32_t func_ov009_021a5cdc(int32_t y, int32_t x, int32_t *mid);

void func_ov009_021a54ec(int32_t **out, Range rg, int32_t x, int32_t y) {
    int32_t n = rg.last - rg.first;
    int32_t half;
    int32_t *mid;
    while (n > 0) {
        half = n / 2;
        mid = rg.first + half;
        if (func_ov009_021a5cdc(y, x, mid) == 0) {
            rg.first = mid + 1;
            n -= half + 1;
        } else {
            n = half;
        }
    }
    *out = rg.first;
}
