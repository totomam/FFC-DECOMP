#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    volatile uint32_t n;
} Obj;

extern uint32_t *func_ov002_021d2aa0(Obj *p, uint32_t i);

static inline uint32_t sum(Obj *p, uint32_t i)
{
    uint32_t *q = func_ov002_021d2aa0(p, i);
    uint32_t s = 0;
    int32_t k;
    for (k = 0; k < 6; k++) {
        s += q[5 + k];
    }
    return s;
}

int32_t func_ov002_021d0eb8(int32_t unused, Obj *p, int32_t a, int32_t b)
{
    uint32_t i;
    int32_t cnt = 0;

    for (i = 0; i < p->n; i++) {
        if (b == 0 && cnt == a) {
            return i;
        }
        if (i + 1 < p->n) {
            if (sum(p, i) != sum(p, i + 1)) {
                if (b != 0) {
                    cnt++;
                    if (cnt > a) {
                        return i;
                    }
                }
            }
        }
    }
    return p->n - 1;
}
