/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem {
    int32_t x;
    int32_t y;
};

struct Range {
    Elem *first;
    Elem *last;
};

static inline void search(Elem *&first, Elem *last, Elem *key) {
    int32_t count = last - first;
    if (count > 0) {
        int32_t k = key->y;
        Elem *f = first;
        do {
            int32_t half = count / 2;
            Elem *mid = f + half;
            if (mid->y > k) {
                f = mid + 1;
                first = f;
                count -= half + 1;
            } else {
                count = half;
            }
        } while (count > 0);
    }
}

extern "C" void func_ov002_021cc100(Elem **out, Range r, Elem *key);
extern "C" void func_ov002_021cc100(Elem **out, Range r, Elem *key) {
    search(r.first, r.last, key);
    *out = r.first;
}
