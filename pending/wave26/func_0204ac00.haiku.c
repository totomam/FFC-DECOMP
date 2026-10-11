#include "ffc/types.h"

extern int32_t func_0204abf8(int32_t a, int32_t b, int32_t c, int32_t d);

int32_t func_0204ac00(int32_t *p, int32_t a, int32_t b, int32_t c, int32_t d) {
    int32_t r = func_0204abf8(a, b, c, d);
    if (r >= 0) {
        return r;
    }
    if (*p != 0) {
        return -1002;
    }
    if (r == -56) {
        return 0;
    }
    return -1001;
}
