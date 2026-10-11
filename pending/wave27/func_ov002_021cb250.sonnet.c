#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;
typedef struct { Pair *lo; Pair *hi; uint32_t c; uint32_t d; } Range;

void func_ov002_021cb250(Range r) {
    Pair *lo = r.lo;
    Pair *hi = r.hi;
    uint32_t t;
    if (lo == hi) return;
    hi = hi - 1;
    while (lo < hi) {
        t = lo->x; lo->x = hi->x; hi->x = t;
        t = lo->y; lo->y = hi->y; hi->y = t;
        lo++;
        hi--;
    }
}
