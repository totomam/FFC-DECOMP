#include "ffc/types.h"

extern int32_t func_ov001_02186e30(int8_t *s, int32_t n);

int32_t func_ov001_021875d8(int8_t *s, int32_t n) {
    int32_t k;
    while (n > 0 && *s != 0) {
        k = func_ov001_02186e30(s, n);
        if (k < 0) {
            return 0;
        }
        n -= k;
        s += k;
        k = func_ov001_02186e30(s, n);
        if (k < 0) {
            return 0;
        }
        s += k;
        n -= k;
    }
    if (n == 0) {
        return 0;
    }
    return *s == 0;
}
