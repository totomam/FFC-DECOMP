#include "ffc/types.h"

typedef struct { uint32_t a; int32_t b; } Elem;
typedef struct { int32_t a; int32_t b; } Key;
typedef struct { Elem *begin; Elem *end; } Range;

void func_ov002_021cc144(Elem **out, Range r, Key *key) {
    Elem **pb = &r.begin;
    int32_t n = r.end - *pb;
    while (n > 0) {
        int32_t half = n / 2;
        Elem *mid = *pb + half;
        if (key->b > mid->b) {
            n = half;
        } else {
            *pb = mid + 1;
            n -= half + 1;
        }
    }
    *out = *pb;
}
