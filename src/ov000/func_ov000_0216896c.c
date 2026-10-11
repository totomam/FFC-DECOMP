#include "ffc/types.h"

uint8_t *func_ov000_0216896c(void *ctx, uint8_t *base, int n, int stride, int (*cb)(void *, uint8_t *))
{
    int i;
    int off;

    for (i = 0; i < n; i++) {
        off = stride * i;
        if (cb(ctx, base + off) == 0) {
            return base + off;
        }
    }
    return 0;
}
