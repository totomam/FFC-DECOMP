#include "ffc/types.h"

extern int32_t func_02093be0(uint8_t *p, int32_t n);
extern void func_02093c2c(uint8_t *p, int32_t n);

void func_02093c64(uint8_t *p, int32_t n) {
    if (n <= 0) {
        return;
    }
    if (n >= p[4]) {
        return;
    }
    {
        int32_t r = func_02093be0(p, n);
        p[4] = (uint8_t)n;
        if (r < 0) {
            return;
        }
        func_02093c2c(p, n);
    }
}
