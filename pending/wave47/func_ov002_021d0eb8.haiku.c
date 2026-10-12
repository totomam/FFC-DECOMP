#include "ffc/types.h"

typedef struct {
    uint32_t pad;
    uint32_t n;
} Obj;

extern uint32_t *func_ov002_021d2aa0(Obj *p, uint32_t i);

int32_t func_ov002_021d0eb8(int32_t unused, Obj *p, int32_t a, int32_t b)
{
    uint32_t i;
    uint32_t s1;
    uint32_t s2;
    uint32_t *q;
    uint32_t k;
    int32_t cnt = 0;

    for (i = 0; i < p->n; i++) {
        if (b == 0 && cnt == a) {
            return i;
        }
        if (i + 1 < p->n) {
            q = func_ov002_021d2aa0(p, i);
            s1 = 0;
            for (k = 0; k < 6; k++) {
                s1 += q[5 + k];
            }
            q = func_ov002_021d2aa0(p, i + 1);
            s2 = 0;
            for (k = 0; k < 6; k++) {
                s2 += q[5 + k];
            }
            if (s1 != s2) {
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
