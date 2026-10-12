/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02090398(uint32_t dst, uint32_t src, uint32_t size);

static inline const int32_t &mn(const int32_t &a, const int32_t &b) { return (a < b) ? a : b; }

typedef struct {
    uint32_t cur;
    uint32_t first;
    uint32_t limit;
    uint32_t wrap;
} Ring;

extern "C" void func_0205c390(Ring *out, Ring *pa, Ring *a, Ring *b)
{
    int32_t nb, sc1, sc2;
    
    int32_t k;
    int32_t sz;
    uint32_t base, lim, pc, plim, alim, ac;

    while (pa->cur != a->cur) {
        if (a->cur == a->first) {
            a->cur = a->wrap;
        }
        a->cur -= 4;
        if (b->cur == b->first) {
            b->cur = b->wrap;
        }
        b->cur -= 4;
        base = (b->cur < b->limit) ? b->first : b->limit;
        nb = (int32_t)(b->cur - base) / 4;

        pc = pa->cur;
        plim = pa->limit;
        alim = a->limit;
        ac = a->cur;
        if ((pc >= plim) == (ac >= alim)) {
            sc1 = (int32_t)(ac - pc) / 4;
            k = mn(nb, sc1);
        } else {
            lim = (ac < alim) ? a->first : alim;
            sc2 = (int32_t)(ac - lim) / 4;
            k = mn(nb, sc2);
        }
        a->cur -= (uint32_t)k * 4;
        sz = (((k + 1) * 4) / 4) * 4;
        func_02090398(b->cur + 4 - sz, a->cur, sz);
        b->cur -= (uint32_t)k * 4;
    }
    out->cur = b->cur;
    out->first = b->first;
    out->limit = b->limit;
    out->wrap = b->wrap;
}
