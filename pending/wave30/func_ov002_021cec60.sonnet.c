/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem { uint32_t a; int32_t b; };
struct Range { Elem *begin; Elem *end; };

extern "C" void func_ov002_021cec60(Elem **out, Range r, Elem *key);

static inline int dist(Elem *&a, Elem *&b) { return b - a; }
static inline Elem *step(Elem *&a, int n) { return a + n; }

extern "C" void func_ov002_021cec60(Elem **out, Range r, Elem *key)
{
    int32_t n = dist(r.begin, r.end);
    while (n > 0) {
        int32_t half = n / 2;
        Elem *mid = step(r.begin, half);
        if (key->b < mid->b) {
            n = half;
        } else {
            r.begin = mid + 1;
            n -= half + 1;
        }
    }
    *out = r.begin;
}
