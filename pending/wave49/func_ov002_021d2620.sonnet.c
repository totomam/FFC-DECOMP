/* cflags: -lang c++ */
#include "ffc/types.h"

struct Six { uint32_t v[6]; };
struct Elem {
    uint32_t a0, a1, a2, a3, a4;
    Six s;
    uint32_t c;
};
struct Args {
    Elem *lo;
    Elem *hi;
    uint32_t x;
    uint32_t y;
};

static inline int key(const Elem *e)
{
    int s = 0;
    for (int i = 0; i < 6; i++) {
        s += e->s.v[i];
    }
    return s;
}

extern "C" void func_ov002_021d2620(Args args);
extern "C" void func_ov002_021d2620(Args args)
{
    Elem *cur;
    Elem tmp;

    if (args.lo == args.hi) {
        return;
    }
    for (cur = args.lo + 1; cur != args.hi; cur++) {
        if (key(cur) > key(cur - 1)) {
            Elem *dst = cur - 1;
            Elem *src = cur - 1;
            tmp = *cur;
            *cur = *(cur - 1);
            while (src != args.lo && key(&tmp) > key(--src)) {
                *dst = *src;
                dst--;
            }
            *dst = tmp;
        }
    }
}
