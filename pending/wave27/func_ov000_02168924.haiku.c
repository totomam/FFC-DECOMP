#include "ffc/types.h"

extern void *func_ov000_0216876c(void *a, int idx);

void *func_ov000_02168924(int *a, int (*cb)(void *, void *), void *ctx)
{
    int i;
    void *e;
    for (i = *a - 1; i >= 0; i--) {
        e = func_ov000_0216876c(a, i);
        if (cb(e, ctx) == 0) {
            return e;
        }
    }
    return 0;
}
