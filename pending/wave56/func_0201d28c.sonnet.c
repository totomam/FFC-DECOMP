/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem {
    uint32_t a, b, c, d, e, f;
    Elem() {}
    Elem(const Elem &o) : a(o.a), b(o.b), c(o.c), d(o.d), e(o.e), f(o.f) {}
    Elem &operator=(Elem o) { a = o.a; b = o.b; c = o.c; d = o.d; e = o.e; f = o.f; return *this; }
};
struct Flag { uint8_t b; };
struct St { int32_t a; int32_t b; Flag f; };

extern "C" uint32_t func_02036cd8(const void *object);
extern "C" void func_0201d344(void *base, void *end, Flag f);
extern "C" void func_0201d28c(void *unused, Elem *arr, uint32_t n);

extern "C" void func_0201d28c(void *unused, Elem *arr, uint32_t n) {
    int32_t hole;
    uint32_t i;
    Elem *p;
    St s;

    for (;;) {
        hole = -1;
        for (i = 0; i < n; i++) {
            s.a = s.b = hole;
            p = &arr[i];
            if (func_02036cd8(p)) {
                if (hole != s.a) {
                    Elem cur(*p);
                    *p = arr[hole];
                    arr[hole] = cur;
                    goto restart;
                }
            } else if (hole == s.b) {
                hole = i;
            }
        }
        break;
restart:
        ;
    }

    s.f.b = 0;
    func_0201d344(arr, arr + n, s.f);
}
