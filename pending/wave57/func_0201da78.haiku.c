#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t diff, int32_t divisor);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

uint8_t *func_0201da78(uint8_t *a, uint8_t *b, uint8_t *c)
{
    uint8_t *first = a;
    int32_t count = func_0209a76c((int32_t)b - (int32_t)a, 24);

    while (count > 0) {
        int32_t half = count / 2;
        uint8_t *mid = first + half * 24;
        int32_t cond;
        uint32_t k1c, k1m, k2c, k2m, k3c, k3m;

        if (func_02036cd8(c) != 0) {
            if (func_02036cd8(mid) == 0) {
                cond = 1;
                goto done;
            }
        }
        if (func_02036cd8(mid) == 0) {
            goto stage2;
        }
        if (func_02036cd8(c) != 0) {
            goto stage2;
        }
        cond = 0;
        goto done;

stage2:
        k1c = func_02036cfc(c);
        k1m = func_02036cfc(mid);
        if (k1c < k1m) {
            cond = 1;
            goto done;
        }
        k2c = func_02036cfc(c);
        k2m = func_02036cfc(mid);
        if (k2c > k2m) {
            cond = 0;
            goto done;
        }
        if (func_02036cfc(c) == 0) {
            cond = 0;
            goto done;
        }
        k3c = func_02036ce0(c);
        k3m = func_02036ce0(mid);
        cond = (k3c < k3m);

done:
        if (!cond) {
            first = mid + 24;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
