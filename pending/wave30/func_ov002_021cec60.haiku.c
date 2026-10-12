#include "ffc/types.h"

typedef struct {
    uint32_t a;
    int32_t b;
} Elem;

typedef struct {
    Elem *begin;
    Elem *end;
} Range;

void func_ov002_021cec60(Elem **out, Range r, Elem *key)
{
    int32_t n = r.end - r.begin;
    while (n > 0) {
        int32_t half = n / 2;
        Elem *mid = r.begin + half;
        if (key->b < mid->b) {
            n = half;
        } else {
            r.begin = mid + 1;
            n = n - half - 1;
        }
    }
    *out = r.begin;
}
