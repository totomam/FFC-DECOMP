/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t a; int32_t b; };
struct Key { int32_t a; int32_t b; };
struct Range { Elem *begin; Elem *end; };

static inline void lb(Elem *&first, int32_t n, Key *key) {
    while (n > 0) {
        int32_t half = n / 2;
        Elem *mid = first + half;
        if (key->b > mid->b) {
            n = half;
        } else {
            first = mid + 1;
            n -= half + 1;
        }
    }
}

extern "C" void func_ov002_021cc144(Elem **out, Range r, Key *key) {
    int32_t n = r.end - r.begin;
    lb(r.begin, n, key);
    *out = r.begin;
}
