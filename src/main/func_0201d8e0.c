/* cflags: -lang c++ */
#include "ffc/types.h"

struct Elem {
    uint32_t a, b, c, d, e, f;
    Elem() {}
    Elem(const Elem &o) : a(o.a), b(o.b), c(o.c), d(o.d), e(o.e), f(o.f) {}
    Elem &operator=(const Elem &o) { a=o.a; b=o.b; c=o.c; d=o.d; e=o.e; f=o.f; return *this; }
};

struct Hold { Elem e; Hold(const Elem &o) : e(o) {} ~Hold() {} };
inline void sw(Elem &x, Elem &y) { Hold h(x); x = y; y = h.e; }

extern "C" Elem *func_0201d8e0(Elem *first, Elem *middle, Elem *last);

Elem *func_0201d8e0(Elem *first, Elem *middle, Elem *last) {
    Elem *ret;
    Elem *i;

    if (first == middle) {
        return last;
    }
    if (middle == last) {
        return first;
    }
    i = middle;
    for (;;) {
        sw(*first, *i);
        first++;
        i++;
        if (i == last) {
            break;
        }
        if (first == middle) {
            middle = i;
        }
    }
    ret = first;
    if (first != middle) {
        i = middle;
        for (;;) {
            sw(*first, *i);
            first++;
            i++;
            if (i == last) {
                if (first == middle) break;
                i = middle;
            } else if (first == middle) {
                middle = i;
            }
        }
    }
    return ret;
}
