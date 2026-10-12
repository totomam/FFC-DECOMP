#include "ffc/types.h"

extern int32_t func_ov000_0216876c(int32_t *a, int32_t b);
extern int32_t func_ov000_021689a8(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t *f);
extern int32_t func_ov000_0216896c(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e);
extern int32_t func_0209a76c(int32_t a, int32_t b);

int32_t func_ov000_0216888c(int32_t *p, int32_t x, int32_t y, int32_t z, int32_t flag) {
    volatile int32_t f = 1;
    int32_t ret;
    int32_t v;

    if (p == 0 || (v = p[0]) == 0) {
        return -1;
    }
    if (flag != 0) {
        ret = func_ov000_0216876c(p, z);
        ret = func_ov000_021689a8(x, ret, v - z, p[2], y, (int32_t *)&f);
    } else {
        ret = func_ov000_0216896c(x, func_ov000_0216876c(p, z), v - z, p[2], y);
    }
    if (ret != 0 && f != 0) {
        return func_0209a76c(ret - p[5], p[2]);
    }
    return -1;
}
