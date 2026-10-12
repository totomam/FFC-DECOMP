#include "ffc/types.h"

extern int32_t func_02043548(void *ctx, void *elem);
extern int32_t func_020439a4(void *ctx, void *elem);

#define ELEM(k) ((uint8_t *)p + *(int32_t *)((uint8_t *)p + *(int32_t *)((uint8_t *)p + 8) + 4 * (k)))

int32_t func_02043558(void *a0, void *a1) {
    uint8_t *p;
    void *ctx;
    int32_t n;
    int32_t i, j, last;

    p = (uint8_t *)a1;
    n = *(int32_t *)(p + 4);
    if (n == 0) {
        return 1;
    }
    ctx = a0;
    i = 0;
    if (n > 0) {
        last = n - 1;
        do {
            if (func_02043548(ctx, ELEM(i)) == 0) {
                if (func_020439a4(ctx, ELEM(i)) == 0) {
                    for (j = i + 1; j < n; j++) {
                        if (func_02043548(ctx, ELEM(j))) {
                            i = j;
                            break;
                        }
                    }
                    if (i != j) {
                        return 0;
                    }
                } else {
                    if (i < last && func_02043548(ctx, ELEM(i + 1))) {
                        return 1;
                    }
                }
            }
            i++;
        } while (i < n);
    }
    return 1;
}
