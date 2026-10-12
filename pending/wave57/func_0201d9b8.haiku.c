#include "ffc/types.h"

extern int func_0209a76c(int a, int b);
extern uint32_t func_02036cd8(const void *object);
extern uint32_t func_02036cfc(const void *object);
extern uint32_t func_02036ce0(const void *object);

uint8_t *func_0201d9b8(uint8_t *a, uint8_t *b, uint8_t *k)
{
    int n = func_0209a76c((int)(b - a), 24);
    while (n > 0) {
        int half = n / 2;
        uint8_t *mid = a + half * 24;
        int c;
        if (func_02036cd8(mid) != 0) {
            if (func_02036cd8(k) == 0) {
                c = 1;
                goto done;
            }
        }
        if (func_02036cd8(k) == 0) {
            goto L50;
        }
        if (func_02036cd8(mid) == 0) {
            c = 0;
            goto done;
        }
    L50:
        if (func_02036cfc(mid) < func_02036cfc(k)) {
            c = 1;
            goto done;
        }
        if (func_02036cfc(mid) > func_02036cfc(k)) {
            c = 0;
            goto done;
        }
        if (func_02036cfc(mid) == 0) {
            c = 0;
            goto done;
        }
        c = func_02036ce0(mid) < func_02036ce0(k);
    done:
        if (c) {
            a = mid + 24;
            n -= half + 1;
        } else {
            n = half;
        }
    }
    return a;
}
