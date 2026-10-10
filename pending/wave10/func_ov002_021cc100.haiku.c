#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Elem;

typedef struct {
    Elem *first;
    Elem *last;
} Range;

void func_ov002_021cc100(Elem **out, Range r, Elem *key) {
    int32_t count = r.last - r.first;
    if (count > 0) {
        int32_t k = key->y;
        do {
            int32_t half = count / 2;
            Elem *mid = r.first + half;
            if (mid->y <= k) {
                count = half;
            } else {
                r.first = mid + 1;
                count -= half + 1;
            }
        } while (count > 0);
    }
    *out = r.first;
}
