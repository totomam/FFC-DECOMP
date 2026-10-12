#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

typedef struct {
    uint32_t w[6];
} Elem;

#define LESS_THAN(x, y) \
    ((func_02036cd8(x) && !func_02036cd8(y)) ? 1 : \
     (func_02036cd8(y) && !func_02036cd8(x)) ? 0 : \
     (func_02036cfc(x) < func_02036cfc(y)) ? 1 : \
     (func_02036cfc(x) > func_02036cfc(y)) ? 0 : \
     (func_02036cfc(x) == 0) ? 0 : \
     (func_02036ce0(x) < func_02036ce0(y)))

void func_0201e73c(Elem *first, Elem *last)
{
    Elem *p;
    Elem *q;
    Elem *h;
    Elem tmp;

    if (first == last) {
        return;
    }
    for (p = first + 1; p != last; p++) {
        if (LESS_THAN(p, p - 1)) {
            tmp = *p;
            q = p - 1;
            *p = *q;
            h = q;
            while (q != first && (q--, LESS_THAN(&tmp, q))) {
                *h = *q;
                h--;
            }
            *h = tmp;
        }
    }
}
