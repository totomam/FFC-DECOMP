#include "ffc/types.h"

extern int32_t func_ov000_02159000(void *p);
extern int32_t func_ov000_0215b560(void *p);
extern int32_t func_ov000_0215b778(void *p);
extern int32_t func_ov000_02164428(void *p);
extern int32_t func_ov000_0216498c(void *p);
extern int32_t func_ov000_021640a0(int32_t x);
extern int32_t func_ov000_02163c48(int32_t x);

int32_t func_ov000_02163d88(void *a, int32_t b) {
    int32_t n;
    int32_t x;
    if (func_ov000_02159000(a) != 0) {
        goto ret0;
    }
    if (b != 1) {
        goto cont;
    }
    if (func_ov000_0215b560(a) != 0) {
        goto cont;
    }
ret0:
    return 0;
cont:
    if (func_ov000_0215b778(a) == 0) {
        return 0;
    }
    if (func_ov000_02164428(a) == 1) {
        return 0;
    }
    n = func_ov000_0216498c(a);
    x = func_ov000_021640a0(b);
    if (n < x) {
        return 0;
    }
    return func_ov000_02163c48(x) != 0;
}
